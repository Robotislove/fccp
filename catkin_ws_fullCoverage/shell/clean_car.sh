gnome-terminal -t "move_base" -x bash -c "bash ./move_base.sh;exec bash;"
gnome-terminal -t "laser_bash" -x bash -c "bash ./laser_bash.sh;exec bash;"
gnome-terminal -t "control_car" -x bash -c "bash ./control.sh;exec bash;"
gnome-terminal -t "set_pose" -x bash -c "bash ./set_target.sh;exec bash;"
gnome-terminal -t "start_target" -x bash -c "bash ./start_target.sh;exec bash;"
cd /home/zkwx/teb_nav_ws
source devel/setup.bash
roslaunch clean_car_description real_nav.launch


