/**  
 * @date 2022/4/11.
**/

#include "../include/cq_monitor/qrviz.h"
QRviz::QRviz(QVBoxLayout* layout, QString node_name) {
    this->layout = layout;
    //创建rviz容器,本质也是一个QWidget
    render_panel_ = new rviz::RenderPanel;
    //render_panel_->resize(900, 900);
    //向layout添加widget
    layout->addWidget(render_panel_);
    //初始化rviz控制对象
    manager_ = new rviz::VisualizationManager(render_panel_);

    display_group = manager_->getRootDisplayGroup();
    tool_manager_ = manager_->getToolManager();
    //初始化camera
    render_panel_->initialize(manager_->getSceneManager(), manager_);
    //显示
    manager_->initialize();
    manager_->removeAllDisplays();
    manager_->startUpdate();

    displayGrid(true);

    //topic

}

void QRviz::show() {
    render_panel_->show();
}

void QRviz::displayGrid(bool enable) {
    if (grid_ == NULL) {
        grid_ = manager_->createDisplay("rviz/Grid", "rviz grid", true);
        ROS_ASSERT(grid_ != NULL);
        grid_->subProp("Line Style")->setValue("Billboards");
        grid_->subProp("Color")->setValue(QColor(125, 125, 125));
    }
    grid_->setEnabled(enable);
    manager_->startUpdate();
}
