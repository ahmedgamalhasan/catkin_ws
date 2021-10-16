/*#include <stdio.h>
#include <stdlib.h>


#include "ros/ros.h"

#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"

#include <iostream>
#include <math.h>
#include "std_msgs/Int8.h"


void chatterCallback(const std_msgs::Int8::ConstPtr& x)
{
  if((x->data)==51){
  
  ROS_INFO("INVERS KINEMATICS");
  
  }
}

int main(int argc, char **argv)
{


  ros::init(argc, argv, "if_node");
  
    ros::NodeHandle n;
    
      ros::Subscriber sub = n.subscribe("int", 1000, chatterCallback);
      
      ros::spin();

  return 0;
}*/

#include <stdio.h>
#include <stdlib.h>


#include "ros/ros.h"

#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"
#include "std_msgs/Float32MultiArray.h"
#include <iostream>
#include <math.h>
#include "std_msgs/Int8.h"
#include <iostream>
#include <fstream>
#include <libusb-1.0/libusb.h>
#include <string>

using namespace std;
float Arr[5];

void calc(float arr[]);
void write();


void chatterCallback( const std_msgs::Float32MultiArray::ConstPtr& x)
{
 /* if((x->data[0])==50){
  
    ROS_INFO("INVERS KINEMATICS");
  
  }*/
  int i = 0;
  for(std::vector<float>::const_iterator it = x->data.begin(); it != x->data.end(); ++it)
	{
		Arr[i] = *it;
		i++;
	}
	//Arr[0]=50;
	 if((Arr[0])==3){
  
    ROS_INFO("INVERS KINEMATICS");
  calc(Arr);
  write();
  }
}

int main(int argc, char **argv)
{


  ros::init(argc, argv, "ik_node");
  
    ros::NodeHandle n;
    
      ros::Subscriber sub = n.subscribe("topic_2", 1000, chatterCallback);
      
      ros::spin();

  return 0;
}



void calc(float arr[]){


float theta_1=0;
float theta_2=0;
float theta_3=0;

float x=arr[1];
float y=arr[2];
float theta=arr[3];


float d=0;
float f=0;
float a=0;
float b=0;
float l_1=200;
float l_2=150;

//cout<<"enter the x y theta "<<endl;
//cin>>x>>y>>theta;

d=2*l_1*l_2;
f=(pow(x,2)+pow(y,2)-pow(l_1,2)-pow(l_2,2));
	
theta_2=acos(f/d);


a=l_1+(l_2*cos(theta_2));
b=l_2*sin(theta_2);

theta_1=acos(((a*x)+(b*y))/((pow(a,2))+(pow(b,2))));
theta_1*=(180/M_PI);
theta_2*=(180/M_PI);
theta_3=theta-theta_1-theta_2;

cout<<"theta_1 = "<<theta_1<<endl<<"theta_2 = "<<theta_2<<endl<<"Theta_3 = "<<theta_3<<endl;



Arr[1]=theta_1;
Arr[2]=theta_2;
Arr[3]=theta_3;



}




void write()
{

int a=0;
fstream usb;
usb.open("/dev/ttyUSB0",fstream::out);

if(usb.good()){



usb << Arr[0];
usb << "#";
usb << Arr[1];
usb << "#";
usb << Arr[2];
usb << "#";
usb << Arr[3];
usb << "#";


usb.close();


cout<<"data sent to avr";

}else{cout<<"ttl problem"<<endl;}


}
