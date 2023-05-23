#include <string>

#include <ros/ros.h>
#include "dobot/SetPTPCmd.h"
#include "dobot/PTPCommand.h"

class PTPCommandClient{
    private:

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

        ros::ServiceClient ptp_client;
        ros::Subscriber ptp_sub; 
        dobot::SetPTPCmd ptp_srv;

        std::string ptpModeToString(const uint8_t inMode){
            std::string result = "";
            switch(inMode){
                case PTPMode::JUMP_XYZ:
                    result = " JUMP_XYZ ";
                break;
                case PTPMode::MOVJ_XYZ:
                    result = " MOVJ_XYZ ";
                break;
                case PTPMode::MOVL_XYZ:
                    result = " MOVL_XYZ ";
                break;
                case PTPMode::JUMP_ANGLE:
                    result = " JUMP_ANGLE ";
                break;
                case PTPMode::MOVJ_ANGLE:
                    result = " MOVJ_ANGLE ";
                break;
                case PTPMode::MOVL_ANGLE:
                    result = " MOVL_ANGLE ";
                break;
                case PTPMode::MOVJ_INC:
                    result = " MOVJ_INC ";
                break;
                case PTPMode::MOVL_INC:
                    result = " MOVL_INC ";
                break;
                case PTPMode::MOVJ_XYZ_INC:
                    result = " MOVJ_XYZ_INC ";
                break;            
            }
            return result;
        }

        void PTPCommandSubCallback(const dobot::PTPCommand& msg){
            
            ptp_srv.request.ptpMode = msg.ptpMode;
            ptp_srv.request.x = msg.x;
            ptp_srv.request.y = msg.y;
            ptp_srv.request.z = msg.z;
            ptp_srv.request.r = msg.r;

            std::cout << std::endl << "Mode = " << ptpModeToString(msg.ptpMode) 
                                << " x = " << msg.x
                                << " y = " << msg.y
                                << " z = " << msg.z
                                << " r = " << msg.r << std::endl;

            ptp_client.call(ptp_srv);
        }

    public:

    // constructor
    PTPCommandClient(ros::NodeHandle* nhPtr){
        ptp_client = nhPtr->serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
        ptp_sub = nhPtr->subscribe("/dobot/ptp_commands", 10, &PTPCommandClient::PTPCommandSubCallback, this);
    }

    // destructor
    ~PTPCommandClient(){
        
    }
};


int main(int argc, char** argv){
    
    ros::init(argc, argv, "ptp_cmd_client");
    ros::NodeHandle nh;

    bool ptp_cmd_service_availiable = ros::service::waitForService("/DobotServer/SetPTPCmd", 10000);

    if(ptp_cmd_service_availiable){
        ROS_INFO("PTPCmd Client: Connected to service /DobotServer/SetPTPCmd.");
        PTPCommandClient client = PTPCommandClient(&nh);

        ros::spin();
    }

    else{
        ROS_ERROR("ptp_command_client: Unable to connect to service /DobotServer/SetPTPCmd.");
        ros::requestShutdown();
    }

}