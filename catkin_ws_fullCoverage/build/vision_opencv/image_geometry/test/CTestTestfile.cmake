# CMake generated Testfile for 
# Source directory: /home/liun/catkin_ws_10_23/src/vision_opencv/image_geometry/test
# Build directory: /home/liun/catkin_ws_10_23/build/vision_opencv/image_geometry/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_image_geometry_nosetests_directed.py "/home/liun/catkin_ws_10_23/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/liun/catkin_ws_10_23/build/test_results/image_geometry/nosetests-directed.py.xml" "--return-code" "\"/usr/local/bin/cmake\" -E make_directory /home/liun/catkin_ws_10_23/build/test_results/image_geometry" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/liun/catkin_ws_10_23/src/vision_opencv/image_geometry/test/directed.py --with-xunit --xunit-file=/home/liun/catkin_ws_10_23/build/test_results/image_geometry/nosetests-directed.py.xml")
set_tests_properties(_ctest_image_geometry_nosetests_directed.py PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/liun/catkin_ws_10_23/src/vision_opencv/image_geometry/test/CMakeLists.txt;1;catkin_add_nosetests;/home/liun/catkin_ws_10_23/src/vision_opencv/image_geometry/test/CMakeLists.txt;0;")
add_test(_ctest_image_geometry_gtest_image_geometry-utest "/home/liun/catkin_ws_10_23/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/liun/catkin_ws_10_23/build/test_results/image_geometry/gtest-image_geometry-utest.xml" "--return-code" "/home/liun/catkin_ws_10_23/devel/lib/image_geometry/image_geometry-utest --gtest_output=xml:/home/liun/catkin_ws_10_23/build/test_results/image_geometry/gtest-image_geometry-utest.xml")
set_tests_properties(_ctest_image_geometry_gtest_image_geometry-utest PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/melodic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/liun/catkin_ws_10_23/src/vision_opencv/image_geometry/test/CMakeLists.txt;3;catkin_add_gtest;/home/liun/catkin_ws_10_23/src/vision_opencv/image_geometry/test/CMakeLists.txt;0;")