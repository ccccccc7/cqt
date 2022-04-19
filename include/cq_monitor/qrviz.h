/**  
 * @date 2022/4/11.
**/

#ifndef CQT_QRVIZ_H
#define CQT_QRVIZ_H

#include <QThread>

#include <rviz/display.h>
#include <rviz/render_panel.h>
#include <rviz/visualization_manager.h>
#include <rviz/tool_manager.h>
#include <rviz/tool.h>

#include <QVBoxLayout>

class QRviz : public QThread{
    Q_OBJECT
public:
    QRviz(QVBoxLayout* layout, QString node_name);

    void show();
    void displayGrid(bool enable);

private:
    // rviz容器
    rviz::RenderPanel* render_panel_;
    rviz::VisualizationManager* manager_;
    rviz::Display* grid_ = NULL;

    QVBoxLayout* layout = NULL;
    rviz::ToolManager* tool_manager_;
    rviz::DisplayGroup *display_group;
};


#endif //CQT_QRVIZ_H
