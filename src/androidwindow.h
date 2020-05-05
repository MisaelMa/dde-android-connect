#ifndef ANDROIDWINDOW_H
#define ANDROIDWINDOW_H

#include <DMainWindow>
#include "leftsidebar.h"
#include <QStackedLayout>

using namespace Dtk::Core;
using namespace Dtk::Widget;
class AndroidWindow : public DMainWindow
{
    Q_OBJECT

public:
    AndroidWindow(QWidget *parent = nullptr);
    ~AndroidWindow();
private:
    void handleLeftSideBarChanged(int index);

private:
    LeftSideBar *m_leftSideBar;
    QStackedLayout *m_stackedLayout;
};
#endif // ANDROIDWINDOW_H
