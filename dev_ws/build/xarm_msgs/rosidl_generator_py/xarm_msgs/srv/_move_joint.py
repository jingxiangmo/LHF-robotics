# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xarm_msgs:srv/MoveJoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'angles'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveJoint_Request(type):
    """Metaclass of message 'MoveJoint_Request'."""

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
                'xarm_msgs.srv.MoveJoint_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_joint__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_joint__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_joint__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_joint__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_joint__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SPEED__DEFAULT': 0.0,
            'ACC__DEFAULT': 0.0,
            'MVTIME__DEFAULT': 0.0,
            'WAIT__DEFAULT': False,
            'TIMEOUT__DEFAULT': -1.0,
            'RADIUS__DEFAULT': -1.0,
        }

    @property
    def SPEED__DEFAULT(cls):
        """Return default value for message field 'speed'."""
        return 0.0

    @property
    def ACC__DEFAULT(cls):
        """Return default value for message field 'acc'."""
        return 0.0

    @property
    def MVTIME__DEFAULT(cls):
        """Return default value for message field 'mvtime'."""
        return 0.0

    @property
    def WAIT__DEFAULT(cls):
        """Return default value for message field 'wait'."""
        return False

    @property
    def TIMEOUT__DEFAULT(cls):
        """Return default value for message field 'timeout'."""
        return -1.0

    @property
    def RADIUS__DEFAULT(cls):
        """Return default value for message field 'radius'."""
        return -1.0


class MoveJoint_Request(metaclass=Metaclass_MoveJoint_Request):
    """Message class 'MoveJoint_Request'."""

    __slots__ = [
        '_angles',
        '_speed',
        '_acc',
        '_mvtime',
        '_wait',
        '_timeout',
        '_radius',
    ]

    _fields_and_field_types = {
        'angles': 'sequence<float>',
        'speed': 'float',
        'acc': 'float',
        'mvtime': 'float',
        'wait': 'boolean',
        'timeout': 'float',
        'radius': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.angles = array.array('f', kwargs.get('angles', []))
        self.speed = kwargs.get(
            'speed', MoveJoint_Request.SPEED__DEFAULT)
        self.acc = kwargs.get(
            'acc', MoveJoint_Request.ACC__DEFAULT)
        self.mvtime = kwargs.get(
            'mvtime', MoveJoint_Request.MVTIME__DEFAULT)
        self.wait = kwargs.get(
            'wait', MoveJoint_Request.WAIT__DEFAULT)
        self.timeout = kwargs.get(
            'timeout', MoveJoint_Request.TIMEOUT__DEFAULT)
        self.radius = kwargs.get(
            'radius', MoveJoint_Request.RADIUS__DEFAULT)

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
        if self.angles != other.angles:
            return False
        if self.speed != other.speed:
            return False
        if self.acc != other.acc:
            return False
        if self.mvtime != other.mvtime:
            return False
        if self.wait != other.wait:
            return False
        if self.timeout != other.timeout:
            return False
        if self.radius != other.radius:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def angles(self):
        """Message field 'angles'."""
        return self._angles

    @angles.setter
    def angles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'angles' array.array() must have the type code of 'f'"
            self._angles = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'angles' field must be a set or sequence and each value of type 'float'"
        self._angles = array.array('f', value)

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def acc(self):
        """Message field 'acc'."""
        return self._acc

    @acc.setter
    def acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc' field must be of type 'float'"
        self._acc = value

    @property
    def mvtime(self):
        """Message field 'mvtime'."""
        return self._mvtime

    @mvtime.setter
    def mvtime(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mvtime' field must be of type 'float'"
        self._mvtime = value

    @property
    def wait(self):
        """Message field 'wait'."""
        return self._wait

    @wait.setter
    def wait(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wait' field must be of type 'bool'"
        self._wait = value

    @property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeout' field must be of type 'float'"
        self._timeout = value

    @property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
        self._radius = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveJoint_Response(type):
    """Metaclass of message 'MoveJoint_Response'."""

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
                'xarm_msgs.srv.MoveJoint_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_joint__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_joint__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_joint__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_joint__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_joint__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveJoint_Response(metaclass=Metaclass_MoveJoint_Response):
    """Message class 'MoveJoint_Response'."""

    __slots__ = [
        '_ret',
        '_message',
    ]

    _fields_and_field_types = {
        'ret': 'int16',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', int())
        self.message = kwargs.get('message', str())

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


class Metaclass_MoveJoint(type):
    """Metaclass of service 'MoveJoint'."""

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
                'xarm_msgs.srv.MoveJoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_joint

            from xarm_msgs.srv import _move_joint
            if _move_joint.Metaclass_MoveJoint_Request._TYPE_SUPPORT is None:
                _move_joint.Metaclass_MoveJoint_Request.__import_type_support__()
            if _move_joint.Metaclass_MoveJoint_Response._TYPE_SUPPORT is None:
                _move_joint.Metaclass_MoveJoint_Response.__import_type_support__()


class MoveJoint(metaclass=Metaclass_MoveJoint):
    from xarm_msgs.srv._move_joint import MoveJoint_Request as Request
    from xarm_msgs.srv._move_joint import MoveJoint_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
