import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraPublisher(Node):
    def __init__(self):
        super().__init__('camera_publisher')
        self.publisher_ = self.create_publisher(Image, 'camera_feed', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)  # 10 Hz
        self.cv_bridge = CvBridge()
        self.cap = cv2.VideoCapture(0) 

    def timer_callback(self):
        ret, frame = self.cap.read()
        if ret:
            cv2.imshow('Camera Feed', frame)
            cv2.waitKey(1)
            msg = self.cv_bridge.cv2_to_imgmsg(frame, "bgr8")
            self.publisher_.publish(msg)
            self.get_logger().info('Publishing camera feed')
        else:
            self.get_logger().warn('Failed to capture frame')

def main(args=None):
    rclpy.init(args=args)
    camera_publisher = CameraPublisher()
    try:
        rclpy.spin(camera_publisher)
    except KeyboardInterrupt:
        pass
    finally:
        camera_publisher.destroy_node()
        cv2.destroyAllWindows()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
