//
// Created by dongshan on 2022/4/24.
//

#include "include/cqt/record.h"

Record::Record(ros::NodeHandle, const rosbag::RecorderOptions &options) : rosbag::Recorder(options) {

}

void Record::wait_for_callback() {
    ros::Rate rate(10);
    while(ros::ok()) {
        ros::spinOnce();
        rate.sleep();
    }
}
