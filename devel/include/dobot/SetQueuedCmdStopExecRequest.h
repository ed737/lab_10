// Generated by gencpp from file dobot/SetQueuedCmdStopExecRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXECREQUEST_H
#define DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXECREQUEST_H


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
struct SetQueuedCmdStopExecRequest_
{
  typedef SetQueuedCmdStopExecRequest_<ContainerAllocator> Type;

  SetQueuedCmdStopExecRequest_()
    {
    }
  SetQueuedCmdStopExecRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetQueuedCmdStopExecRequest_

typedef ::dobot::SetQueuedCmdStopExecRequest_<std::allocator<void> > SetQueuedCmdStopExecRequest;

typedef boost::shared_ptr< ::dobot::SetQueuedCmdStopExecRequest > SetQueuedCmdStopExecRequestPtr;
typedef boost::shared_ptr< ::dobot::SetQueuedCmdStopExecRequest const> SetQueuedCmdStopExecRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetQueuedCmdStopExecRequest";
  }

  static const char* value(const ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetQueuedCmdStopExecRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::SetQueuedCmdStopExecRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXECREQUEST_H
