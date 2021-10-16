#include <stdio.h>
#include <stdlib.h>


#include "ros/ros.h"

#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"

#include <iostream>
#include <math.h>
#include "std_msgs/Int8.h"


void chatterCallback(const std_msgs::Int8::ConstPtr& x)
{
  if((x->data)==49){
  
  ROS_INFO("homeing");
  
  }
}

int main(int argc, char **argv)
{


  ros::init(argc, argv, "intreciver");
  
    ros::NodeHandle n;
    
      ros::Subscriber sub = n.subscribe("int", 1000, chatterCallback);
      
      ros::spin();

  return 0;
}
