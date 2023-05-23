// Generated by gencpp from file dobot/GetHOMEParamsResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETHOMEPARAMSRESPONSE_H
#define DOBOT_MESSAGE_GETHOMEPARAMSRESPONSE_H


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
struct GetHOMEParamsResponse_
{
  typedef GetHOMEParamsResponse_<ContainerAllocator> Type;

  GetHOMEParamsResponse_()
    : result(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , r(0.0)  {
    }
  GetHOMEParamsResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , r(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _r_type;
  _r_type r;





  typedef boost::shared_ptr< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetHOMEParamsResponse_

typedef ::dobot::GetHOMEParamsResponse_<std::allocator<void> > GetHOMEParamsResponse;

typedef boost::shared_ptr< ::dobot::GetHOMEParamsResponse > GetHOMEParamsResponsePtr;
typedef boost::shared_ptr< ::dobot::GetHOMEParamsResponse const> GetHOMEParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetHOMEParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::GetHOMEParamsResponse_<ContainerAllocator1> & lhs, const ::dobot::GetHOMEParamsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.r == rhs.r;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::GetHOMEParamsResponse_<ContainerAllocator1> & lhs, const ::dobot::GetHOMEParamsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "faee91dfb5143975dd17cc14a8879155";
  }

  static const char* value(const ::dobot::GetHOMEParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfaee91dfb5143975ULL;
  static const uint64_t static_value2 = 0xdd17cc14a8879155ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetHOMEParamsResponse";
  }

  static const char* value(const ::dobot::GetHOMEParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 r\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetHOMEParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.r);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetHOMEParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetHOMEParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetHOMEParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETHOMEPARAMSRESPONSE_H
