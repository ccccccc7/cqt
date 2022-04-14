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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_rviz;
    QLabel *label;
    QPushButton *pushButton_camera_status;
    QComboBox *comboBox_play;
    QWidget *widget;
    QPushButton *pushButton_lidar_status;
    QLabel *label_2;
    QPushButton *btn_mapping;
    QPushButton *btn_record;
    QPushButton *pushButton_play;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1181, 697);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 0, 1171, 641));
        listView->setMinimumSize(QSize(1171, 0));
        QFont font;
        font.setPointSize(10);
        listView->setFont(font);
        listView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        listView->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 50, 841, 511));
        verticalLayout_rviz = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_rviz->setObjectName(QString::fromUtf8("verticalLayout_rviz"));
        verticalLayout_rviz->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 67, 17));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setKerning(true);
        label->setFont(font1);
        label->setMargin(0);
        pushButton_camera_status = new QPushButton(centralwidget);
        pushButton_camera_status->setObjectName(QString::fromUtf8("pushButton_camera_status"));
        pushButton_camera_status->setGeometry(QRect(80, 10, 20, 20));
        pushButton_camera_status->setMaximumSize(QSize(20, 20));
        pushButton_camera_status->setBaseSize(QSize(20, 20));
        pushButton_camera_status->setFont(font);
        pushButton_camera_status->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_play = new QComboBox(centralwidget);
        comboBox_play->addItem(QString());
        comboBox_play->addItem(QString());
        comboBox_play->setObjectName(QString::fromUtf8("comboBox_play"));
        comboBox_play->setGeometry(QRect(890, 510, 100, 20));
        comboBox_play->setMaximumSize(QSize(100, 20));
        comboBox_play->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(880, 60, 291, 531));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        pushButton_lidar_status = new QPushButton(centralwidget);
        pushButton_lidar_status->setObjectName(QString::fromUtf8("pushButton_lidar_status"));
        pushButton_lidar_status->setGeometry(QRect(220, 10, 20, 20));
        pushButton_lidar_status->setMaximumSize(QSize(20, 20));
        pushButton_lidar_status->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 10, 91, 20));
        label_2->setMaximumSize(QSize(100, 20));
        label_2->setFont(font);
        btn_mapping = new QPushButton(centralwidget);
        btn_mapping->setObjectName(QString::fromUtf8("btn_mapping"));
        btn_mapping->setGeometry(QRect(1060, 540, 100, 20));
        btn_mapping->setMaximumSize(QSize(100, 20));
        QFont font2;
        font2.setPointSize(11);
        btn_mapping->setFont(font2);
        btn_record = new QPushButton(centralwidget);
        btn_record->setObjectName(QString::fromUtf8("btn_record"));
        btn_record->setGeometry(QRect(1000, 540, 50, 20));
        btn_record->setMaximumSize(QSize(50, 20));
        btn_record->setFont(font2);
        pushButton_play = new QPushButton(centralwidget);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        pushButton_play->setGeometry(QRect(890, 540, 100, 20));
        pushButton_play->setMaximumSize(QSize(100, 20));
        MainWindow->setCentralWidget(centralwidget);
        listView->raise();
        widget->raise();
        verticalLayoutWidget->raise();
        label->raise();
        pushButton_camera_status->raise();
        btn_mapping->raise();
        btn_record->raise();
        pushButton_play->raise();
        comboBox_play->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1181, 28));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\233\270\346\234\272\347\212\266\346\200\201\357\274\232", nullptr));
        pushButton_camera_status->setText(QString());
        comboBox_play->setItemText(0, QApplication::translate("MainWindow", "\345\256\244\345\244\226\346\250\241\345\274\217", nullptr));
        comboBox_play->setItemText(1, QApplication::translate("MainWindow", "\345\256\244\345\206\205\346\250\241\345\274\217", nullptr));

        comboBox_play->setCurrentText(QApplication::translate("MainWindow", "\345\256\244\345\244\226\346\250\241\345\274\217", nullptr));
        pushButton_lidar_status->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\346\277\200\345\205\211\351\233\267\350\276\276\347\212\266\346\200\201\357\274\232", nullptr));
        btn_mapping->setText(QApplication::translate("MainWindow", "mapping", nullptr));
        btn_record->setText(QApplication::translate("MainWindow", "record", nullptr));
        pushButton_play->setText(QApplication::translate("MainWindow", "play", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
