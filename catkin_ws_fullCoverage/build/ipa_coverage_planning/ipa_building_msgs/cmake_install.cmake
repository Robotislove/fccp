# Install script for directory: /home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/liun/catkin_ws_10_23/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/action" TYPE FILE FILES
    "/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs/action/MapSegmentation.action"
    "/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs/action/FindRoomSequenceWithCheckpoints.action"
    "/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs/action/RoomExploration.action"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/msg" TYPE FILE FILES
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/msg" TYPE FILE FILES
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/msg" TYPE FILE FILES
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg"
    "/home/liun/catkin_ws_10_23/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/msg" TYPE FILE FILES
    "/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs/msg/RoomInformation.msg"
    "/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs/msg/RoomSequence.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/srv" TYPE FILE FILES
    "/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs/srv/CheckCoverage.srv"
    "/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/cmake" TYPE FILE FILES "/home/liun/catkin_ws_10_23/build/ipa_coverage_planning/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/liun/catkin_ws_10_23/devel/include/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/liun/catkin_ws_10_23/devel/share/roseus/ros/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/liun/catkin_ws_10_23/devel/share/common-lisp/ros/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/liun/catkin_ws_10_23/devel/share/gennodejs/ros/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/liun/catkin_ws_10_23/devel/lib/python2.7/dist-packages/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/liun/catkin_ws_10_23/devel/lib/python2.7/dist-packages/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/liun/catkin_ws_10_23/build/ipa_coverage_planning/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/cmake" TYPE FILE FILES "/home/liun/catkin_ws_10_23/build/ipa_coverage_planning/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/cmake" TYPE FILE FILES
    "/home/liun/catkin_ws_10_23/build/ipa_coverage_planning/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgsConfig.cmake"
    "/home/liun/catkin_ws_10_23/build/ipa_coverage_planning/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs" TYPE FILE FILES "/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_msgs/package.xml")
endif()

