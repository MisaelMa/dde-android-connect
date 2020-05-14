#ifndef SCREENDEVICES_H
#define SCREENDEVICES_H

#include <QWidget>
#include <QVBoxLayout>
#include "../widgets/carddevices.h"
class ScreenDevices : public QWidget
{
    Q_OBJECT
public:
    explicit ScreenDevices(QWidget *parent = nullptr);

signals:
private:
    QVBoxLayout *m_layout;
    CardDevices *card;
};

#endif // SCREENDEVICES_H
