# 基于ROS和SLAM的全覆盖路径规划自主扫地清洁车

## 概述

本项目主要是基于ROS针对大场景环境如仓库、校园等空旷区域进行自主扫地清洁设计的无人车。建图模块基于谷歌开源的激光slam：cartographer，融合了激光和imu进行精确建图。整个无人车底盘为阿克曼结构，工控机运行ROS机器人操作系统通过can总线与下位机通信，发送控制指令。

无人车的自主导航主要是基于ROS的move base框架，全局路径规划采用A star或dijkstra算法，局部路径规划避障模块采用TEB localler。其中为实现对扫地环境进行全覆盖，通过ROS bridge接口将slam的costmap地图传入到全覆盖节点，通过opencv算法对地图进行弓字形分隔，分隔后转化为旅行商问题，采用遗传算法进行求解。

### 安装步骤

#### Install required ros-dependencies
rosdep update

rosdep install --from-paths src --ignore-src -r

#### 启动脚本
cd shell

bash clear_car.sh

里面的内容如下：

gnome-terminal -t "move_base" -x bash -c "bash ./move_base.sh;exec bash;"

gnome-terminal -t "laser_bash" -x bash -c "bash ./laser_bash.sh;exec bash;"

gnome-terminal -t "control_car" -x bash -c "bash ./control.sh;exec bash;"

gnome-terminal -t "set_pose" -x bash -c "bash ./set_target.sh;exec bash;"

gnome-terminal -t "start_target" -x bash -c "bash ./start_target.sh;exec bash;"

roslaunch clean_car_description real_nav.launch

分别启动了底盘驱动、激光雷达、can_node节点、设定目标节点、rviz显示界面。
