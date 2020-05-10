#ifndef ANDROIDWINDOW_H
#define ANDROIDWINDOW_H

#include <DMainWindow>
#include "leftsidebar.h"
#include <QStackedLayout>
#include <QPushButton>
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
private slots:
    void mensajerecibido(const QString &msj);

private:
    LeftSideBar *m_leftSideBar;
    QStackedLayout *m_stackedLayout;
    QPushButton *btn;
};
#endif // ANDROIDWINDOW_H
