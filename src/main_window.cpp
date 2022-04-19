/**  
 * @date 2022/4/7.
**/
#define enum_to_string(x) #x

#include "../include/cq_monitor/main_window.h"


MainWindow::MainWindow(int argc, char **argv, QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow), qnode(argc, argv) {
    ui->setupUi(this);
    initRos();
    connect(&qnode, SIGNAL(RosShutDown()), this, SLOT(close()));


    // 读取配置
    ReadSettings();
    // 初始化UI
    initUi();
    //链接槽函数
    connections();
}

MainWindow::~MainWindow() {
    delete ui;
}

/**
 * Implementation
 */
void MainWindow::connections() {
    connect(ui->pushButton_mapping, SIGNAL(clicked()), this, SLOT(on_btn_mapping_clicked()));
    connect(ui->pushButton_play, SIGNAL(clicked()), this, SLOT(slot_openBag()));
    connect(ui->pushButton_record, SIGNAL(clicked()), this, SLOT(on_pushButton_recording_clicked()));
    connect(ui->comboBox_camera_type, SIGNAL(currentIndexChanged(int)), this, SLOT(slot_changeCameraType(int)));
}

void MainWindow::ReadSettings() {
    QSettings settings("cqt", "settings");
    livox_command =
            settings.value("livox", QString("roslaunch livox_ros_driver livox_lidar_msg.launch")).toString();

    if (settings.value("camera_mode", "outdoor").toString() == "outdoor") {
        camera_mode = CAMERAMODE::outdoor;
        camera_command = "roslaunch hikrobot_camera hikrobot_camera_outdoor.launch";
    } else {
        camera_mode = CAMERAMODE::indoor;
        camera_command = "roslaunch hikrobot_camera hikrobot_camera_indoor.launch";
    }

    mapping_command =
            settings.value("mapping", QString("roslaunch r3live r3live_bag_tf.launch")).toString();
}

void MainWindow::initUi() {
    initRviz();
//    ui->widget_rviz->hide();
}

void MainWindow::on_btn_mapping_clicked() {
    executeCmd(mapping_command);
}

void MainWindow::on_pushButton_recording_clicked() {
//    if (executeCmd(livox_command) != 0) {
//        return;
//    }
//    if (executeCmd(camera_command) != 0) {
//        return;
//    }
    rosbag::RecorderOptions opts;
    opts.record_all = true;
    rosbag::Recorder recorder(opts);
    recorder.run();
}

void MainWindow::slot_changeCameraType(int index) {
    switch (index) {
        case 0:
            camera_mode = CAMERAMODE::outdoor;
            camera_command = "roslaunch hikrobot_camera hikrobot_camera_outdoor.launch";
            break;
        case 1:
            camera_mode = CAMERAMODE::indoor;
            camera_command = "roslaunch hikrobot_camera hikrobot_camera_indoor.launch";
            break;
        default:
            camera_mode = CAMERAMODE::outdoor;
            camera_command = "roslaunch hikrobot_camera hikrobot_camera_outdoor.launch";
    }
}

void MainWindow::slot_openBag() {
    QString fileName = QFileDialog::getOpenFileName(this, "选择文件", "~", "*.bag");

    if (fileName.length() != 0) {

        std::thread threadObj([&fileName] {
            // rosbag play
            rosbag::PlayerOptions opts;
            opts.bags.push_back(fileName.toStdString());
            rosbag::Player player(opts);
            player.publish();
            //std::bad_alloc
            std::vector<std::basic_string<char>>().swap(opts.bags);
        });
        threadObj.detach();
    }
}

void MainWindow::initRos() {
    qnode.init();
//    pid_t pid = fork();
//    if (pid == -1) {
//        perror("fork error");
//        exit(1);
//    } else if (pid == 0) {
//        execlp("roscore", nullptr);
//        exit(1);
//    } else if (pid > 0) {
//        sleep(1);
//    }

}

void MainWindow::slot_displayRviz() {

}

void MainWindow::initRviz() {
    rvizWidget = new QRviz(ui->verticalLayout_rviz, "qrviz");
}

int MainWindow::executeCmd(QString cmd) {
    processCmd = new QProcess;
//    processCmd->start("/bin/bash");
    processCmd->start(cmd.toLocal8Bit() + "\n");
    processCmd->waitForStarted();
    qDebug() << cmd;
//    processCmd->write(cmd.toLocal8Bit() + "\n");
    connect(processCmd, SIGNAL(readyReadStandardOutput()), this, SLOT(cmd_output()));
    connect(processCmd, SIGNAL(readyReadStandardError()), this, SLOT(cmd_error_output()));
    processCmd->waitForFinished();

    return processCmd->exitCode();
}

void MainWindow::cmd_output() {
    QMessageBox m;
    m.setWindowTitle("info");
    m.setText(processCmd->readAllStandardOutput());
    m.exec();
}

void MainWindow::cmd_error_output() {
    QMessageBox m;
    m.setWindowTitle("error");
    m.setText(processCmd->readAllStandardError());
    m.exec();
}



