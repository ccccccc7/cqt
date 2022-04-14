#include "../include/cq_monitor/main_window.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QtGui>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    MainWindow window(argc, argv);
    window.show();

    return app.exec();
}