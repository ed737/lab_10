#include <ros/ros.h>
#include "sensor_msgs/JointState.h"

class JointStateSub{
  
    public:
        JointStateSub(ros::NodeHandle* nh){
            this->sub = nh->subscribe<sensor_msgs::JointState>("joint_states", 10, &SubCallback, this);
            this->pub = nh.advertise<>("/*topic_name*/", 10);    
        }

    private:
        ros::Subscriber sub;
        ros::Publisher pub;
        
        
        double joint_states[4];
        
        void subCallback(const sensor_msgs::JointState& msg){
            
        }
        void publish()
};

int main(int argc, char** argv){


    //  Initialise node
    ros::init(argc, argv, "joint_states_sub");
    ros::NodeHandle nh;

    //  Create object instance for converting, passing topics into constructor
    JointVisualsConverter converter = JointStateSub(&nh);

    //  Spin until ROS shutdown
    ros::spin();
}