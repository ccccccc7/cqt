/**
 * @date 2022/4/7.
**/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QMessageBox>

#include "ui_main_window.h"
#include "RvizWidget.h"
#include "qnode.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(int argc, char **argv, QWidget *parent = nullptr);
    ~MainWindow();

    void ReadSettings();         // 读取配置
    void WriteSettings();        // 写入配置
    void initUi();               // 初始化Ui

    enum CAMERAMODE{
        indoor,
        outdoor
    };

private:
    Ui::MainWindow *ui;
    RvizWidget *rvizWidget = NULL;
    QString livox_command;
    QString camera_command;
    CAMERAMODE camera_mode = CAMERAMODE::outdoor;
    QString mapping_command;

private:
    void connections();

private slots:
    void on_btn_mapping_clicked();
    void slot_changeCameraType(int);

private:
    QNode qnode;
};
#endif // MAINWINDOW_H