# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "synchronizer_laser_imu: 1 messages, 0 services")

set(MSG_I_FLAGS "-Isynchronizer_laser_imu:/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(synchronizer_laser_imu_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg" NAME_WE)
add_custom_target(_synchronizer_laser_imu_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "synchronizer_laser_imu" "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(synchronizer_laser_imu
  "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/synchronizer_laser_imu
)

### Generating Services

### Generating Module File
_generate_module_cpp(synchronizer_laser_imu
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/synchronizer_laser_imu
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(synchronizer_laser_imu_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(synchronizer_laser_imu_generate_messages synchronizer_laser_imu_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg" NAME_WE)
add_dependencies(synchronizer_laser_imu_generate_messages_cpp _synchronizer_laser_imu_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(synchronizer_laser_imu_gencpp)
add_dependencies(synchronizer_laser_imu_gencpp synchronizer_laser_imu_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS synchronizer_laser_imu_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(synchronizer_laser_imu
  "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/synchronizer_laser_imu
)

### Generating Services

### Generating Module File
_generate_module_eus(synchronizer_laser_imu
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/synchronizer_laser_imu
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(synchronizer_laser_imu_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(synchronizer_laser_imu_generate_messages synchronizer_laser_imu_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg" NAME_WE)
add_dependencies(synchronizer_laser_imu_generate_messages_eus _synchronizer_laser_imu_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(synchronizer_laser_imu_geneus)
add_dependencies(synchronizer_laser_imu_geneus synchronizer_laser_imu_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS synchronizer_laser_imu_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(synchronizer_laser_imu
  "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/synchronizer_laser_imu
)

### Generating Services

### Generating Module File
_generate_module_lisp(synchronizer_laser_imu
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/synchronizer_laser_imu
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(synchronizer_laser_imu_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(synchronizer_laser_imu_generate_messages synchronizer_laser_imu_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg" NAME_WE)
add_dependencies(synchronizer_laser_imu_generate_messages_lisp _synchronizer_laser_imu_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(synchronizer_laser_imu_genlisp)
add_dependencies(synchronizer_laser_imu_genlisp synchronizer_laser_imu_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS synchronizer_laser_imu_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(synchronizer_laser_imu
  "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/synchronizer_laser_imu
)

### Generating Services

### Generating Module File
_generate_module_nodejs(synchronizer_laser_imu
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/synchronizer_laser_imu
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(synchronizer_laser_imu_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(synchronizer_laser_imu_generate_messages synchronizer_laser_imu_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg" NAME_WE)
add_dependencies(synchronizer_laser_imu_generate_messages_nodejs _synchronizer_laser_imu_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(synchronizer_laser_imu_gennodejs)
add_dependencies(synchronizer_laser_imu_gennodejs synchronizer_laser_imu_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS synchronizer_laser_imu_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(synchronizer_laser_imu
  "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/synchronizer_laser_imu
)

### Generating Services

### Generating Module File
_generate_module_py(synchronizer_laser_imu
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/synchronizer_laser_imu
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(synchronizer_laser_imu_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(synchronizer_laser_imu_generate_messages synchronizer_laser_imu_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/liun/catkin_ws_10_23/src/laser_imu_10_23/synchronizer_laser_imu/msg/can_msg.msg" NAME_WE)
add_dependencies(synchronizer_laser_imu_generate_messages_py _synchronizer_laser_imu_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(synchronizer_laser_imu_genpy)
add_dependencies(synchronizer_laser_imu_genpy synchronizer_laser_imu_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS synchronizer_laser_imu_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/synchronizer_laser_imu)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/synchronizer_laser_imu
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(synchronizer_laser_imu_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/synchronizer_laser_imu)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/synchronizer_laser_imu
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(synchronizer_laser_imu_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/synchronizer_laser_imu)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/synchronizer_laser_imu
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(synchronizer_laser_imu_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/synchronizer_laser_imu)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/synchronizer_laser_imu
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(synchronizer_laser_imu_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/synchronizer_laser_imu)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/synchronizer_laser_imu\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/synchronizer_laser_imu
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(synchronizer_laser_imu_generate_messages_py std_msgs_generate_messages_py)
endif()
