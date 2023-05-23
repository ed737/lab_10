#include <ros/ros.h>
#include <dobot/PTPCommand.h>
#include <dobot/CartesianSimple.h>
#include <dobot/CartesianQuat.h>
#include <dobot/Joint.h>
#include <cmath>



class GoalListener{
    
    private:
    ros::Publisher ptp_pub;
    ros::Subscriber simple_sub;
    ros::Subscriber quat_sub;
    ros::Subscriber joint_sub;
    
    // this enum used to match dobot firware ptpMode enum
    typedef enum PTPMode : uint8_t{
        JUMP_XYZ,
        MOVJ_XYZ,
        MOVL_XYZ,
        JUMP_ANGLE,
        MOVJ_ANGLE,
        MOVL_ANGLE,
        MOVJ_INC,
        MOVL_INC,
        MOVJ_XYZ_INC
    }PTPMode;


    void PTPSimpleCallback(const dobot::CartesianSimple& msg){
        dobot::PTPCommand cmd;
        cmd.ptpMode = uint8_t(PTPMode::MOVL_XYZ);
        cmd.x = msg.x;
        cmd.y = msg.y;
        cmd.z = msg.z;
        cmd.r = msg.r;
        ptp_pub.publish(cmd);
    }

    void PTPQuatCallback(const dobot::CartesianQuat& msg){
        dobot::PTPCommand cmd;

        /*
        
        Direction cosine matrix (DCM):

        [ q0^2+q1^2-q2^2-q3^2, 2(q1q1+q0q3), 2(q1q3-q0q2) ]  
        [ 2(q1q2-q0q3), q0^2, 2(q2q3+q0q1) ]
        [ 2(q1q3+q0q2), 2(q2q3-q0q1), |Q| ]

        Phi = atan2(DCM(2,3), DCM(3,3)) = atan2((q2q3+q0q1), )
        Theta = asin(-DCM(1,3)) = asin(-2(q1q3-q0q2))
        Gamma = atan2(DCM(1,2), DCM(1,1)) = atan2(2(q1q2+q0q3), |Q|)

        note: q0 = w (scalar first)

        */

        // calculate DCM values:
        double dcm11 = sqrt(pow(msg.w,2) + pow(msg.x,2) - pow(msg.y,2) - pow(msg.z,2));
        double dcm22 = sqrt(pow(msg.w,2) - pow(msg.x,2) + pow(msg.y,2) - pow(msg.z,2)); 
        double dcm33 = sqrt(pow(msg.w,2) - pow(msg.x,2) - pow(msg.y,2) + pow(msg.z,2));

        double dcm12 = 2*(msg.x*msg.y + msg.w*msg.z);
        double dcm13 = 2*(msg.x*msg.z - msg.w*msg.y);

        double dcm21 = 2*(msg.x*msg.y - msg.w*msg.z);
        double dcm23 = 2*(msg.y*msg.z + msg.w*msg.x);

        double dcm31 = 2*(msg.x*msg.z + msg.w*msg.y);
        double dcm32 = 2*(msg.y*msg.z - msg.w+msg.x);

        double phi = atan2(dcm23, dcm33);
        double theta = asin(-1*dcm13);
        double gamma = atan2(dcm12, dcm11);
        
        std::cout << std::endl << "phi = " << phi << ", theta = " << theta << ", gamma = " << gamma << std::endl; 
/*
        cmd.ptpMode = PTPMode::MOVJ_XYZ;
        cmd.x = msg.x;
        cmd.y = msg.y;
        cmd.z = msg.z;
        cmd.r = msg.w;
        ptp_pub.publish(cmd); */
    }
    void PTPJointCallback(const dobot::Joint& msg){
        dobot::PTPCommand cmd;
        cmd.ptpMode = uint8_t(PTPMode::MOVL_ANGLE);
        cmd.x = msg.J1;
        cmd.y = msg.J2;
        cmd.z = msg.J3;
        cmd.r = msg.J4;
        ptp_pub.publish(cmd);
    }

    public:
    GoalListener(ros::NodeHandle* nh){
        ptp_pub = nh->advertise<dobot::PTPCommand>("/dobot/ptp_commands", 10);
        simple_sub = nh->subscribe("/dobot/cartesian_simple_goal", 10, &GoalListener::PTPSimpleCallback, this);
        quat_sub = nh->subscribe("/dobot/cartesian_quat_goal", 10, &GoalListener::PTPQuatCallback, this);
        joint_sub = nh->subscribe("/dobot/joint_goal", 10, &GoalListener::PTPJointCallback, this);
    }

};


int main(int argc, char** argv){
    ros::init(argc, argv, "ptp_goal_listener");
    ros::NodeHandle nh;
    
    bool ptp_cmd_service_availiable = ros::service::waitForService("/DobotServer/SetPTPCmd", 10000);

    if(ptp_cmd_service_availiable){
        GoalListener goalListener = GoalListener(&nh);

        ros::spin();
    }

    else{
        ROS_ERROR("ptp_goal_listener: Service unavailable /DobotServer/SetPTPCmd.");
        ros::requestShutdown();
    }
}