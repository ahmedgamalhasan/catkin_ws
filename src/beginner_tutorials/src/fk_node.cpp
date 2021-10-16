#include <stdio.h>
#include <stdlib.h>


#include "ros/ros.h"

#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"
#include "std_msgs/Float32MultiArray.h"
#include <iostream>
#include <math.h>
#include "std_msgs/Int8.h"
#include <fstream>
#include <iostream>
#include <libusb-1.0/libusb.h>
#include <string>
using namespace std;

float Arrr[5];
void write();

void calc(float arr[]);

void chatterCallback( const std_msgs::Float32MultiArray::ConstPtr& x)
{
 /* if((x->data[0])==50){
  
  ROS_INFO("FOWERED KINEMATICS");
  
  }*/
  int i = 0;
  for(std::vector<float>::const_iterator it = x->data.begin(); it != x->data.end(); ++it)
	{
		Arrr[i] = *it;
		i++;
	}
	//Arr[0]=50;
	
 
  if(Arrr[0]==2){
  
  ROS_INFO("FOWERED KINEMATICS 2");
  calc(Arrr);
  write();
  }
 
}


int main(int argc, char **argv)
{


  ros::init(argc, argv, "fk_node");
  
    ros::NodeHandle n;
    
      ros::Subscriber sub = n.subscribe("topic_2", 1000, chatterCallback);
      
      ros::spin();

  return 0;
}




void calc(float arr[]){

float theta_1=Arrr[1];
float theta_2=Arrr[2];
float theta_3=Arrr[3];

float x=0;
float y=0;
float theta=0;



//cout<<"pleas enter the 3 angels"<<endl;
//cin>>theta_1>>theta_2>>theta_3;
theta=theta_1+theta_2+theta_3;
theta_2*=(M_PI/180);
theta_1*=(M_PI/180);
x=(200*cos(theta_1))+(150*cos(theta_1+theta_2))+(0);
y=(200*sin(theta_1))+(150*sin(theta_1+theta_2))+(0);


cout<<"X = "<<x<<endl<<"Y = "<<y<<endl<<"Theta = "<<theta<<endl;




}




void write()
{

int a=0;
fstream usb;
usb.open("/dev/ttyUSB0",fstream::out);

if(usb.good()){



usb << Arrr[0];
usb << "#";
usb << Arrr[1];
usb << "#";
usb << Arrr[2];
usb << "#";
usb << Arrr[3];
usb << "#";


usb.close();

cout<<"data sent to avr";
}else{cout<<"ttl problem"<<endl;}




}
