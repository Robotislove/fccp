#include "CleaningPathPlanner.h"
#include <costmap_2d/cost_values.h>
    //CleaningPathPlanning() = delete;
    //
CleaningPathPlanning::leaningPathPlanning(costmap_2d::Costmap2DROS *costmap2d_ros){

}


vector<geometry_msgs::PoseStamped> CleaningPathPlanning::GetPathInROS(){

}

vector<geometry_msgs::PoseStamped> CleaningPathPlanning::GetBorderTrackingPathInROS(){

}

void CleaningPathPlanning::SetCoveredGrid(double wx, double wy){

}

int CleaningPathPlanning::GetSizeOfCell() { 
    return this->SIZE_OF_CELL; 

}

bool CleaningPathPlanning::Boundingjudge(int a, int b){

}
    //for visualization
void CleaningPathPlanning::PublishCoveragePath(){

}

void CleaningPathPlanning::PublishGrid(){

}

int main(){
    Mat Image_Input;
    Image_Input = imdread("/home/liun/catkin_ws_10_23/map/map.pgm", IMREAD_UNCHANGED);
    if (Image_Input.empty()) {
        //检查是否读取图像
        cout << "Error! Input image cannot be read...\n";
        return -1;
    }
    imshow("img", img_mat);
    waitKey(0);
    return 0;
}
