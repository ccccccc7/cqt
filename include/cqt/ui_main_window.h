/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *action_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_statue_text;
    QLabel *label_robot_staue_img;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tab_manager;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_rviz;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_2;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_video2;
    QLabel *label_v_name2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_video3;
    QLabel *label_v_name3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_29;
    QPushButton *refreash_topic_btn;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *topic_listWidget;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_camera_type;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_play;
    QPushButton *pushButton_record;
    QPushButton *pushButton_mapping;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_stopRecord;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLabel *label_13;
    QTreeView *treeView_rvizDisplayTree;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_add_topic;
    QPushButton *pushButton_remove_topic;
    QPushButton *pushButton_rename_topic;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton_rvizReadDisplaySet;
    QPushButton *pushButton_rvizSaveDisplaySet;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QTreeWidget *treeWidget_quick_cmd;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *quick_cmd_add_btn;
    QPushButton *quick_cmd_remove_btn;
    QTextEdit *cmd_output;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_22;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_19;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_20;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_21;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1411, 833);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindow);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_16 = new QVBoxLayout(centralwidget);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(32, 32));
        label_19->setMaximumSize(QSize(32, 32));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/images/robot2.png")));

        horizontalLayout_3->addWidget(label_19);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_3->addWidget(label_18);

        label_statue_text = new QLabel(centralwidget);
        label_statue_text->setObjectName(QString::fromUtf8("label_statue_text"));
        label_statue_text->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_statue_text);

        label_robot_staue_img = new QLabel(centralwidget);
        label_robot_staue_img->setObjectName(QString::fromUtf8("label_robot_staue_img"));
        label_robot_staue_img->setMinimumSize(QSize(32, 32));
        label_robot_staue_img->setMaximumSize(QSize(32, 32));
        label_robot_staue_img->setPixmap(QPixmap(QString::fromUtf8(":/images/offline.png")));

        horizontalLayout_3->addWidget(label_robot_staue_img);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(30, 30));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/power.png")));

        horizontalLayout_3->addWidget(label_6);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(32, 32));
        label_11->setMaximumSize(QSize(32, 32));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/power-v.png")));

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_15->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QString::fromUtf8("tab_manager"));
        tab_manager->setMinimumSize(QSize(0, 0));
        tab_manager->setMaximumSize(QSize(1200, 54531));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_rviz = new QVBoxLayout();
        verticalLayout_rviz->setObjectName(QString::fromUtf8("verticalLayout_rviz"));

        verticalLayout_14->addLayout(verticalLayout_rviz);

        verticalLayout_14->setStretch(0, 1);

        gridLayout_4->addLayout(verticalLayout_14, 0, 0, 1, 1);

        tab_manager->addTab(tab_3, QString());
        tab_status = new QWidget();
        tab_status->setObjectName(QString::fromUtf8("tab_status"));
        verticalLayout_13 = new QVBoxLayout(tab_status);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        groupBox_2 = new QGroupBox(tab_status);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        verticalLayout_13->addWidget(groupBox_2);

        tab_manager->addTab(tab_status, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        verticalLayout_21 = new QVBoxLayout(tab_7);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_video2 = new QLabel(tab_7);
        label_video2->setObjectName(QString::fromUtf8("label_video2"));
        label_video2->setMinimumSize(QSize(200, 200));
        label_video2->setMaximumSize(QSize(200, 200));
        label_video2->setStyleSheet(QString::fromUtf8("border:1px solid rgb(0, 0, 0)"));

        verticalLayout_11->addWidget(label_video2);

        label_v_name2 = new QLabel(tab_7);
        label_v_name2->setObjectName(QString::fromUtf8("label_v_name2"));
        label_v_name2->setMaximumSize(QSize(90, 30));

        verticalLayout_11->addWidget(label_v_name2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);


        horizontalLayout_16->addLayout(verticalLayout_11);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_video3 = new QLabel(tab_7);
        label_video3->setObjectName(QString::fromUtf8("label_video3"));
        label_video3->setMinimumSize(QSize(200, 200));
        label_video3->setMaximumSize(QSize(200, 200));
        label_video3->setStyleSheet(QString::fromUtf8("border:1px solid rgb(0, 0, 0)"));

        verticalLayout_19->addWidget(label_video3);

        label_v_name3 = new QLabel(tab_7);
        label_v_name3->setObjectName(QString::fromUtf8("label_v_name3"));
        label_v_name3->setMaximumSize(QSize(16777215, 15));

        verticalLayout_19->addWidget(label_v_name3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_2);


        horizontalLayout_16->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_29 = new QLabel(tab_7);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMaximumSize(QSize(90, 30));

        horizontalLayout_15->addWidget(label_29);

        refreash_topic_btn = new QPushButton(tab_7);
        refreash_topic_btn->setObjectName(QString::fromUtf8("refreash_topic_btn"));
        refreash_topic_btn->setMinimumSize(QSize(90, 25));
        refreash_topic_btn->setMaximumSize(QSize(90, 25));
        refreash_topic_btn->setCursor(QCursor(Qt::ArrowCursor));
        refreash_topic_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/refreash.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreash_topic_btn->setIcon(icon1);

        horizontalLayout_15->addWidget(refreash_topic_btn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);


        verticalLayout_20->addLayout(horizontalLayout_15);

        topic_listWidget = new QListWidget(tab_7);
        topic_listWidget->setObjectName(QString::fromUtf8("topic_listWidget"));

        verticalLayout_20->addWidget(topic_listWidget);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_3);


        horizontalLayout_16->addLayout(verticalLayout_20);


        horizontalLayout_17->addLayout(horizontalLayout_16);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_3);


        verticalLayout_21->addLayout(horizontalLayout_17);

        tab_manager->addTab(tab_7, QString());

        horizontalLayout_4->addWidget(tab_manager);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(370, 100));
        tabWidget->setMaximumSize(QSize(370, 5455315));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_9 = new QVBoxLayout(tab);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        comboBox_camera_type = new QComboBox(tab);
        comboBox_camera_type->addItem(QString());
        comboBox_camera_type->addItem(QString());
        comboBox_camera_type->setObjectName(QString::fromUtf8("comboBox_camera_type"));

        horizontalLayout_2->addWidget(comboBox_camera_type);


        verticalLayout_9->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_play = new QPushButton(tab);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));

        horizontalLayout->addWidget(pushButton_play);

        pushButton_record = new QPushButton(tab);
        pushButton_record->setObjectName(QString::fromUtf8("pushButton_record"));

        horizontalLayout->addWidget(pushButton_record);

        pushButton_mapping = new QPushButton(tab);
        pushButton_mapping->setObjectName(QString::fromUtf8("pushButton_mapping"));

        horizontalLayout->addWidget(pushButton_mapping);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_9->addLayout(verticalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_stopRecord = new QPushButton(tab);
        pushButton_stopRecord->setObjectName(QString::fromUtf8("pushButton_stopRecord"));

        horizontalLayout_7->addWidget(pushButton_stopRecord);


        verticalLayout_9->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_8 = new QVBoxLayout(tab_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(16, 16));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/classes/Displays.svg")));

        horizontalLayout_6->addWidget(label_12);

        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_6->addWidget(label_13);


        verticalLayout_5->addLayout(horizontalLayout_6);

        treeView_rvizDisplayTree = new QTreeView(tab_6);
        treeView_rvizDisplayTree->setObjectName(QString::fromUtf8("treeView_rvizDisplayTree"));

        verticalLayout_5->addWidget(treeView_rvizDisplayTree);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_add_topic = new QPushButton(tab_6);
        pushButton_add_topic->setObjectName(QString::fromUtf8("pushButton_add_topic"));
        pushButton_add_topic->setEnabled(false);

        horizontalLayout_5->addWidget(pushButton_add_topic);

        pushButton_remove_topic = new QPushButton(tab_6);
        pushButton_remove_topic->setObjectName(QString::fromUtf8("pushButton_remove_topic"));
        pushButton_remove_topic->setEnabled(false);

        horizontalLayout_5->addWidget(pushButton_remove_topic);

        pushButton_rename_topic = new QPushButton(tab_6);
        pushButton_rename_topic->setObjectName(QString::fromUtf8("pushButton_rename_topic"));
        pushButton_rename_topic->setEnabled(false);

        horizontalLayout_5->addWidget(pushButton_rename_topic);


        verticalLayout_5->addLayout(horizontalLayout_5);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        pushButton_rvizReadDisplaySet = new QPushButton(tab_6);
        pushButton_rvizReadDisplaySet->setObjectName(QString::fromUtf8("pushButton_rvizReadDisplaySet"));
        pushButton_rvizReadDisplaySet->setEnabled(false);

        gridLayout_10->addWidget(pushButton_rvizReadDisplaySet, 0, 0, 1, 1);

        pushButton_rvizSaveDisplaySet = new QPushButton(tab_6);
        pushButton_rvizSaveDisplaySet->setObjectName(QString::fromUtf8("pushButton_rvizSaveDisplaySet"));
        pushButton_rvizSaveDisplaySet->setEnabled(false);

        gridLayout_10->addWidget(pushButton_rvizSaveDisplaySet, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_10);


        verticalLayout_8->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_18 = new QVBoxLayout(tab_4);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        treeWidget_quick_cmd = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget_quick_cmd->setHeaderItem(__qtreewidgetitem);
        treeWidget_quick_cmd->setObjectName(QString::fromUtf8("treeWidget_quick_cmd"));
        treeWidget_quick_cmd->header()->setMinimumSectionSize(160);
        treeWidget_quick_cmd->header()->setDefaultSectionSize(160);

        verticalLayout_17->addWidget(treeWidget_quick_cmd);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        quick_cmd_add_btn = new QPushButton(tab_4);
        quick_cmd_add_btn->setObjectName(QString::fromUtf8("quick_cmd_add_btn"));

        horizontalLayout_13->addWidget(quick_cmd_add_btn);

        quick_cmd_remove_btn = new QPushButton(tab_4);
        quick_cmd_remove_btn->setObjectName(QString::fromUtf8("quick_cmd_remove_btn"));

        horizontalLayout_13->addWidget(quick_cmd_remove_btn);


        verticalLayout_17->addLayout(horizontalLayout_13);

        cmd_output = new QTextEdit(tab_4);
        cmd_output->setObjectName(QString::fromUtf8("cmd_output"));
        cmd_output->setMaximumSize(QSize(16777215, 60));
        cmd_output->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);\n"
