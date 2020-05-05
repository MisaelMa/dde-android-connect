#include "androidwindow.h"
#include <QPushButton>

AndroidWindow::AndroidWindow(QWidget *parent)
    : DMainWindow(parent)
{

    setFixedSize(820, 550);
    QPushButton *a = new QPushButton(this);
    a->setText("Amir");
}

AndroidWindow::~AndroidWindow()
{
}

