# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xarm_msgs:srv/RobotiqGetStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotiqGetStatus_Request(type):
    """Metaclass of message 'RobotiqGetStatus_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.RobotiqGetStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robotiq_get_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robotiq_get_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robotiq_get_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robotiq_get_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robotiq_get_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NUMBER_OF_REGISTERS__DEFAULT': 3,
        }

    @property
    def NUMBER_OF_REGISTERS__DEFAULT(cls):
        """Return default value for message field 'number_of_registers'."""
        return 3


class RobotiqGetStatus_Request(metaclass=Metaclass_RobotiqGetStatus_Request):
    """Message class 'RobotiqGetStatus_Request'."""

    __slots__ = [
        '_number_of_registers',
    ]

    _fields_and_field_types = {
        'number_of_registers': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.number_of_registers = kwargs.get(
            'number_of_registers', RobotiqGetStatus_Request.NUMBER_OF_REGISTERS__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.number_of_registers != other.number_of_registers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def number_of_registers(self):
        """Message field 'number_of_registers'."""
        return self._number_of_registers

    @number_of_registers.setter
    def number_of_registers(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_registers' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'number_of_registers' field must be an unsigned integer in [0, 255]"
        self._number_of_registers = value


# Import statements for member types

# Member 'ret_data'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotiqGetStatus_Response(type):
    """Metaclass of message 'RobotiqGetStatus_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.RobotiqGetStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robotiq_get_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robotiq_get_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robotiq_get_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robotiq_get_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robotiq_get_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotiqGetStatus_Response(metaclass=Metaclass_RobotiqGetStatus_Response):
    """Message class 'RobotiqGetStatus_Response'."""

    __slots__ = [
        '_ret',
        '_message',
        '_ret_data',
    ]

    _fields_and_field_types = {
        'ret': 'int16',
        'message': 'string',
        'ret_data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', int())
        self.message = kwargs.get('message', str())
        self.ret_data = array.array('B', kwargs.get('ret_data', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ret != other.ret:
            return False
        if self.message != other.message:
            return False
        if self.ret_data != other.ret_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ret(self):
        """Message field 'ret'."""
        return self._ret

    @ret.setter
    def ret(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ret' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ret' field must be an integer in [-32768, 32767]"
        self._ret = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @property
    def ret_data(self):
        """Message field 'ret_data'."""
        return self._ret_data

    @ret_data.setter
    def ret_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'ret_data' array.array() must have the type code of 'B'"
            self._ret_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'ret_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._ret_data = array.array('B', value)


class Metaclass_RobotiqGetStatus(type):
    """Metaclass of service 'RobotiqGetStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.RobotiqGetStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robotiq_get_status

            from xarm_msgs.srv import _robotiq_get_status
            if _robotiq_get_status.Metaclass_RobotiqGetStatus_Request._TYPE_SUPPORT is None:
                _robotiq_get_status.Metaclass_RobotiqGetStatus_Request.__import_type_support__()
            if _robotiq_get_status.Metaclass_RobotiqGetStatus_Response._TYPE_SUPPORT is None:
                _robotiq_get_status.Metaclass_RobotiqGetStatus_Response.__import_type_support__()


class RobotiqGetStatus(metaclass=Metaclass_RobotiqGetStatus):
    from xarm_msgs.srv._robotiq_get_status import RobotiqGetStatus_Request as Request
    from xarm_msgs.srv._robotiq_get_status import RobotiqGetStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
