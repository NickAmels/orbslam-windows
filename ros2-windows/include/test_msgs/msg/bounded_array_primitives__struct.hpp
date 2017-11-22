// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES__STRUCT_HPP_
#define TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES__STRUCT_HPP_

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
# define DEPRECATED_test_msgs_msg_BoundedArrayPrimitives __attribute__((deprecated))
#else
# define DEPRECATED_test_msgs_msg_BoundedArrayPrimitives __declspec(deprecated)
#endif

namespace test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundedArrayPrimitives_
{
  using Type = BoundedArrayPrimitives_<ContainerAllocator>;

  BoundedArrayPrimitives_()
  {
  }
  explicit BoundedArrayPrimitives_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : bool_values(_alloc),
    byte_values(_alloc),
    char_values(_alloc),
    float32_values(_alloc),
    float64_values(_alloc),
    int8_values(_alloc),
    uint8_values(_alloc),
    int16_values(_alloc),
    uint16_values(_alloc),
    int32_values(_alloc),
    uint32_values(_alloc),
    int64_values(_alloc),
    uint64_values(_alloc),
    string_values(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _bool_values_type =
      rosidl_generator_cpp::BoundedVector<bool, 3, typename ContainerAllocator::template rebind<bool>::other>;
  _bool_values_type bool_values;
  using _byte_values_type =
      rosidl_generator_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _byte_values_type byte_values;
  using _char_values_type =
      rosidl_generator_cpp::BoundedVector<char, 3, typename ContainerAllocator::template rebind<char>::other>;
  _char_values_type char_values;
  using _float32_values_type =
      rosidl_generator_cpp::BoundedVector<float, 3, typename ContainerAllocator::template rebind<float>::other>;
  _float32_values_type float32_values;
  using _float64_values_type =
      rosidl_generator_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other>;
  _float64_values_type float64_values;
  using _int8_values_type =
      rosidl_generator_cpp::BoundedVector<int8_t, 3, typename ContainerAllocator::template rebind<int8_t>::other>;
  _int8_values_type int8_values;
  using _uint8_values_type =
      rosidl_generator_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _uint8_values_type uint8_values;
  using _int16_values_type =
      rosidl_generator_cpp::BoundedVector<int16_t, 3, typename ContainerAllocator::template rebind<int16_t>::other>;
  _int16_values_type int16_values;
  using _uint16_values_type =
      rosidl_generator_cpp::BoundedVector<uint16_t, 3, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _uint16_values_type uint16_values;
  using _int32_values_type =
      rosidl_generator_cpp::BoundedVector<int32_t, 3, typename ContainerAllocator::template rebind<int32_t>::other>;
  _int32_values_type int32_values;
  using _uint32_values_type =
      rosidl_generator_cpp::BoundedVector<uint32_t, 3, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _uint32_values_type uint32_values;
  using _int64_values_type =
      rosidl_generator_cpp::BoundedVector<int64_t, 3, typename ContainerAllocator::template rebind<int64_t>::other>;
  _int64_values_type int64_values;
  using _uint64_values_type =
      rosidl_generator_cpp::BoundedVector<uint64_t, 3, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _uint64_values_type uint64_values;
  using _string_values_type =
      rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _string_values_type string_values;
  using _check_type =
      int32_t;
  _check_type check;

  // setters for named parameter idiom
  Type * set__bool_values(
    const rosidl_generator_cpp::BoundedVector<bool, 3, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->bool_values = _arg;
    return this;
  }
  Type * set__byte_values(
    const rosidl_generator_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->byte_values = _arg;
    return this;
  }
  Type * set__char_values(
    const rosidl_generator_cpp::BoundedVector<char, 3, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->char_values = _arg;
    return this;
  }
  Type * set__float32_values(
    const rosidl_generator_cpp::BoundedVector<float, 3, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->float32_values = _arg;
    return this;
  }
  Type * set__float64_values(
    const rosidl_generator_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->float64_values = _arg;
    return this;
  }
  Type * set__int8_values(
    const rosidl_generator_cpp::BoundedVector<int8_t, 3, typename ContainerAllocator::template rebind<int8_t>::other> & _arg)
  {
    this->int8_values = _arg;
    return this;
  }
  Type * set__uint8_values(
    const rosidl_generator_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->uint8_values = _arg;
    return this;
  }
  Type * set__int16_values(
    const rosidl_generator_cpp::BoundedVector<int16_t, 3, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->int16_values = _arg;
    return this;
  }
  Type * set__uint16_values(
    const rosidl_generator_cpp::BoundedVector<uint16_t, 3, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->uint16_values = _arg;
    return this;
  }
  Type * set__int32_values(
    const rosidl_generator_cpp::BoundedVector<int32_t, 3, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->int32_values = _arg;
    return this;
  }
  Type * set__uint32_values(
    const rosidl_generator_cpp::BoundedVector<uint32_t, 3, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->uint32_values = _arg;
    return this;
  }
  Type * set__int64_values(
    const rosidl_generator_cpp::BoundedVector<int64_t, 3, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->int64_values = _arg;
    return this;
  }
  Type * set__uint64_values(
    const rosidl_generator_cpp::BoundedVector<uint64_t, 3, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->uint64_values = _arg;
    return this;
  }
  Type * set__string_values(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->string_values = _arg;
    return this;
  }
  Type * set__check(
    const int32_t & _arg)
  {
    this->check = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator> *;
  using ConstRawPtr =
      const test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_msgs_msg_BoundedArrayPrimitives
    std::shared_ptr<test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_msgs_msg_BoundedArrayPrimitives
    std::shared_ptr<test_msgs::msg::BoundedArrayPrimitives_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundedArrayPrimitives_ & other) const
  {
    if (this->bool_values != other.bool_values) {
      return false;
    }
    if (this->byte_values != other.byte_values) {
      return false;
    }
    if (this->char_values != other.char_values) {
      return false;
    }
    if (this->float32_values != other.float32_values) {
      return false;
    }
    if (this->float64_values != other.float64_values) {
      return false;
    }
    if (this->int8_values != other.int8_values) {
      return false;
    }
    if (this->uint8_values != other.uint8_values) {
      return false;
    }
    if (this->int16_values != other.int16_values) {
      return false;
    }
    if (this->uint16_values != other.uint16_values) {
      return false;
    }
    if (this->int32_values != other.int32_values) {
      return false;
    }
    if (this->uint32_values != other.uint32_values) {
      return false;
    }
    if (this->int64_values != other.int64_values) {
      return false;
    }
    if (this->uint64_values != other.uint64_values) {
      return false;
    }
    if (this->string_values != other.string_values) {
      return false;
    }
    if (this->check != other.check) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundedArrayPrimitives_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundedArrayPrimitives_

// alias to use template instance with default allocator
using BoundedArrayPrimitives =
    test_msgs::msg::BoundedArrayPrimitives_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace test_msgs

#endif  // TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES__STRUCT_HPP_
