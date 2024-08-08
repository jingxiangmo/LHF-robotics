// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xarm_msgs:msg/CIOState.idl
// generated code does not contain a copyright notice
#include "xarm_msgs/msg/detail/cio_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xarm_msgs/msg/detail/cio_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace xarm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarm_msgs
cdr_serialize(
  const xarm_msgs::msg::CIOState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: state
  cdr << ros_message.state;
  // Member: code
  cdr << ros_message.code;
  // Member: input_digitals
  {
    cdr << ros_message.input_digitals;
  }
  // Member: output_digitals
  {
    cdr << ros_message.output_digitals;
  }
  // Member: input_analogs
  {
    cdr << ros_message.input_analogs;
  }
  // Member: output_analogs
  {
    cdr << ros_message.output_analogs;
  }
  // Member: input_conf
  {
    cdr << ros_message.input_conf;
  }
  // Member: output_conf
  {
    cdr << ros_message.output_conf;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xarm_msgs::msg::CIOState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: state
  cdr >> ros_message.state;

  // Member: code
  cdr >> ros_message.code;

  // Member: input_digitals
  {
    cdr >> ros_message.input_digitals;
  }

  // Member: output_digitals
  {
    cdr >> ros_message.output_digitals;
  }

  // Member: input_analogs
  {
    cdr >> ros_message.input_analogs;
  }

  // Member: output_analogs
  {
    cdr >> ros_message.output_analogs;
  }

  // Member: input_conf
  {
    cdr >> ros_message.input_conf;
  }

  // Member: output_conf
  {
    cdr >> ros_message.output_conf;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarm_msgs
get_serialized_size(
  const xarm_msgs::msg::CIOState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: code
  {
    size_t item_size = sizeof(ros_message.code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_digitals
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.input_digitals[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_digitals
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.output_digitals[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_analogs
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.input_analogs[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_analogs
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.output_analogs[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_conf
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.input_conf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_conf
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.output_conf[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xarm_msgs
max_serialized_size_CIOState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: input_digitals
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: output_digitals
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: input_analogs
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: output_analogs
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: input_conf
  {
    size_t array_size = 16;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: output_conf
  {
    size_t array_size = 16;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CIOState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xarm_msgs::msg::CIOState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CIOState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xarm_msgs::msg::CIOState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CIOState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xarm_msgs::msg::CIOState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CIOState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CIOState(full_bounded, 0);
}

static message_type_support_callbacks_t _CIOState__callbacks = {
  "xarm_msgs::msg",
  "CIOState",
  _CIOState__cdr_serialize,
  _CIOState__cdr_deserialize,
  _CIOState__get_serialized_size,
  _CIOState__max_serialized_size
};

static rosidl_message_type_support_t _CIOState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CIOState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xarm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::msg::CIOState>()
{
  return &xarm_msgs::msg::typesupport_fastrtps_cpp::_CIOState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, msg, CIOState)() {
  return &xarm_msgs::msg::typesupport_fastrtps_cpp::_CIOState__handle;
}

#ifdef __cplusplus
}
#endif
