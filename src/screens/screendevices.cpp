#include "screendevices.h"
#include <DStandardItem>
#include <QPushButton>
using namespace Dtk::Core;
using namespace Dtk::Widget;
ScreenDevices::ScreenDevices(QWidget *parent) : QWidget(parent),
    m_layout(new QVBoxLayout),
    card(new CardDevices)
{
    QHBoxLayout *layout = new QHBoxLayout;
    layout->setMargin(0);
    //topLayout->addWidget(card);
    //card->setTitle("CPU");
    //card->setTips(tr("CPU Idle"));

    for(int i=0; i< 3; i++){
        CardDevices *liz = new CardDevices(this);
        liz->setTitle("CPU");
        liz->setTips(tr("CPU Idle"));
            layout->addWidget(liz,1);
    }

        QPushButton *button1 = new QPushButton("One");
        QPushButton *button2 = new QPushButton("Two");
        QPushButton *button3 = new QPushButton("Three");
        QPushButton *button4 = new QPushButton("Four");
        QPushButton *button5 = new QPushButton("Five");

        layout->addWidget(button1);
        layout->addWidget(button2);
        layout->addWidget(button3);
        layout->addWidget(button4);
        layout->addWidget(button5);

    m_layout->addLayout(layout);
        layout->setAlignment(Qt::AlignTop);
    setLayout(m_layout);
}
