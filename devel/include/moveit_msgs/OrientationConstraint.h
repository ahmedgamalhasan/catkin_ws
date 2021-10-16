// Generated by gencpp from file moveit_msgs/OrientationConstraint.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_ORIENTATIONCONSTRAINT_H
#define MOVEIT_MSGS_MESSAGE_ORIENTATIONCONSTRAINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct OrientationConstraint_
{
  typedef OrientationConstraint_<ContainerAllocator> Type;

  OrientationConstraint_()
    : header()
    , orientation()
    , link_name()
    , absolute_x_axis_tolerance(0.0)
    , absolute_y_axis_tolerance(0.0)
    , absolute_z_axis_tolerance(0.0)
    , parameterization(0)
    , weight(0.0)  {
    }
  OrientationConstraint_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , orientation(_alloc)
    , link_name(_alloc)
    , absolute_x_axis_tolerance(0.0)
    , absolute_y_axis_tolerance(0.0)
    , absolute_z_axis_tolerance(0.0)
    , parameterization(0)
    , weight(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _link_name_type;
  _link_name_type link_name;

   typedef double _absolute_x_axis_tolerance_type;
  _absolute_x_axis_tolerance_type absolute_x_axis_tolerance;

   typedef double _absolute_y_axis_tolerance_type;
  _absolute_y_axis_tolerance_type absolute_y_axis_tolerance;

   typedef double _absolute_z_axis_tolerance_type;
  _absolute_z_axis_tolerance_type absolute_z_axis_tolerance;

   typedef uint8_t _parameterization_type;
  _parameterization_type parameterization;

   typedef double _weight_type;
  _weight_type weight;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(XYZ_EULER_ANGLES)
  #undef XYZ_EULER_ANGLES
#endif
#if defined(_WIN32) && defined(ROTATION_VECTOR)
  #undef ROTATION_VECTOR
#endif

  enum {
    XYZ_EULER_ANGLES = 0u,
    ROTATION_VECTOR = 1u,
  };


  typedef boost::shared_ptr< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> const> ConstPtr;

}; // struct OrientationConstraint_

typedef ::moveit_msgs::OrientationConstraint_<std::allocator<void> > OrientationConstraint;

typedef boost::shared_ptr< ::moveit_msgs::OrientationConstraint > OrientationConstraintPtr;
typedef boost::shared_ptr< ::moveit_msgs::OrientationConstraint const> OrientationConstraintConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::OrientationConstraint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::moveit_msgs::OrientationConstraint_<ContainerAllocator1> & lhs, const ::moveit_msgs::OrientationConstraint_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.orientation == rhs.orientation &&
    lhs.link_name == rhs.link_name &&
    lhs.absolute_x_axis_tolerance == rhs.absolute_x_axis_tolerance &&
    lhs.absolute_y_axis_tolerance == rhs.absolute_y_axis_tolerance &&
    lhs.absolute_z_axis_tolerance == rhs.absolute_z_axis_tolerance &&
    lhs.parameterization == rhs.parameterization &&
    lhs.weight == rhs.weight;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::moveit_msgs::OrientationConstraint_<ContainerAllocator1> & lhs, const ::moveit_msgs::OrientationConstraint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "183479d9281e5b4f23dc584f711d8a64";
  }

  static const char* value(const ::moveit_msgs::OrientationConstraint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x183479d9281e5b4fULL;
  static const uint64_t static_value2 = 0x23dc584f711d8a64ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/OrientationConstraint";
  }

  static const char* value(const ::moveit_msgs::OrientationConstraint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains the definition of an orientation constraint.\n"
"\n"
"Header header\n"
"\n"
"# The desired orientation of the robot link specified as a quaternion\n"
"geometry_msgs/Quaternion orientation\n"
"\n"
"# The robot link this constraint refers to\n"
"string link_name\n"
"\n"
"# Tolerance on the three vector components of the orientation error (optional)\n"
"float64 absolute_x_axis_tolerance\n"
"float64 absolute_y_axis_tolerance\n"
"float64 absolute_z_axis_tolerance\n"
"\n"
"# Defines how the orientation error is calculated\n"
"# The error is compared to the tolerance defined above\n"
"uint8 parameterization\n"
"\n"
"# The different options for the orientation error parameterization\n"
"# - Intrinsic xyz Euler angles (default value)\n"
"uint8 XYZ_EULER_ANGLES=0\n"
"# - A rotation vector. This is similar to the angle-axis representation,\n"
"# but the magnitude of the vector represents the rotation angle.\n"
"uint8 ROTATION_VECTOR=1\n"
"\n"
"# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n"
"float64 weight\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::moveit_msgs::OrientationConstraint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.orientation);
      stream.next(m.link_name);
      stream.next(m.absolute_x_axis_tolerance);
      stream.next(m.absolute_y_axis_tolerance);
      stream.next(m.absolute_z_axis_tolerance);
      stream.next(m.parameterization);
      stream.next(m.weight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OrientationConstraint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::OrientationConstraint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::OrientationConstraint_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "link_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_name);
    s << indent << "absolute_x_axis_tolerance: ";
    Printer<double>::stream(s, indent + "  ", v.absolute_x_axis_tolerance);
    s << indent << "absolute_y_axis_tolerance: ";
    Printer<double>::stream(s, indent + "  ", v.absolute_y_axis_tolerance);
    s << indent << "absolute_z_axis_tolerance: ";
    Printer<double>::stream(s, indent + "  ", v.absolute_z_axis_tolerance);
    s << indent << "parameterization: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.parameterization);
    s << indent << "weight: ";
    Printer<double>::stream(s, indent + "  ", v.weight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_ORIENTATIONCONSTRAINT_H
