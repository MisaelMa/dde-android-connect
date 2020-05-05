#include "androidwindow.h"
#include <QPushButton>
#include <ddialog.h>

AndroidWindow::AndroidWindow(QWidget *parent)
    : DMainWindow(parent),
      m_leftSideBar(new LeftSideBar),
     m_stackedLayout(new QStackedLayout)
{

    setFixedSize(820, 550);
    QWidget *centralWidget = new QWidget();
    QHBoxLayout *mainLayout = new QHBoxLayout;

    mainLayout->setMargin(0);
    mainLayout->setSpacing(0);
    mainLayout->addWidget(m_leftSideBar);
    mainLayout->addLayout(m_stackedLayout);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);

    connect(m_leftSideBar, &LeftSideBar::buttonClicked, this, &AndroidWindow::handleLeftSideBarChanged);
}

AndroidWindow::~AndroidWindow()
{
}


void AndroidWindow::handleLeftSideBarChanged(int index)
{     DDialog *dialog = new DDialog;
      dialog->setWindowTitle(QString::number(index));
      dialog->show();

    if (index == 0) {

    } else {

    }

    //m_stackedLayout->setCurrentIndex(index);
}