"                  color:rgb(238, 238, 236);"));

        verticalLayout_17->addWidget(cmd_output);


        verticalLayout_18->addLayout(verticalLayout_17);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(1, 1, 369, 282));
        layoutWidget_3 = new QWidget(groupBox_5);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 351, 251));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_22 = new QPushButton(layoutWidget_3);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));

        verticalLayout_7->addWidget(pushButton_22);

        textEdit = new QTextEdit(layoutWidget_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);\n"
"                  color:rgb(238, 238, 236);"));

        verticalLayout_7->addWidget(textEdit);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lineEdit_6 = new QLineEdit(layoutWidget_3);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_10->addWidget(lineEdit_6);

        pushButton_19 = new QPushButton(layoutWidget_3);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        horizontalLayout_10->addWidget(pushButton_19);


        verticalLayout_7->addLayout(horizontalLayout_10);

        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(1, 289, 369, 361));
        layoutWidget_4 = new QWidget(groupBox_7);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 32, 351, 321));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_20 = new QPushButton(layoutWidget_4);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        horizontalLayout_9->addWidget(pushButton_20);


        verticalLayout_6->addLayout(horizontalLayout_9);

        textEdit_2 = new QTextEdit(layoutWidget_4);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);\n"
"                  color:rgb(238, 238, 236);"));

        verticalLayout_6->addWidget(textEdit_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lineEdit_8 = new QLineEdit(layoutWidget_4);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_8->addWidget(lineEdit_8);

        pushButton_21 = new QPushButton(layoutWidget_4);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));

        horizontalLayout_8->addWidget(pushButton_21);


        verticalLayout_6->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_4->addWidget(tabWidget);


        verticalLayout_15->addLayout(horizontalLayout_4);


        verticalLayout_16->addLayout(verticalLayout_15);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1411, 28));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addSeparator();
        menu_File->addSeparator();
        menu_File->addSeparator();
        menu_File->addAction(action_2);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tab_manager->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\272\244\344\272\222\351\241\265\351\235\242", nullptr));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindow", "&\345\212\237\350\203\275", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About &Qt", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        label_19->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "\347\233\270\346\234\272\347\212\266\346\200\201\357\274\232", nullptr));
        label_statue_text->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cc0000;\">\347\246\273\347\272\277</span></p></body></html>", nullptr));
        label_robot_staue_img->setText(QString());
        label_6->setText(QString());
        label_11->setText(QString());
        tab_manager->setTabText(tab_manager->indexOf(tab_3), QApplication::translate("MainWindow", "rviz", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\237\272\347\241\200\345\272\224\347\224\250", nullptr));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindow", "\345\237\272\346\234\254", nullptr));
        label_video2->setText(QApplication::translate("MainWindow", "No Video", nullptr));
        label_v_name2->setText(QApplication::translate("MainWindow", "Video2", nullptr));
        label_video3->setText(QApplication::translate("MainWindow", "No Video", nullptr));
        label_v_name3->setText(QApplication::translate("MainWindow", "Video3", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "\350\257\235\351\242\230\345\210\227\350\241\250\357\274\232", nullptr));
        refreash_topic_btn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        tab_manager->setTabText(tab_manager->indexOf(tab_7), QApplication::translate("MainWindow", "\345\205\266\344\273\226", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\233\270\346\234\272\346\250\241\345\274\217:", nullptr));
        comboBox_camera_type->setItemText(0, QApplication::translate("MainWindow", "\345\256\244\345\244\226\346\250\241\345\274\217", nullptr));
        comboBox_camera_type->setItemText(1, QApplication::translate("MainWindow", "\345\256\244\345\206\205\346\250\241\345\274\217", nullptr));

        comboBox_camera_type->setCurrentText(QApplication::translate("MainWindow", "\345\256\244\345\244\226\346\250\241\345\274\217", nullptr));
        pushButton_play->setText(QApplication::translate("MainWindow", "play", nullptr));
        pushButton_record->setText(QApplication::translate("MainWindow", "record", nullptr));
        pushButton_mapping->setText(QApplication::translate("MainWindow", "mapping", nullptr));
        pushButton_stopRecord->setText(QApplication::translate("MainWindow", "stop record", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\237\272\346\234\254\346\216\247\345\210\266", nullptr));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Displays", nullptr));
        pushButton_add_topic->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pushButton_remove_topic->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        pushButton_rename_topic->setText(QApplication::translate("MainWindow", "Rename", nullptr));
        pushButton_rvizReadDisplaySet->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\351\205\215\347\275\256", nullptr));
        pushButton_rvizSaveDisplaySet->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\351\205\215\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "rviz", nullptr));
        quick_cmd_add_btn->setText(QApplication::translate("MainWindow", "Add", nullptr));
        quick_cmd_remove_btn->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        cmd_output->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\345\277\253\346\215\267\346\214\207\344\273\244", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\346\234\254\345\234\260\347\273\210\347\253\257", nullptr));
        pushButton_22->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        pushButton_19->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\350\277\234\347\250\213\347\273\210\347\253\257(\351\234\200\351\205\215\347\275\256\345\205\215\345\257\206\347\231\273\351\231\206.\345\271\266\345\234\250\350\256\276\347\275\256\344\270\255\350\256\276\347\275\256\350\277\236\346\216\245\345\221\275\344\273\244)", nullptr));
        pushButton_20->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        pushButton_21->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\273\210\347\253\257", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
