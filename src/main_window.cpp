/**  
 * @date 2022/4/7.
**/

#include "../include/cq_monitor/main_window.h"


MainWindow::MainWindow(int argc, char **argv, QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow), qnode(argc, argv)
{
    ui->setupUi(this);
    connect(&qnode, SIGNAL(RosShutDown()), this, SLOT(close()));

    // 读取配置
    // ReadSettings();
    // 初始化UI
    initUi();
    //链接槽函数
    connections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * Implementation
 */
void MainWindow::connections() {
    QObject::connect(ui->btn_mapping, &QPushButton::clicked, [&](){
        ui->btn_mapping->setText("hello world");
    });

}

void MainWindow::ReadSettings() {
    QSettings settings("cqt", "settings");
    livox_command =
            settings.value("livox", QString("roslaunch livox_ros_driver livox_lidar_msg.launch")).toString();

    if (settings.value("camera_mode", "outdoor").toString() == "outdoor") {
        camera_mode = CAMERAMODE::outdoor;
        camera_command = "oslaunch hikrobot_camera hikrobot_camera_outdoor.launch";
    } else {
        camera_mode = CAMERAMODE::indoor;
        camera_command = "oslaunch hikrobot_camera hikrobot_camera_indoor.launch";
    }

    mapping_command =
            settings.value("mapping", QString("roslaunch r3live r3live_bag_tf.launch")).toString();
}

void MainWindow::initUi() {
    qnode.init();
    rvizWidget = new RvizWidget(ui->verticalLayout_rviz, "qrviz");
    rvizWidget->show();
}

void MainWindow::on_btn_mapping_clicked() {
    system(livox_command.toStdString().c_str());
    system(camera_command.toStdString().c_str());
    system(mapping_command.toStdString().c_str());
}



