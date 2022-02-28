#include "clean_car_target/clean_car_target.h"

map<string,move_base_msgs::MoveBaseGoal> position_map,move_goal;
string target_file_path;
void save_target_pose_callback(const geometry_msgs::PoseStamped::ConstPtr& msg)
{
    move_base_msgs::MoveBaseGoal tmp_target;
    string position;
    tmp_target.target_pose.header = msg->header;
    tmp_target.target_pose.pose = msg->pose;
    cout<<"input position name:";
    cin>>position;
    position_map.insert(pair<string,move_base_msgs::MoveBaseGoal>(position,tmp_target));
}

map<string,move_base_msgs::MoveBaseGoal> read_target_from_file()
{
  map<string,move_base_msgs::MoveBaseGoal> move_base_goal;
  move_base_msgs::MoveBaseGoal goal;
  string s_pose,position_name;
  bool flag = true;
  ifstream infile(target_file_path,ios::in | ios::binary); 
  if(!infile)
    ROS_ERROR("file open failed");
  while(getline(infile,s_pose))
  {
    size_t s = s_pose.find_first_not_of(' ');
    size_t e = s_pose.find_last_not_of(' ');
    std::stringstream ss(s_pose.substr(s, e - s + 1));
    float data_pose[3];
    int i_pose = 0; 
    while (ss.good()) 
    {
        if(flag)
        {
          ss >> position_name;
          flag = false;
        }
        ss >> data_pose[i_pose];
        i_pose++;
    }
    flag = true;
    
    // ROS_INFO("test:%s,%.2f,%.2f,%.2f",position_name.c_str(),data_pose[0],data_pose[1],data_pose[2]);
    goal.target_pose.header.frame_id = "map";
    goal.target_pose.pose.position.x = data_pose[0];
    goal.target_pose.pose.position.y = data_pose[1];
    goal.target_pose.pose.orientation =  tf::createQuaternionMsgFromRollPitchYaw(0, 0, data_pose[2]);
    move_base_goal.insert(pair<string,move_base_msgs::MoveBaseGoal>(position_name,goal));
  }
  infile.close();  
  return move_base_goal;
}

void target_publish()
{
    if(move_goal.empty())
    {
        ROS_INFO("do not set target, can not navigation");
        return;
    }
    actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> ac("move_base",true);
    if(!ac.waitForServer(ros::Duration(60)))
    {
      ROS_INFO("Can't connected to move base server");
      return ;
    }
    ROS_INFO("start_target_move");
    for(auto iter = move_goal.begin(); iter != move_goal.end(); iter++)
    {
      iter->second.target_pose.header.stamp = ros::Time::now();
      ac.sendGoal(iter->second);
      ROS_INFO("start move to target %s",iter->first.c_str());
      bool finished_within_time = ac.waitForResult(ros::Duration(180));//执行任务在180s之内,超出后取消任务
      if(!finished_within_time)
      {
          ac.cancelGoal();
          ROS_INFO("Timed out achieving goal");
      }
      else
      {
        if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
        {
            ROS_INFO("target %s succeeded!",iter->first.c_str());
        }
        else
        {
            ROS_INFO("The base failed for some reason");
        }
      }
    }
}

void save_target_to_file()
{
  ofstream fout(target_file_path,ios::out|ios::binary);
  if(!fout)
      ROS_ERROR("file open failed");
  fout << std::setprecision(10);
  
  for(const auto& map_iterator : position_map)
  {
    fout << map_iterator.first<<" " << map_iterator.second.target_pose.pose.position.x<< " "<< map_iterator.second.target_pose.pose.position.y << " "<< tf::getYaw(map_iterator.second.target_pose.pose.orientation) << "\n";
  }
}

void cmd_callback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str());
    if(msg->data == "load_target")
    {
        move_goal.clear();
        move_goal = read_target_from_file();
        ROS_INFO("load_target_successfull");
    }
    if(msg->data == "save_target")
    {
        fstream file(target_file_path, ios::out);
        save_target_to_file();
        ROS_INFO("save_target_successfull");
    }
    if(msg->data == "start_target")
    {
        target_publish();
    }
    if(msg->data == "clean_target")
    {
        fstream file(target_file_path, ios::out);
        move_goal.clear();
    }
}

int main(int argc,char **argv)
{
    ros::init(argc,argv,"pub_and_sub_node");
    ros::NodeHandle nh("~");
    ros::Subscriber cmd,sub_target_pose;
    
    nh.param<std::string>("target_file_path",target_file_path,"/home/lxd/target_pose.csv");
    cmd = nh.subscribe<std_msgs::String>("/cmd", 10, &cmd_callback);
    sub_target_pose = nh.subscribe("/move_base_simple/goal",10,&save_target_pose_callback);
    fstream file;
    string clean_target_pose;
    file.open(target_file_path,ios::in);
    file.get();
    if(move_goal.empty() && !(file.eof()))
    {
        ROS_INFO("target pose have been exist, clean the pose? yes/no");
        cin>>clean_target_pose;
        if(clean_target_pose == "yes")
        {
          fstream file(target_file_path, ios::out);
          ROS_INFO("delete target pose success, set new target pose by rviz");
        }
        else 
        {
          move_goal = read_target_from_file();
          ROS_INFO("load target successful");
        }
    }
    else
    {
        ROS_INFO("publish /move_base_simple/goal topic by rviz to save target pose and save target pose to file!!!");
    }
    ros::spin();
}
