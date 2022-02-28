## *********************************************************
##
## File autogenerated for the ipa_room_segmentation package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 246, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 291, 'description': 'Segmentation method', 'max': 99, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_segmentation_algorithm', 'edit_method': "{'enum_description': 'Segmentation algorithm', 'enum': [{'srcline': 8, 'description': 'Use the morphological segmentation algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_room_segmentation/cfg/RoomSegmentation.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'MorphologicalSegmentation'}, {'srcline': 9, 'description': 'Use the distance segmentation algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_room_segmentation/cfg/RoomSegmentation.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'DistanceSegmentation'}, {'srcline': 10, 'description': 'Use the Voronoi segmentation algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_room_segmentation/cfg/RoomSegmentation.cfg', 'cconsttype': 'const int', 'value': 3, 'ctype': 'int', 'type': 'int', 'name': 'VoronoiSegmentation'}, {'srcline': 11, 'description': 'Use the semantic/feature-based segmentation algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_room_segmentation/cfg/RoomSegmentation.cfg', 'cconsttype': 'const int', 'value': 4, 'ctype': 'int', 'type': 'int', 'name': 'SemanticSegmentation'}, {'srcline': 12, 'description': 'Use the voronoi-random-field segmentation algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_room_segmentation/cfg/RoomSegmentation.cfg', 'cconsttype': 'const int', 'value': 5, 'ctype': 'int', 'type': 'int', 'name': 'RandomFieldSegmentation'}, {'srcline': 13, 'description': 'Use the pass through segmentation algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_room_segmentation/cfg/RoomSegmentation.cfg', 'cconsttype': 'const int', 'value': 99, 'ctype': 'int', 'type': 'int', 'name': 'PassThroughSegmentation'}]}", 'default': 3, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 291, 'description': 'Show the resulting segmented map directly', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'display_segmented_map', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'Publish the resulting segmented map as grid map', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'publish_segmented_map', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'Upper room limit for morphological segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_factor_upper_limit_morphological', 'edit_method': '', 'default': 47.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Lower room limit for morphological segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_factor_lower_limit_morphological', 'edit_method': '', 'default': 0.8, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Upper room limit for distance segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_factor_upper_limit_distance', 'edit_method': '', 'default': 163.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Lower room limit for distance segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_factor_lower_limit_distance', 'edit_method': '', 'default': 0.35, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Upper room limit for Voronoi segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_factor_upper_limit_voronoi', 'edit_method': '', 'default': 1000000.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Lower room limit for Voronoi segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_factor_lower_limit_voronoi', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Upper room limit for semantic/feature-based segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_factor_upper_limit_semantic', 'edit_method': '', 'default': 1000000.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Lower room limit for semantic/feature-based segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_factor_lower_limit_semantic', 'edit_method': '', 'default': 1.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Upper room limit for Voronoi-random-field segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_upper_limit_voronoi_random', 'edit_method': '', 'default': 1000000.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Lower room limit for Voronoi-random-field segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_lower_limit_voronoi_random', 'edit_method': '', 'default': 1.53, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Upper room limit for Voronoi-random-field segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_upper_limit_passthrough', 'edit_method': '', 'default': 1000000.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Lower room limit for Voronoi-random-field segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'room_area_lower_limit_passthrough', 'edit_method': '', 'default': 1.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Size of neighborhood on graph for Voronoi segmentation, larger value sets a larger neighborhood for searching critical points', 'max': 2147483647, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'voronoi_neighborhood_index', 'edit_method': '', 'default': 280, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': 'Max number of Iterations for search of neighbors, also used for the vrf segmentation', 'max': 2147483647, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_iterations', 'edit_method': '', 'default': 150, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': 'Minimal distance factor between two critical points before one of it gets eliminated', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'min_critical_point_distance_factor', 'edit_method': '', 'default': 0.5, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Maximal area [m^2] of a room that should be merged with its surrounding rooms, also used for the voronoi random field segmentation', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_area_for_merging', 'edit_method': '', 'default': 12.5, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Larger value sets larger neighborhood, concentrated in a node of the conditional random field', 'max': 2147483647, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'voronoi_random_field_epsilon_for_neighborhood', 'edit_method': '', 'default': 5, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': 'Min. size of the above mentioned neighborhood', 'max': 2147483647, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'min_neighborhood_size', 'edit_method': '', 'default': 4, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': 'Min distance the base nodes for each crf node need to be apart', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'min_voronoi_random_field_node_distance', 'edit_method': '', 'default': 7.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Max number of iterations the inference algorithm should do', 'max': 2147483647, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_voronoi_random_field_inference_iterations', 'edit_method': '', 'default': 9000, 'level': 0, 'min': 0, 'type': 'int'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

RoomSegmentation_MorphologicalSegmentation = 1
RoomSegmentation_DistanceSegmentation = 2
RoomSegmentation_VoronoiSegmentation = 3
RoomSegmentation_SemanticSegmentation = 4
RoomSegmentation_RandomFieldSegmentation = 5
RoomSegmentation_PassThroughSegmentation = 99