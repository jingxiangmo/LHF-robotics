// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xarm_msgs:srv/PlanPose.idl
// generated code does not contain a copyright notice
#include "xarm_msgs/srv/detail/plan_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
xarm_msgs__srv__PlanPose_Request__init(xarm_msgs__srv__PlanPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__init(&msg->target)) {
    xarm_msgs__srv__PlanPose_Request__fini(msg);
    return false;
  }
  return true;
}

void
xarm_msgs__srv__PlanPose_Request__fini(xarm_msgs__srv__PlanPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // target
  geometry_msgs__msg__Pose__fini(&msg->target);
}

bool
xarm_msgs__srv__PlanPose_Request__are_equal(const xarm_msgs__srv__PlanPose_Request * lhs, const xarm_msgs__srv__PlanPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  return true;
}

bool
xarm_msgs__srv__PlanPose_Request__copy(
  const xarm_msgs__srv__PlanPose_Request * input,
  xarm_msgs__srv__PlanPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  return true;
}

xarm_msgs__srv__PlanPose_Request *
xarm_msgs__srv__PlanPose_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__PlanPose_Request * msg = (xarm_msgs__srv__PlanPose_Request *)allocator.allocate(sizeof(xarm_msgs__srv__PlanPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarm_msgs__srv__PlanPose_Request));
  bool success = xarm_msgs__srv__PlanPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarm_msgs__srv__PlanPose_Request__destroy(xarm_msgs__srv__PlanPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarm_msgs__srv__PlanPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarm_msgs__srv__PlanPose_Request__Sequence__init(xarm_msgs__srv__PlanPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__PlanPose_Request * data = NULL;

  if (size) {
    data = (xarm_msgs__srv__PlanPose_Request *)allocator.zero_allocate(size, sizeof(xarm_msgs__srv__PlanPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarm_msgs__srv__PlanPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarm_msgs__srv__PlanPose_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xarm_msgs__srv__PlanPose_Request__Sequence__fini(xarm_msgs__srv__PlanPose_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xarm_msgs__srv__PlanPose_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xarm_msgs__srv__PlanPose_Request__Sequence *
xarm_msgs__srv__PlanPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__PlanPose_Request__Sequence * array = (xarm_msgs__srv__PlanPose_Request__Sequence *)allocator.allocate(sizeof(xarm_msgs__srv__PlanPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarm_msgs__srv__PlanPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarm_msgs__srv__PlanPose_Request__Sequence__destroy(xarm_msgs__srv__PlanPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarm_msgs__srv__PlanPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarm_msgs__srv__PlanPose_Request__Sequence__are_equal(const xarm_msgs__srv__PlanPose_Request__Sequence * lhs, const xarm_msgs__srv__PlanPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarm_msgs__srv__PlanPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarm_msgs__srv__PlanPose_Request__Sequence__copy(
  const xarm_msgs__srv__PlanPose_Request__Sequence * input,
  xarm_msgs__srv__PlanPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarm_msgs__srv__PlanPose_Request);
    xarm_msgs__srv__PlanPose_Request * data =
      (xarm_msgs__srv__PlanPose_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarm_msgs__srv__PlanPose_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          xarm_msgs__srv__PlanPose_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarm_msgs__srv__PlanPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
xarm_msgs__srv__PlanPose_Response__init(xarm_msgs__srv__PlanPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
xarm_msgs__srv__PlanPose_Response__fini(xarm_msgs__srv__PlanPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
xarm_msgs__srv__PlanPose_Response__are_equal(const xarm_msgs__srv__PlanPose_Response * lhs, const xarm_msgs__srv__PlanPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
xarm_msgs__srv__PlanPose_Response__copy(
  const xarm_msgs__srv__PlanPose_Response * input,
  xarm_msgs__srv__PlanPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

xarm_msgs__srv__PlanPose_Response *
xarm_msgs__srv__PlanPose_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__PlanPose_Response * msg = (xarm_msgs__srv__PlanPose_Response *)allocator.allocate(sizeof(xarm_msgs__srv__PlanPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarm_msgs__srv__PlanPose_Response));
  bool success = xarm_msgs__srv__PlanPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarm_msgs__srv__PlanPose_Response__destroy(xarm_msgs__srv__PlanPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarm_msgs__srv__PlanPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarm_msgs__srv__PlanPose_Response__Sequence__init(xarm_msgs__srv__PlanPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__PlanPose_Response * data = NULL;

  if (size) {
    data = (xarm_msgs__srv__PlanPose_Response *)allocator.zero_allocate(size, sizeof(xarm_msgs__srv__PlanPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarm_msgs__srv__PlanPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarm_msgs__srv__PlanPose_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xarm_msgs__srv__PlanPose_Response__Sequence__fini(xarm_msgs__srv__PlanPose_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xarm_msgs__srv__PlanPose_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xarm_msgs__srv__PlanPose_Response__Sequence *
xarm_msgs__srv__PlanPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__PlanPose_Response__Sequence * array = (xarm_msgs__srv__PlanPose_Response__Sequence *)allocator.allocate(sizeof(xarm_msgs__srv__PlanPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarm_msgs__srv__PlanPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarm_msgs__srv__PlanPose_Response__Sequence__destroy(xarm_msgs__srv__PlanPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarm_msgs__srv__PlanPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarm_msgs__srv__PlanPose_Response__Sequence__are_equal(const xarm_msgs__srv__PlanPose_Response__Sequence * lhs, const xarm_msgs__srv__PlanPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarm_msgs__srv__PlanPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarm_msgs__srv__PlanPose_Response__Sequence__copy(
  const xarm_msgs__srv__PlanPose_Response__Sequence * input,
  xarm_msgs__srv__PlanPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarm_msgs__srv__PlanPose_Response);
    xarm_msgs__srv__PlanPose_Response * data =
      (xarm_msgs__srv__PlanPose_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarm_msgs__srv__PlanPose_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          xarm_msgs__srv__PlanPose_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarm_msgs__srv__PlanPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
