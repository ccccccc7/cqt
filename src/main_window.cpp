/**  
 * @date 2022/4/7.
**/

#include "../include/cq_monitor/main_window.h"


MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ReadSettings();
    connections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connections() {
    QObject::connect(ui->btn_mapping, &QPushButton::clicked, [&](){
        ui->btn_mapping->setText("hello world");
    });

}



