# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/suitesparse;/opt/ros/melodic/include/g2o".split(';') if "${prefix}/include;/usr/include/suitesparse;/opt/ros/melodic/include/g2o" != "" else []
PROJECT_CATKIN_DEPENDS = "base_local_planner;costmap_2d;costmap_converter;dynamic_reconfigure;geometry_msgs;interactive_markers;message_runtime;nav_core;nav_msgs;pluginlib;roscpp;mbf_costmap_core;std_msgs;tf2;tf2_ros;visualization_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lteb_local_planner;-lamd;-lbtf;-lcamd;-lccolamd;-lcholmod;-lcolamd;-lcxsparse;-lklu;-lumfpack;-lspqr;/opt/ros/melodic/lib/libg2o_csparse_extension.so;/opt/ros/melodic/lib/libg2o_core.so;/opt/ros/melodic/lib/libg2o_stuff.so;/opt/ros/melodic/lib/libg2o_types_slam2d.so;/opt/ros/melodic/lib/libg2o_types_slam3d.so;/opt/ros/melodic/lib/libg2o_solver_cholmod.so;/opt/ros/melodic/lib/libg2o_solver_pcg.so;/opt/ros/melodic/lib/libg2o_solver_csparse.so;/opt/ros/melodic/lib/libg2o_incremental.so".split(';') if "-lteb_local_planner;-lamd;-lbtf;-lcamd;-lccolamd;-lcholmod;-lcolamd;-lcxsparse;-lklu;-lumfpack;-lspqr;/opt/ros/melodic/lib/libg2o_csparse_extension.so;/opt/ros/melodic/lib/libg2o_core.so;/opt/ros/melodic/lib/libg2o_stuff.so;/opt/ros/melodic/lib/libg2o_types_slam2d.so;/opt/ros/melodic/lib/libg2o_types_slam3d.so;/opt/ros/melodic/lib/libg2o_solver_cholmod.so;/opt/ros/melodic/lib/libg2o_solver_pcg.so;/opt/ros/melodic/lib/libg2o_solver_csparse.so;/opt/ros/melodic/lib/libg2o_incremental.so" != "" else []
PROJECT_NAME = "teb_local_planner"
PROJECT_SPACE_DIR = "/home/liun/catkin_ws_10_23/install"
PROJECT_VERSION = "0.8.4"
