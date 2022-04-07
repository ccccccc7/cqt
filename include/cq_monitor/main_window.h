/**
 * @date 2022/4/7.
**/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_main_window.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void ReadSettings();         // 读取配置
    void WriteSettings();        // 写入配置

private:
    Ui::MainWindow *ui;

private:
    void connections();
};
#endif // MAINWINDOW_H