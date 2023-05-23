// Generated by gencpp from file dobot/SetPTPCmdResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETPTPCMDRESPONSE_H
#define DOBOT_MESSAGE_SETPTPCMDRESPONSE_H


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
struct SetPTPCmdResponse_
{
  typedef SetPTPCmdResponse_<ContainerAllocator> Type;

  SetPTPCmdResponse_()
    : result(0)
    , queuedCmdIndex(0)  {
    }
  SetPTPCmdResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , queuedCmdIndex(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef uint64_t _queuedCmdIndex_type;
  _queuedCmdIndex_type queuedCmdIndex;





  typedef boost::shared_ptr< ::dobot::SetPTPCmdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetPTPCmdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetPTPCmdResponse_

typedef ::dobot::SetPTPCmdResponse_<std::allocator<void> > SetPTPCmdResponse;

typedef boost::shared_ptr< ::dobot::SetPTPCmdResponse > SetPTPCmdResponsePtr;
typedef boost::shared_ptr< ::dobot::SetPTPCmdResponse const> SetPTPCmdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetPTPCmdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::SetPTPCmdResponse_<ContainerAllocator1> & lhs, const ::dobot::SetPTPCmdResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.queuedCmdIndex == rhs.queuedCmdIndex;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::SetPTPCmdResponse_<ContainerAllocator1> & lhs, const ::dobot::SetPTPCmdResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetPTPCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetPTPCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetPTPCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cbf7b461449133eb5dd6ebbd8d38dedc";
  }

  static const char* value(const ::dobot::SetPTPCmdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcbf7b461449133ebULL;
  static const uint64_t static_value2 = 0x5dd6ebbd8d38dedcULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetPTPCmdResponse";
  }

  static const char* value(const ::dobot::SetPTPCmdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"uint64 queuedCmdIndex\n"
"\n"
;
  }

  static const char* value(const ::dobot::SetPTPCmdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.queuedCmdIndex);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPTPCmdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetPTPCmdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetPTPCmdResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "queuedCmdIndex: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.queuedCmdIndex);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETPTPCMDRESPONSE_H
