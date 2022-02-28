cmake_minimum_required(VERSION 2.8.3)
#project(iexxx)
project(synchronizer_laser_imu)
SET(CMAKE_CXX_FLAGS "-std=c++0x")
# Build ROS-independent library.
find_package(console_bridge  REQUIRED)
include_directories(include ${console_bridge_INCLUDE_DIRS})
add_library(IExxx src/IExxx.cpp)
target_link_libraries(IExxx ${console_bridge_LIBRARIES})

# Regular catkin package follows.
find_package(catkin REQUIRED COMPONENTS roscpp sensor_msgs rosbag geometry_msgs message_generation std_msgs message_filters)

add_message_files(
  FILES
  can_msg.msg
  
)

generate_messages(
 DEPENDENCIES
 std_msgs
)

catkin_package(CATKIN_DEPENDS roscpp  message_runtime)


include_directories(include ${catkin_INCLUDE_DIRS})
add_executable(laser_node src/laser_node.cpp)
target_link_libraries(laser_node IExxx ${catkin_LIBRARIES})


# laser and imu synchronization  package .
set(SOURCE_FILES src/Synchronizer.cpp src/msg_syn.cpp)
add_executable(Synchronizer ${SOURCE_FILES})
target_link_libraries(Synchronizer  ${catkin_LIBRARIES})

set(SOURCE_FILES src/synchroy.cpp)
add_executable(synchroy ${SOURCE_FILES})
target_link_libraries(synchroy  ${catkin_LIBRARIES})


set(SOURCE_FILES src/laser_listener.cpp)
add_executable(laser_listener ${SOURCE_FILES})
target_link_libraries(laser_listener  ${catkin_LIBRARIES})

#can protoc

set(SOURCE_FILES src/can_node.cpp src/canhelper.cpp)
set(can_lib ${PROJECT_SOURCE_DIR}/lib/libcontrolcan.so)
add_executable(can_node ${SOURCE_FILES})
add_dependencies(can_node synchronizer_laser_imu_generate_messages_cpp )
target_link_libraries(can_node pthread ${catkin_LIBRARIES} ${can_lib})

install(TARGETS IExxx laser_node Synchronizer synchroy laser_listener
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY meshes launch urdf demo driver robot_para rviz
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

#install(PROGRAMS scripts/osight_set_IP scripts/osight_set_net_mode
 # DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

#if (CATKIN_ENABLE_TESTING)
 # catkin_add_gtest(test_buffer test/test_buffer.cpp)
 # target_link_libraries(test_buffer ${catkin_LIBRARIES})

#  find_package(roslint REQUIRED)
 # roslint_cpp()
  #roslint_add_test()

  #find_package(roslaunch REQUIRED)
 # roslaunch_add_file_check(launch/IExxx.launch)
#endif()
