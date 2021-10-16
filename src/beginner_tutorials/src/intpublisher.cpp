#include <stdio.h>
#include <stdlib.h>


#include "ros/ros.h"

#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"

#include <iostream>

#include "std_msgs/Int8.h"


int main(int argc, char **argv)
{
    

	ros::init(argc, argv, "intpublisher");

	ros::NodeHandle n;


  ros::Rate loop_rate(10);
  
	ros::Publisher pub = n.advertise<std_msgs::Int8>("topic_1", 1000);

ROS_INFO("for homeing enter 1");
ROS_INFO("for FK enter 2");
ROS_INFO("for IK enter 3");
	while (ros::ok())
	{
		std_msgs::Int8 x;
		//Clear array
		
		//for loop, pushing data in the size of the array
		std::cin>>x.data;
		//Publish array
		pub.publish(x);
		//Let the world know
		ROS_INFO("I published something!");
		//Do this.
		ros::spinOnce();
		//Added a delay so not to spam
    loop_rate.sleep();
	}

}
