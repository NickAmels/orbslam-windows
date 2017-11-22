// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__IMAGE_MARKER__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__IMAGE_MARKER__STRUCT_HPP_

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
#include "builtin_interfaces/msg/duration.hpp"  // lifetime
#include "geometry_msgs/msg/point.hpp"  // position, points
#include "std_msgs/msg/color_rgba.hpp"  // outline_color, fill_color, outline_colors
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_visualization_msgs_msg_ImageMarker __attribute__((deprecated))
#else
# define DEPRECATED_visualization_msgs_msg_ImageMarker __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageMarker_
{
  using Type = ImageMarker_<ContainerAllocator>;

  ImageMarker_()
  {
  }
  explicit ImageMarker_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : points(_alloc),
    outline_colors(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ns_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _ns_type ns;
  using _id_type =
      int32_t;
  _id_type id;
  using _type_type =
      int32_t;
  _type_type type;
  using _action_type =
      int32_t;
  _action_type action;
  using _position_type =
      geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _scale_type =
      float;
  _scale_type scale;
  using _outline_color_type =
      std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _outline_color_type outline_color;
  using _filled_type =
      uint8_t;
  _filled_type filled;
  using _fill_color_type =
      std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _fill_color_type fill_color;
  using _lifetime_type =
      builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _lifetime_type lifetime;
  using _points_type =
      std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _points_type points;
  using _outline_colors_type =
      std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::ColorRGBA_<ContainerAllocator>>::other>;
  _outline_colors_type outline_colors;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__ns(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->ns = _arg;
    return this;
  }
  Type * set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return this;
  }
  Type * set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return this;
  }
  Type * set__action(
    const int32_t & _arg)
  {
    this->action = _arg;
    return this;
  }
  Type * set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return this;
  }
  Type * set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return this;
  }
  Type * set__outline_color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->outline_color = _arg;
    return this;
  }
  Type * set__filled(
    const uint8_t & _arg)
  {
    this->filled = _arg;
    return this;
  }
  Type * set__fill_color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->fill_color = _arg;
    return this;
  }
  Type * set__lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->lifetime = _arg;
    return this;
  }
  Type * set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return this;
  }
  Type * set__outline_colors(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::ColorRGBA_<ContainerAllocator>>::other> & _arg)
  {
    this->outline_colors = _arg;
    return this;
  }

  // constants
  enum { CIRCLE = 0u };
  enum { LINE_STRIP = 1u };
  enum { LINE_LIST = 2u };
  enum { POLYGON = 3u };
  enum { POINTS = 4u };
  enum { ADD = 0u };
  enum { REMOVE = 1u };

  // pointer types
  using RawPtr =
      visualization_msgs::msg::ImageMarker_<ContainerAllocator> *;
  using ConstRawPtr =
      const visualization_msgs::msg::ImageMarker_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    visualization_msgs::msg::ImageMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    visualization_msgs::msg::ImageMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_visualization_msgs_msg_ImageMarker
    std::shared_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_visualization_msgs_msg_ImageMarker
    std::shared_ptr<visualization_msgs::msg::ImageMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageMarker_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ns != other.ns) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->outline_color != other.outline_color) {
      return false;
    }
    if (this->filled != other.filled) {
      return false;
    }
    if (this->fill_color != other.fill_color) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->outline_colors != other.outline_colors) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageMarker_

// alias to use template instance with default allocator
using ImageMarker =
    visualization_msgs::msg::ImageMarker_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__IMAGE_MARKER__STRUCT_HPP_
