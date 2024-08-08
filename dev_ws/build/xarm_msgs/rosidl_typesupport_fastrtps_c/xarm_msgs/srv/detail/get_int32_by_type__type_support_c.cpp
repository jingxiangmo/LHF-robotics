// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xarm_msgs:srv/GetInt32ByType.idl
// generated code does not contain a copyright notice
#include "xarm_msgs/srv/detail/get_int32_by_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xarm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xarm_msgs/srv/detail/get_int32_by_type__struct.h"
#include "xarm_msgs/srv/detail/get_int32_by_type__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetInt32ByType_Request__ros_msg_type = xarm_msgs__srv__GetInt32ByType_Request;

static bool _GetInt32ByType_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetInt32ByType_Request__ros_msg_type * ros_message = static_cast<const _GetInt32ByType_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  return true;
}

static bool _GetInt32ByType_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetInt32ByType_Request__ros_msg_type * ros_message = static_cast<_GetInt32ByType_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t get_serialized_size_xarm_msgs__srv__GetInt32ByType_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetInt32ByType_Request__ros_msg_type * ros_message = static_cast<const _GetInt32ByType_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetInt32ByType_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarm_msgs__srv__GetInt32ByType_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t max_serialized_size_xarm_msgs__srv__GetInt32ByType_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetInt32ByType_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_xarm_msgs__srv__GetInt32ByType_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetInt32ByType_Request = {
  "xarm_msgs::srv",
  "GetInt32ByType_Request",
  _GetInt32ByType_Request__cdr_serialize,
  _GetInt32ByType_Request__cdr_deserialize,
  _GetInt32ByType_Request__get_serialized_size,
  _GetInt32ByType_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetInt32ByType_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetInt32ByType_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, GetInt32ByType_Request)() {
  return &_GetInt32ByType_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/get_int32_by_type__struct.h"
// already included above
// #include "xarm_msgs/srv/detail/get_int32_by_type__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _GetInt32ByType_Response__ros_msg_type = xarm_msgs__srv__GetInt32ByType_Response;

static bool _GetInt32ByType_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetInt32ByType_Response__ros_msg_type * ros_message = static_cast<const _GetInt32ByType_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr << ros_message->ret;
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: data
  {
    cdr << ros_message->data;
  }

  return true;
}

static bool _GetInt32ByType_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetInt32ByType_Response__ros_msg_type * ros_message = static_cast<_GetInt32ByType_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr >> ros_message->ret;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: data
  {
    cdr >> ros_message->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t get_serialized_size_xarm_msgs__srv__GetInt32ByType_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetInt32ByType_Response__ros_msg_type * ros_message = static_cast<const _GetInt32ByType_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ret
  {
    size_t item_size = sizeof(ros_message->ret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name data
  {
    size_t item_size = sizeof(ros_message->data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetInt32ByType_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarm_msgs__srv__GetInt32ByType_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t max_serialized_size_xarm_msgs__srv__GetInt32ByType_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ret
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetInt32ByType_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_xarm_msgs__srv__GetInt32ByType_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetInt32ByType_Response = {
  "xarm_msgs::srv",
  "GetInt32ByType_Response",
  _GetInt32ByType_Response__cdr_serialize,
  _GetInt32ByType_Response__cdr_deserialize,
  _GetInt32ByType_Response__get_serialized_size,
  _GetInt32ByType_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetInt32ByType_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetInt32ByType_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, GetInt32ByType_Response)() {
  return &_GetInt32ByType_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xarm_msgs/srv/get_int32_by_type.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetInt32ByType__callbacks = {
  "xarm_msgs::srv",
  "GetInt32ByType",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, GetInt32ByType_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, GetInt32ByType_Response)(),
};

static rosidl_service_type_support_t GetInt32ByType__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetInt32ByType__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, GetInt32ByType)() {
  return &GetInt32ByType__handle;
}

#if defined(__cplusplus)
}
#endif
