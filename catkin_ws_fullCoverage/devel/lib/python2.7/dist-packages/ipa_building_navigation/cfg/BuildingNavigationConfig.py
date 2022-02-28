## *********************************************************
##
## File autogenerated for the ipa_building_navigation package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 246, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 291, 'description': 'TSP solver', 'max': 3, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'tsp_solver', 'edit_method': "{'enum_description': 'TSP solver', 'enum': [{'srcline': 9, 'description': 'Use the nearest neighbor TSP algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_navigation/cfg/BuildingNavigation.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'NearestNeighbor'}, {'srcline': 10, 'description': 'Use the genetic TSP algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_navigation/cfg/BuildingNavigation.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'GeneticSolver'}, {'srcline': 11, 'description': 'Use the Concorde TSP algorithm.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_navigation/cfg/BuildingNavigation.cfg', 'cconsttype': 'const int', 'value': 3, 'ctype': 'int', 'type': 'int', 'name': 'ConcordeSolver'}]}", 'default': 3, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 291, 'description': 'Problem setting of the sequence planning problem', 'max': 2, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'problem_setting', 'edit_method': "{'enum_description': 'Problem setting of the sequence planning problem', 'enum': [{'srcline': 16, 'description': 'Plan the optimal order of a simple set of locations.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_navigation/cfg/BuildingNavigation.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'SimpleOrderPlanning'}, {'srcline': 17, 'description': 'Two-stage planning that creates local cliques of locations (= checkpoints) and determines the optimal order through the members of each clique as well as the optimal order through the cliques.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_navigation/cfg/BuildingNavigation.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'CheckpointBasedPlanning'}]}", 'default': 2, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 291, 'description': 'Trolley placement method (only applies to CheckpointBasedPlanning problem)', 'max': 2, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'planning_method', 'edit_method': "{'enum_description': 'Trolley placement method (only applies to CheckpointBasedPlanning problem)', 'enum': [{'srcline': 23, 'description': 'Drag the trolley if it is too far away from next room.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_navigation/cfg/BuildingNavigation.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'DragTrolleyWhenNecessary'}, {'srcline': 24, 'description': 'Put rooms together in groups and calculate a corresponding trolley positions.', 'srcfile': '/home/liun/catkin_ws_10_23/src/ipa_coverage_planning/ipa_building_navigation/cfg/BuildingNavigation.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'PrecomputeRoomGroupsAndCorrespondingTrolleyPosition'}]}", 'default': 2, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 291, 'description': 'Max A* path length between two rooms that are assigned to the same clique, in [m] (only applies to CheckpointBasedPlanning problem)', 'max': inf, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_clique_path_length', 'edit_method': '', 'default': 12.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 291, 'description': 'Maximal number of nodes belonging to one trolley clique (only applies to CheckpointBasedPlanning problem)', 'max': 2147483647, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'maximum_clique_size', 'edit_method': '', 'default': 9001, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': "The map may be downsampled during computations (e.g. of A* path lengths) in order to speed up the algorithm, if set to 1 the map will have original size, if set to 0 the algorithm won't work", 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'map_downsampling_factor', 'edit_method': '', 'default': 0.25, 'level': 0, 'min': 1e-05, 'type': 'double'}, {'srcline': 291, 'description': 'Tells the sequence planner if it should check the given room centers for accessibility from the starting position', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'check_accessibility_of_rooms', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'Tells the server if the map with the sequence drawn in should be returned', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'return_sequence_map', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'Show the resulting map with paths (only if return_sequence_map=true)', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'display_map', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}], 'type': '', 'id': 0}

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

BuildingNavigation_NearestNeighbor = 1
BuildingNavigation_GeneticSolver = 2
BuildingNavigation_ConcordeSolver = 3
BuildingNavigation_SimpleOrderPlanning = 1
BuildingNavigation_CheckpointBasedPlanning = 2
BuildingNavigation_DragTrolleyWhenNecessary = 1
BuildingNavigation_PrecomputeRoomGroupsAndCorrespondingTrolleyPosition = 2
