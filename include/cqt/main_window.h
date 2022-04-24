/**
 * @date 2022/4/7.
**/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QMessageBox>
#include <QFileDialog>
#include <QProcess>
#include <QDebug>

#include <rosbag/bag.h>
#include <rosbag/player.h>
#include <rosbag/recorder.h>

#include "ui_main_window.h"
#include "record.h"
#include "qrviz.h"
#include "qnode.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(int argc, char **argv, QWidget *parent = nullptr);

    ~MainWindow();

    void ReadSettings();         // 读取配置
    void WriteSettings();        // 写入配置
    void initUi();               // 初始化Ui

    enum CAMERAMODE {
        indoor,
        outdoor
    };

private:
    Ui::MainWindow *ui;
    QRviz *rvizWidget = NULL;
    QString livox_command;
    QString camera_command;
    CAMERAMODE camera_mode = CAMERAMODE::outdoor;
    QString mapping_command;


private:
    void connections();

    void initRos();

    void initRviz();

    int executeCmd(QString cmd);

    void stopRecord(QString nodeName);

private slots:

    void on_btn_mapping_clicked();

    void slot_record();

    void slot_changeCameraType(int);

    void slot_displayRviz();

    void slot_stopRecord();

    void slot_openBag();

    void cmd_output();

    void cmd_error_output();

private:
    QNode qnode;
    QProcess *processCmd = nullptr;
};

#endif // MAINWINDOW_H