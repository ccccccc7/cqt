/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_play;
    QPushButton *btn_record;
    QPushButton *btn_mapping;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_rviz;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1170, 697);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 0, 1171, 651));
        listView->setMinimumSize(QSize(1171, 0));
        listView->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(910, 500, 201, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_play = new QPushButton(horizontalLayoutWidget);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));

        horizontalLayout->addWidget(btn_play);

        btn_record = new QPushButton(horizontalLayoutWidget);
        btn_record->setObjectName(QString::fromUtf8("btn_record"));
        btn_record->setMaximumSize(QSize(1059, 16777215));

        horizontalLayout->addWidget(btn_record);

        btn_mapping = new QPushButton(horizontalLayoutWidget);
        btn_mapping->setObjectName(QString::fromUtf8("btn_mapping"));

        horizontalLayout->addWidget(btn_mapping);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 50, 851, 511));
        verticalLayout_rviz = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_rviz->setObjectName(QString::fromUtf8("verticalLayout_rviz"));
        verticalLayout_rviz->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1170, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_play->setText(QApplication::translate("MainWindow", "play", nullptr));
        btn_record->setText(QApplication::translate("MainWindow", "record", nullptr));
        btn_mapping->setText(QApplication::translate("MainWindow", "mapping", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
