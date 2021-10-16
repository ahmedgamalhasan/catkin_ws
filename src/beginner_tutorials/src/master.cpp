#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Int64.h"
#include "std_msgs/Int8.h"
//#include <beginner_tutorials/Num>
//#include <mood_msg/moodMsg.h>
#include "std_msgs/Float32MultiArray.h"

#include <sstream>
#include <iostream>

using namespace std;


int check =0;

float Arr[]={2,50,2,3,4};


std_msgs::Float32MultiArray msg;


int main(int argc, char **argv)
{

  ros::init(argc, argv, "master");
  
  
      ros::NodeHandle n;//
      ros::Publisher topic_2_pub = n.advertise<std_msgs::Float32MultiArray>("topic_2", 1000);//
      
        ros::Rate loop_rate(1);
        
        
        ROS_INFO("for homeing enter 1");
	ROS_INFO("for FK enter 2");
	ROS_INFO("for IK enter 3");


         while (ros::ok())
  {
  
/*  while(cin>>check){*/
cin>>check;
  
  if(check==1){// 1 for homeing
     
	Arr[0]=1;
	ROS_INFO("hioo");
	check=0;
	//ROS_INFO("data sent");
    }

if(check==2){ // 2 for fk
	std::cout<<"pleas enter the 3 angels"<<std::endl;
	Arr[0]=2;
	std::cin>>(Arr[1])>>(Arr[2])>>(Arr[3]);
    /* msg.theta_1=theta_1;
	msg.theta_2=theta_2;
	msg.theta_3=theta_3;
	msg.x=0;
	msg.y=0;
	msg.theta=0;  */
	check=0;
	//ROS_INFO("data sent");
    }
 if(check==3){ // 3 for ik
 	std::cout<<"enter the x y theta "<<std::endl;
	Arr[0]=3;
	std::cin>>(Arr[1])>>(Arr[2])>>(Arr[3]);
 /*     msg.theta_1=theta_1;
	msg.theta_2=theta_2;
	msg.theta_3=theta_3;
	msg.x=0;
	msg.y=0;
	msg.theta=0;*/
	check=0;
	//ROS_INFO("data sent");
    }/*}*/
  
  int i = 0;
  for(std::vector<float>::const_iterator it = msg.data.begin(); it != msg.data.end(); ++it)
	{
		//Arr[i] = *it;
		//*it=Arr[i]
		msg.data[i]=Arr[i];
		i++;
	}
	msg.data.clear();
	for(int j=0;j<5;j++){
			msg.data.push_back(Arr[j]);
	}
  
   topic_2_pub.publish(msg);//
//ROS_INFO("data sentttttt");
ROS_INFO(" data sent please select mood");
   //ros::spinOnce();
  ros::spinOnce();
   loop_rate.sleep();
    
  }


  return 0;
}

