// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarm_msgs:srv/MoveCircle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarm_msgs/srv/detail/move_circle__rosidl_typesupport_introspection_c.h"
#include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarm_msgs/srv/detail/move_circle__functions.h"
#include "xarm_msgs/srv/detail/move_circle__struct.h"


// Include directives for member types
// Member `pose1`
// Member `pose2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__MoveCircle_Request__init(message_memory);
}

void MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_fini_function(void * message_memory)
{
  xarm_msgs__srv__MoveCircle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_member_array[8] = {
  {
    "pose1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Request, pose1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Request, pose2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Request, percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Request, acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mvtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Request, mvtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Request, wait),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Request, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_members = {
  "xarm_msgs__srv",  // message namespace
  "MoveCircle_Request",  // message name
  8,  // number of fields
  sizeof(xarm_msgs__srv__MoveCircle_Request),
  MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_member_array,  // message members
  MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle = {
  0,
  &MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCircle_Request)() {
  if (!MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle.typesupport_identifier) {
    MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarm_msgs/srv/detail/move_circle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarm_msgs/srv/detail/move_circle__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/move_circle__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__MoveCircle_Response__init(message_memory);
}

void MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_fini_function(void * message_memory)
{
  xarm_msgs__srv__MoveCircle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_member_array[2] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__MoveCircle_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_members = {
  "xarm_msgs__srv",  // message namespace
  "MoveCircle_Response",  // message name
  2,  // number of fields
  sizeof(xarm_msgs__srv__MoveCircle_Response),
  MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_member_array,  // message members
  MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle = {
  0,
  &MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCircle_Response)() {
  if (!MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle.typesupport_identifier) {
    MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/move_circle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_members = {
  "xarm_msgs__srv",  // service namespace
  "MoveCircle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle,
  NULL  // response message
  // xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle
};

static rosidl_service_type_support_t xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle = {
  0,
  &xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCircle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCircle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCircle)() {
  if (!xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCircle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCircle_Response)()->data;
  }

  return &xarm_msgs__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle;
}
