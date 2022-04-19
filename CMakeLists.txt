cmake_minimum_required(VERSION 3.19)
project(cqt)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 14)

find_package(catkin REQUIRED COMPONENTS rviz roscpp sensor_msgs rosbag)
find_package(Boost REQUIRED COMPONENTS QUIET)
include_directories(${catkin_INCLUDE_DIRS} ${Boost_INCLUDE_DIR})
catkin_package()

set(CMAKE_PREFIX_PATH "/usr/lib/x86_64-linux-gnu")

set(ModuleList
        Core
        Gui
        Widgets
        Multimedia
        Network
        )

foreach(QtModule ${ModuleList})
    set(Qt5${QtModule}_DIR ${CMAKE_PREFIX_PATH}/cmake/Qt5${QtModule})
    message("foreach-> Qt5${QtModule}_DIR : ${Qt5${QtModule}_DIR}")

    set(QT_LIBRARIES ${QT_LIBRARIES} Qt5::${QtModule})
endforeach()
message("${QT_LIBRARIES}")

find_package(Qt5 REQUIRED ${ModuleList})

#ui
file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
#头文件要放入add_executable中
file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS include/cq_monitor/*.hpp *.h)
#生成ui头文件
QT5_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})
QT5_WRAP_CPP(QT_MOC_HPP ${QT_MOC})

##############################################################################
# Sources
##############################################################################

file(GLOB_RECURSE QT_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS src/*.cpp)

link_directories(${Boost_LIBRARIES_DIR})

add_executable(cqt ${QT_FORMS_HPP} ${QT_SOURCES} ${QT_MOC_HPP} src/qnode.cpp include/cq_monitor/qnode.h)
target_link_libraries (cqt ${QT_LIBRARIES} ${catkin_LIBRARIES} ${Boost_LIBRARIES}) # 工程名
