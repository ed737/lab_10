// Generated by gencpp from file dobot/SetCPParamsRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETCPPARAMSREQUEST_H
#define DOBOT_MESSAGE_SETCPPARAMSREQUEST_H


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
struct SetCPParamsRequest_
{
  typedef SetCPParamsRequest_<ContainerAllocator> Type;

  SetCPParamsRequest_()
    : planAcc(0.0)
    , junctionVel(0.0)
    , acc(0.0)
    , realTimeTrack(0)
    , isQueued(false)  {
    }
  SetCPParamsRequest_(const ContainerAllocator& _alloc)
    : planAcc(0.0)
    , junctionVel(0.0)
    , acc(0.0)
    , realTimeTrack(0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef float _planAcc_type;
  _planAcc_type planAcc;

   typedef float _junctionVel_type;
  _junctionVel_type junctionVel;

   typedef float _acc_type;
  _acc_type acc;

   typedef uint8_t _realTimeTrack_type;
  _realTimeTrack_type realTimeTrack;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::SetCPParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetCPParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCPParamsRequest_

typedef ::dobot::SetCPParamsRequest_<std::allocator<void> > SetCPParamsRequest;

typedef boost::shared_ptr< ::dobot::SetCPParamsRequest > SetCPParamsRequestPtr;
typedef boost::shared_ptr< ::dobot::SetCPParamsRequest const> SetCPParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetCPParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetCPParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::SetCPParamsRequest_<ContainerAllocator1> & lhs, const ::dobot::SetCPParamsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.planAcc == rhs.planAcc &&
    lhs.junctionVel == rhs.junctionVel &&
    lhs.acc == rhs.acc &&
    lhs.realTimeTrack == rhs.realTimeTrack &&
    lhs.isQueued == rhs.isQueued;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::SetCPParamsRequest_<ContainerAllocator1> & lhs, const ::dobot::SetCPParamsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetCPParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetCPParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetCPParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetCPParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetCPParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetCPParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetCPParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "554ea4f3eb746a3d6db4a5ca9e210a01";
  }

  static const char* value(const ::dobot::SetCPParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x554ea4f3eb746a3dULL;
  static const uint64_t static_value2 = 0x6db4a5ca9e210a01ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetCPParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetCPParamsRequest";
  }

  static const char* value(const ::dobot::SetCPParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetCPParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 planAcc\n"
"float32 junctionVel\n"
"float32 acc\n"
"uint8 realTimeTrack\n"
"bool isQueued\n"
;
  }

  static const char* value(const ::dobot::SetCPParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetCPParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.planAcc);
      stream.next(m.junctionVel);
      stream.next(m.acc);
      stream.next(m.realTimeTrack);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCPParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetCPParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetCPParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "planAcc: ";
    Printer<float>::stream(s, indent + "  ", v.planAcc);
    s << indent << "junctionVel: ";
    Printer<float>::stream(s, indent + "  ", v.junctionVel);
    s << indent << "acc: ";
    Printer<float>::stream(s, indent + "  ", v.acc);
    s << indent << "realTimeTrack: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.realTimeTrack);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETCPPARAMSREQUEST_H
