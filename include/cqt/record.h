//
// Created by dongshan on 2022/4/24.
//

#ifndef CQT_RECORD_H
#define CQT_RECORD_H

#include <rosbag/recorder.h>

class Record : public rosbag::Recorder {
public:
    Record(ros::NodeHandle, rosbag::RecorderOptions const& options);
    void wait_for_callback();
};


#endif //CQT_RECORD_H
