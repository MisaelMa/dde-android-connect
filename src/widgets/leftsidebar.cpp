#include "leftsidebar.h"
#include <QPushButton>
#include <QPainter>
#include <QMap>
#include <QColor>
#include <QScrollArea>

LeftSideBar::LeftSideBar(QWidget *parent)
    : QWidget(parent),
      m_buttonGroup(new QButtonGroup)
{

    scrollArea = new QScrollArea(this);
    scrollArea->setStyleSheet("background-color:transparent;");
    scrollArea->setFixedSize(QSize(160,560));
    m_layout = new QVBoxLayout();
    QWidget *contes = new QWidget;
    m_buttonNameList << tr("Monitor") << tr("Info") << tr("Cleaner") << tr("Speed up")
                     << tr("Tools")<< tr("AMIR") << tr("Liz") << tr("AMIR") << tr("Liz") << tr("AMIR") << tr("Liz") << tr("AMIR") << tr("Liz")
                        << tr("AMIR") << tr("Liz") << tr("AMIR") << tr("Liz");
    // m_layout->setSpacing(5);


    contes->setLayout(m_layout);
    setFixedWidth(160);
    initButtons();
    scrollArea->setWidget(contes);
    connect(m_buttonGroup, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked), this, &LeftSideBar::buttonClicked);
}

void LeftSideBar::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);

    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor("#FFFFFF"));
    painter.drawRect(rect());
}

void LeftSideBar::initButtons()
{
    const QMap<int, QString> icons = {
        {0, ":/resources/home.svg"},
        {1, ":/resources/info.svg"},
        {2, ":/resources/cleaning_brush.svg"},
        {3, ":/resources/statistics.svg"},
        {4, ":/resources/toolbox.svg"},
        {5, ":/resources/cpu.svg"},
        {6, ":/resources/crash.svg"},
        {7, ":/resources/toolbox.svg"}

    };

    for (int i = 0; i < m_buttonNameList.size(); ++i) {
        QPushButton *btn = new QPushButton;
        btn->setText(m_buttonNameList.at(i));
        btn->setObjectName("SideButton");
        btn->setCheckable(true);
        btn->setFixedHeight(45);
        btn->setIcon(QIcon(icons.value(i)));
        btn->setIconSize(QSize(30, 30));


        m_buttonGroup->addButton(btn, i);
        m_layout->addWidget(btn);

    }

    m_buttonGroup->button(0)->setChecked(true);
    m_layout->addStretch();

}
