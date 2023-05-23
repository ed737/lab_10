/**
 * File Name:   pose_publisher.cpp
 * Author:       
 * Package:     /dobot
 * Description: This file contains code for a ROS node that connects to the DobotServer service GetPose, and publishes its data to ROS topics
 */

#include "ros/ros.h"
#include "dobot/GetPose.h"
#include "dobot/CartesianSimple.h"
#include "dobot/CartesianQuat.h"
#include "dobot/Joint.h"
#include "geometry_msgs/Pose.h"
#include "sensor_msgs/JointState.h"
#include <cmath>
#include <iostream>



class PoseClientPublisher {
    private:
        ros::ServiceClient pose_client;
        dobot::GetPose getPose_srv;
        ros::Publisher cartesian_pose_simple_pub;
        ros::Publisher cartesian_pose_quat_pub;
        ros::Publisher joint_pose_pub;

    public:
        PoseClientPublisher(ros::NodeHandle *nh) {
            pose_client = nh->serviceClient<dobot::GetPose>("/DobotServer/GetPose");
            cartesian_pose_simple_pub = nh->advertise<dobot::CartesianSimple>("/dobot/cartesian_simple_pose", 10);
            cartesian_pose_quat_pub = nh->advertise<dobot::CartesianQuat>("/dobot/cartesian_quat_pose", 10);
            joint_pose_pub = nh->advertise<dobot::Joint>("/dobot/joint_pose", 10);
        }

        void updatePose() {

/*
            pose_client.call(getPose_srv);
            dobot::CartesianSimple cartesian_pose_simple_msg;
            cartesian_pose_simple_msg.x = getPose_srv.response.x;
            cartesian_pose_simple_msg.y = getPose_srv.response.y;
            cartesian_pose_simple_msg.z = getPose_srv.response.z;
            cartesian_pose_simple_msg.r = getPose_srv.response.r;
            std::cout << std::endl << "Publishing cartesian pose: x: " << cartesian_pose_simple_msg.x
                    << " y: " << cartesian_pose_simple_msg.y
                    << " z: " << cartesian_pose_simple_msg.z
                    << " r: " << cartesian_pose_simple_msg.r << std::endl;
            cartesian_pose_simple_pub.publish(cartesian_pose_simple_msg);

            dobot::CartesianQuat cartesian_pose_quat_msg;

            double abs = sqrt(pow(getPose_srv.response.x,2) + pow(getPose_srv.response.y,2) + pow(getPose_srv.response.z, 2));
            double theta = 2.0*asin(abs);
            cartesian_pose_quat_msg.x = getPose_srv.response.x * abs * sin(theta/2.0);
            cartesian_pose_quat_msg.y = getPose_srv.response.y * abs * sin(theta/2.0);
            cartesian_pose_quat_msg.z = getPose_srv.response.z * abs * sin(theta/2.0);
            cartesian_pose_quat_msg.w = cos(theta/2.0);
*/
            // test values
            dobot::CartesianQuat cartesian_pose_quat_msg;
            double x = 260.0;
            double y = 0.0;
            double z = 0.0;
            double abs = sqrt(pow(x,2) + pow(y,2) + pow(z, 2));
            double x_norm = x/abs;
            double y_norm = y/abs;
            double z_norm = z/abs;

            double theta = 1.0;

            std::cout << std::endl << "Abs = " << abs
                    << " theta = " << theta << std::endl;

            cartesian_pose_quat_msg.x = (x / abs) * sin(theta/2.0);
            cartesian_pose_quat_msg.y = (y / abs) * sin(theta/2.0);
            cartesian_pose_quat_msg.z = (z / abs) * sin(theta/2.0);
            cartesian_pose_quat_msg.w = cos(theta/2.0);

            std::cout << "Publishing quaternion pose: x: " << cartesian_pose_quat_msg.x
                    << " y: " << cartesian_pose_quat_msg.y
                    << " z: " << cartesian_pose_quat_msg.z
                    << " w: " << cartesian_pose_quat_msg.w << std::endl;
            cartesian_pose_quat_pub.publish(cartesian_pose_quat_msg);
/*
            dobot::Joint joint_pose_msg;
            joint_pose_msg.J1 = getPose_srv.response.jointAngle[0];
            joint_pose_msg.J2 = getPose_srv.response.jointAngle[1];
            joint_pose_msg.J3 = getPose_srv.response.jointAngle[2];
            joint_pose_msg.J4 = getPose_srv.response.jointAngle[3];
             std::cout << "Publishing joint pose: J1: " <<  joint_pose_msg.J1
                    << " J2: " << joint_pose_msg.J2
                    << " J3: " << joint_pose_msg.J3
                    << " J4: " << joint_pose_msg.J4 << std::endl << std::endl;
            joint_pose_pub.publish(joint_pose_msg);
*/
        }

        float deg_to_rad(float deg_angle) {
            return deg_angle*(M_PI/180.0);
        }

};

int main(int argc, char **argv)
{
    ros::init(argc, argv, "pose_publisher");
    ros::NodeHandle nh;
    bool getPose_service_available = ros::service::waitForService("/DobotServer/GetPose", 10000);

    if (getPose_service_available) {
        ROS_INFO("pose_publisher: Connected to service /DobotServer/GetPose.");
        PoseClientPublisher pose_publisher = PoseClientPublisher(&nh);
        ros::Rate rate(5);

        while (ros::ok()) {
            pose_publisher.updatePose();
            ros::spinOnce();
            rate.sleep();
        }
    }
    else {
        ROS_ERROR("pose_publisher: Unable to connect to service /DobotServer/GetPose.");
        ros::requestShutdown();
    }

    return 0;
}

