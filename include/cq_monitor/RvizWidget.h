/**  
 * @date 2022/4/11.
**/

#ifndef CQT_RVIZWIDGET_H
#define CQT_RVIZWIDGET_H

#include <QThread>

#include <rviz/display.h>
#include <rviz/render_pannel.h>

class RvizWidget : public QThread{
public:
    Q_OBJECT
    RvizWidget();
private:
    // rviz容器
    rviz::RenderPanel* render_panel_;
    rviz::VisualizationManager* manager_;
    rviz::Display* grid_ = NULL;
};


#endif //CQT_RVIZWIDGET_H
