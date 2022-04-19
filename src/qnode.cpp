//
// Created by dongshan on 2022/4/14.
//

#include "include/cq_monitor/qnode.h"

QNode::QNode(int argc, char **argv):init_argc_(argc), init_argv_(argv) {

}

QNode::~QNode(){
    if (ros::isStarted()){
        ros::shutdown();
        ros::waitForShutdown();
    }
}

bool QNode::init() {
    ros::init(init_argc_, init_argv_, "cqt");
    if(!ros::master::check())
    {
        return false;
    }
    ros::start();
    ros::NodeHandle nh;
    start();
    return true;
}

bool QNode::init(const std::string &master_url, const std::string &host_url) {
    std::map<std::string, std::string> remappings;
    remappings["__master"] = master_url;
    remappings["__hostname"] = host_url;
    ros::init(remappings, "qt_slam_ui_node");
    if (!ros::master::check()) {
        return false;
    }
    ros::start();
    ros::NodeHandle nh;
    start();
    return true;
}

void QNode::run() {
    ros::spin();
    Q_EMIT RosShutDown();
}


