// Generated by gencpp from file industrial_msgs/GetRobotInfoResponse.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_MSGS_MESSAGE_GETROBOTINFORESPONSE_H
#define INDUSTRIAL_MSGS_MESSAGE_GETROBOTINFORESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <industrial_msgs/DeviceInfo.h>
#include <industrial_msgs/DeviceInfo.h>
#include <industrial_msgs/ServiceReturnCode.h>

namespace industrial_msgs
{
template <class ContainerAllocator>
struct GetRobotInfoResponse_
{
  typedef GetRobotInfoResponse_<ContainerAllocator> Type;

  GetRobotInfoResponse_()
    : controller()
    , robots()
    , code()  {
    }
  GetRobotInfoResponse_(const ContainerAllocator& _alloc)
    : controller(_alloc)
    , robots(_alloc)
    , code(_alloc)  {
  (void)_alloc;
    }



   typedef  ::industrial_msgs::DeviceInfo_<ContainerAllocator>  _controller_type;
  _controller_type controller;

   typedef std::vector< ::industrial_msgs::DeviceInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::industrial_msgs::DeviceInfo_<ContainerAllocator> >::other >  _robots_type;
  _robots_type robots;

   typedef  ::industrial_msgs::ServiceReturnCode_<ContainerAllocator>  _code_type;
  _code_type code;




  typedef boost::shared_ptr< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetRobotInfoResponse_

typedef ::industrial_msgs::GetRobotInfoResponse_<std::allocator<void> > GetRobotInfoResponse;

typedef boost::shared_ptr< ::industrial_msgs::GetRobotInfoResponse > GetRobotInfoResponsePtr;
typedef boost::shared_ptr< ::industrial_msgs::GetRobotInfoResponse const> GetRobotInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'industrial_msgs': ['/home/ros/catkin_ws/src/industrial_core/industrial_msgs/msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5db3230b3e61c85a320b999ffd7f3b3f";
  }

  static const char* value(const ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5db3230b3e61c85aULL;
  static const uint64_t static_value2 = 0x320b999ffd7f3b3fULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_msgs/GetRobotInfoResponse";
  }

  static const char* value(const ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_msgs/DeviceInfo controller\n\
industrial_msgs/DeviceInfo[] robots\n\
industrial_msgs/ServiceReturnCode code\n\
\n\
\n\
================================================================================\n\
MSG: industrial_msgs/DeviceInfo\n\
# Device info captures device agnostic information about a piece of hardware.\n\
# This message is meant as a generic as possible.  Items that don't apply should\n\
# be left blank.  This message is not meant to replace diagnostic messages, but\n\
# rather provide a standard service message that can be used to populate standard\n\
# components (like a GUI for example)\n\
\n\
string model\n\
string serial_number\n\
string hw_version\n\
string sw_version\n\
string address\n\
\n\
================================================================================\n\
MSG: industrial_msgs/ServiceReturnCode\n\
# Service return codes for simple requests.  All ROS-Industrial service\n\
# replies are required to have a return code indicating success or failure\n\
# Specific return codes for different failure should be negative.\n\
int8 val\n\
\n\
int8 SUCCESS = 1\n\
int8 FAILURE = -1\n\
\n\
";
  }

  static const char* value(const ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.controller);
      stream.next(m.robots);
      stream.next(m.code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetRobotInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_msgs::GetRobotInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "controller: ";
    s << std::endl;
    Printer< ::industrial_msgs::DeviceInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.controller);
    s << indent << "robots[]" << std::endl;
    for (size_t i = 0; i < v.robots.size(); ++i)
    {
      s << indent << "  robots[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::industrial_msgs::DeviceInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.robots[i]);
    }
    s << indent << "code: ";
    s << std::endl;
    Printer< ::industrial_msgs::ServiceReturnCode_<ContainerAllocator> >::stream(s, indent + "  ", v.code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_MSGS_MESSAGE_GETROBOTINFORESPONSE_H
