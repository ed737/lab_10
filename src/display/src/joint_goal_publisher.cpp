#include <ros/ros.h>
#include "sensor_msgs/JointState.h"
#include "dobot/Joint.h"
#include <iostream>

class JointStateSub{
  
    public:
        JointStateSub(ros::NodeHandle* nh){
            this->sub = nh->subscribe("/joint_states", 10, &JointStateSub::subCallback, this);
            this->pub = nh->advertise<dobot::Joint>("/dobot/joint_goal", 10); 
            jStates.name.push_back("joint_1");
            jStates.name.push_back("joint_2");
            jStates.name.push_back("joint_3");
            jStates.name.push_back("stable_joint");
            jStates.position.push_back(0.0);
            jStates.position.push_back(0.0);
            jStates.position.push_back(0.0);
            jStates.position.push_back(0.0);
            
        }

        void pubToDobot(){
            dobot::Joint output;
            output.J1 = jStates.position[0];
            output.J2 = jStates.position[1];
            output.J3 = jStates.position[2];
            output.J4 = jStates.position[3];
            std::cout << "Publishing joint message: J1 = " << jStates.position[0]
                << " J2 = " << jStates.position[1]
                << " J3 = " << jStates.position[2]
                << " J4 = " << jStates.position[3] << std::endl;
            pub.publish(output);
        }
    private:
        ros::Subscriber sub;
        ros::Publisher pub;
        sensor_msgs::JointState jStates;

        void subCallback(const sensor_msgs::JointState& msg){
            jStates.header = msg.header;
            jStates.position[0] = msg.position[0];
            jStates.position[1] = msg.position[1];
            jStates.position[2] = msg.position[2];
            jStates.position[3] = msg.position[3];

        }

       
};

int main(int argc, char** argv){


    //  Initialise node
    ros::init(argc, argv, "joint_states_sub");
    ros::NodeHandle nh;

    //  Create object instance for converting, passing topics into constructor
    JointStateSub pubCall = JointStateSub(&nh);
    ros::Rate rate(5);
    while(ros::ok()){

        std::cout << "Press enter to publish joint states to dobot..." << std::endl;
        
        pubCall.pubToDobot();
        std::cin.ignore();
        ros::spinOnce();
        rate.sleep();
    }
    

}