#include "androidwindow.h"
#include <QPushButton>
#include <ddialog.h>
#include "server/server.h"
AndroidWindow::AndroidWindow(QWidget *parent)
    : DMainWindow(parent),
     m_leftSideBar(new LeftSideBar),
     m_stackedLayout(new QStackedLayout),
     devices(new ScreenDevices)
{

    //setFixedSize(820, 550);
    QWidget *content = new QWidget;
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(m_leftSideBar);
    mainLayout->addLayout(m_stackedLayout);
    content->setLayout(mainLayout);

    setLayout(mainLayout);
    m_stackedLayout->addWidget(devices);
    setCentralWidget(content);
    bool debug = true;
    int port = 1234;
    server *server = new class server(port, debug);

    connect(m_leftSideBar, &LeftSideBar::buttonClicked, this, &AndroidWindow::handleLeftSideBarChanged);
    connect(server, SIGNAL(mensajeRecibido(QString)),this,SLOT(mensajerecibido(QString)));

}

AndroidWindow::~AndroidWindow()
{
}


void AndroidWindow::handleLeftSideBarChanged(int index)
{    /* DDialog *dialog = new DDialog;
      dialog->setWindowTitle(QString::number(index));
      dialog->show();*/

    if (index == 0) {

    } else {
        m_stackedLayout->setCurrentIndex(index);
    }

    //
}

void AndroidWindow::mensajerecibido(const QString &msj)
{
    btn = new QPushButton(msj);
    setCentralWidget(btn);
}
