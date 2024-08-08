# Low Hanging Fruit Robotics

## Introduction

Low Hanging Fruit Robotics is a project focused on [brief description of the project's purpose].

## Dependencies

- Ubuntu 20.04
- ROS2 Foxy
- Rviz2
- Moveit

## Setup

1. Clone this repository:
   ```
   git clone [repository URL]
   ```

2. Initialize and update the xarm_ros2 submodule:
   ```
   git submodule update --init --recursive src/xarm_ros2
   ```

3. Update rosdep:
   ```
   rosdep update --include-eol-distros
   ```

4. Install dependencies:
   If you encounter errors during the building process, try installing the independent packages with:
   ```
   sudo apt install ros-foxy-<package-name>
   ```

5. Source ROS2 and project setup files:
   ```
   source /opt/ros/foxy/setup.zsh
   source dev_ws/install/setup.zsh
   ```

## Usage

- strawberry detection `ros2 run detection_node detection`


## Nodes

[Describe the nodes used in this project]

## Additional Resources

- xArm ROS2 Documentation: https://docs.ufactory.cc/xarm_ros2/readme_en
