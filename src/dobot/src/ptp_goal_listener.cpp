#include <ros/ros.h>
#include <dobot/PTPCommand.h>
#include <dobot/Joint.h>
#include <cmath>



class GoalListener{
    
    private:
    ros::Publisher ptp_pub;
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

    void PTPJointCallback(const dobot::Joint& msg){
        dobot::PTPCommand cmd;
        cmd.ptpMode = uint8_t(PTPMode::MOVL_ANGLE);
        cmd.x = msg.J1;
        cmd.y = msg.J2;
        cmd.z = msg.J3;
        cmd.r = msg.J4;
        std::cout << "Publishing joint message: J1 = " << cmd.x 
                << " J2 = " << cmd.y 
                << " J3 = " << cmd.z 
                << " J4 = " << cmd.r << std::endl;
        ptp_pub.publish(cmd);
    }

    public:
    GoalListener(ros::NodeHandle* nh){
        ptp_pub = nh->advertise<dobot::PTPCommand>("/dobot/ptp_commands", 10);
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