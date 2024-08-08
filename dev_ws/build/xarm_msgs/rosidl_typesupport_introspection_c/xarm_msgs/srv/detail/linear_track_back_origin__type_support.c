// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarm_msgs:srv/LinearTrackBackOrigin.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarm_msgs/srv/detail/linear_track_back_origin__rosidl_typesupport_introspection_c.h"
#include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarm_msgs/srv/detail/linear_track_back_origin__functions.h"
#include "xarm_msgs/srv/detail/linear_track_back_origin__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__LinearTrackBackOrigin_Request__init(message_memory);
}

void LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_fini_function(void * message_memory)
{
  xarm_msgs__srv__LinearTrackBackOrigin_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_member_array[2] = {
  {
    "wait",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__LinearTrackBackOrigin_Request, wait),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__LinearTrackBackOrigin_Request, auto_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_members = {
  "xarm_msgs__srv",  // message namespace
  "LinearTrackBackOrigin_Request",  // message name
  2,  // number of fields
  sizeof(xarm_msgs__srv__LinearTrackBackOrigin_Request),
  LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_member_array,  // message members
  LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_type_support_handle = {
  0,
  &LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, LinearTrackBackOrigin_Request)() {
  if (!LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_type_support_handle.typesupport_identifier) {
    LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearTrackBackOrigin_Request__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarm_msgs/srv/detail/linear_track_back_origin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarm_msgs/srv/detail/linear_track_back_origin__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/linear_track_back_origin__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__LinearTrackBackOrigin_Response__init(message_memory);
}

void LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_fini_function(void * message_memory)
{
  xarm_msgs__srv__LinearTrackBackOrigin_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_member_array[2] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__LinearTrackBackOrigin_Response, ret),  // bytes offset in struct
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
    offsetof(xarm_msgs__srv__LinearTrackBackOrigin_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_members = {
  "xarm_msgs__srv",  // message namespace
  "LinearTrackBackOrigin_Response",  // message name
  2,  // number of fields
  sizeof(xarm_msgs__srv__LinearTrackBackOrigin_Response),
  LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_member_array,  // message members
  LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_type_support_handle = {
  0,
  &LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, LinearTrackBackOrigin_Response)() {
  if (!LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_type_support_handle.typesupport_identifier) {
    LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearTrackBackOrigin_Response__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/linear_track_back_origin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_service_members = {
  "xarm_msgs__srv",  // service namespace
  "LinearTrackBackOrigin",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Request_message_type_support_handle,
  NULL  // response message
  // xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_Response_message_type_support_handle
};

static rosidl_service_type_support_t xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_service_type_support_handle = {
  0,
  &xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, LinearTrackBackOrigin_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, LinearTrackBackOrigin_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, LinearTrackBackOrigin)() {
  if (!xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_service_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, LinearTrackBackOrigin_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, LinearTrackBackOrigin_Response)()->data;
  }

  return &xarm_msgs__srv__detail__linear_track_back_origin__rosidl_typesupport_introspection_c__LinearTrackBackOrigin_service_type_support_handle;
}
