// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__U_INT16__STRUCT_HPP_
#define STD_MSGS__MSG__U_INT16__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_std_msgs_msg_UInt16 __attribute__((deprecated))
#else
# define DEPRECATED_std_msgs_msg_UInt16 __declspec(deprecated)
#endif

namespace std_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UInt16_
{
  using Type = UInt16_<ContainerAllocator>;

  UInt16_()
  {
  }
  explicit UInt16_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _data_type =
      uint16_t;
  _data_type data;

  // setters for named parameter idiom
  Type * set__data(
    const uint16_t & _arg)
  {
    this->data = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      std_msgs::msg::UInt16_<ContainerAllocator> *;
  using ConstRawPtr =
      const std_msgs::msg::UInt16_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<std_msgs::msg::UInt16_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<std_msgs::msg::UInt16_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    std_msgs::msg::UInt16_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<std_msgs::msg::UInt16_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    std_msgs::msg::UInt16_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<std_msgs::msg::UInt16_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<std_msgs::msg::UInt16_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<std_msgs::msg::UInt16_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_msgs_msg_UInt16
    std::shared_ptr<std_msgs::msg::UInt16_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_msgs_msg_UInt16
    std::shared_ptr<std_msgs::msg::UInt16_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UInt16_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const UInt16_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UInt16_

// alias to use template instance with default allocator
using UInt16 =
    std_msgs::msg::UInt16_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__U_INT16__STRUCT_HPP_
