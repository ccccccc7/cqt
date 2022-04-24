//
// Created by dongshan on 2022/4/14.
//

#ifndef CQT_QNODE_H
#define CQT_QNODE_H

#include <QThread>
#include <ros/ros.h>

class QNode:public QThread {
    Q_OBJECT;
public:
    QNode(int argc, char **argv);
    virtual ~QNode();
    bool init();
    bool init(const std::string &master_url, const std::string &host_url);
    void run();

    Q_SIGNALS:
    void RosShutDown();

private:
    int init_argc_;
    char **init_argv_;
};


#endif //CQT_QNODE_H
