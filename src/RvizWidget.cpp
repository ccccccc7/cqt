/**  
 * @date 2022/4/11.
**/

#include "../include/cq_monitor/RvizWidget.h"
RvizWidget::RvizWidget(QVBoxLayout* layout, QString node_name) {
    this->layout = layout;
    //创建rviz容器,本质也是一个QWidget
    render_panel_ = new rviz::RenderPanel;
    //render_panel_->resize(900, 900);
    //向layout添加widget
    layout->addWidget(render_panel_);
    //初始化rviz控制对象
    manager_ = new rviz::VisualizationManager(render_panel_);
    tool_manager_ = manager_->getToolManager();
    //初始化camera
    render_panel_->initialize(manager_->getSceneManager(), manager_);
    //显示
    manager_->initialize();
    manager_->removeAllDisplays();
    manager_->startUpdate();

    //设置左侧参数

    //
}

void RvizWidget::show() {
    render_panel_->show();
}
