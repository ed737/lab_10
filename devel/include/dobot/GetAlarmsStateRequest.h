// Generated by gencpp from file dobot/GetAlarmsStateRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETALARMSSTATEREQUEST_H
#define DOBOT_MESSAGE_GETALARMSSTATEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot
{
template <class ContainerAllocator>
struct GetAlarmsStateRequest_
{
  typedef GetAlarmsStateRequest_<ContainerAllocator> Type;

  GetAlarmsStateRequest_()
    {
    }
  GetAlarmsStateRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetAlarmsStateRequest_

typedef ::dobot::GetAlarmsStateRequest_<std::allocator<void> > GetAlarmsStateRequest;

typedef boost::shared_ptr< ::dobot::GetAlarmsStateRequest > GetAlarmsStateRequestPtr;
typedef boost::shared_ptr< ::dobot::GetAlarmsStateRequest const> GetAlarmsStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetAlarmsStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::GetAlarmsStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetAlarmsStateRequest";
  }

  static const char* value(const ::dobot::GetAlarmsStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::GetAlarmsStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetAlarmsStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetAlarmsStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::GetAlarmsStateRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETALARMSSTATEREQUEST_H
