// Generated by gencpp from file dobot/SetQueuedCmdClearRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETQUEUEDCMDCLEARREQUEST_H
#define DOBOT_MESSAGE_SETQUEUEDCMDCLEARREQUEST_H


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
struct SetQueuedCmdClearRequest_
{
  typedef SetQueuedCmdClearRequest_<ContainerAllocator> Type;

  SetQueuedCmdClearRequest_()
    {
    }
  SetQueuedCmdClearRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetQueuedCmdClearRequest_

typedef ::dobot::SetQueuedCmdClearRequest_<std::allocator<void> > SetQueuedCmdClearRequest;

typedef boost::shared_ptr< ::dobot::SetQueuedCmdClearRequest > SetQueuedCmdClearRequestPtr;
typedef boost::shared_ptr< ::dobot::SetQueuedCmdClearRequest const> SetQueuedCmdClearRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetQueuedCmdClearRequest";
  }

  static const char* value(const ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetQueuedCmdClearRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::SetQueuedCmdClearRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETQUEUEDCMDCLEARREQUEST_H
