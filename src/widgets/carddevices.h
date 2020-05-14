#ifndef CARDDEVICES_H
#define CARDDEVICES_H

#include <QWidget>
#include <QVBoxLayout>
#include <QVariantAnimation>
#include <QLabel>
#include "../utils/roundedwidget.h"

class CardDevices : public RoundedWidget
{
    Q_OBJECT
public:
    explicit CardDevices(QWidget *parent = nullptr);

    void setValue(const float &value);
       void setValue(const QString &text);
       void setTitle(const QString &text);
       void setTips(const QString &text);
       void setColor(const QColor &color);
       void setIcon(const QString &iconPath, const QSize &size);

   private:
       QVBoxLayout *m_layout;
       QVariantAnimation *m_animation;
       // ProgressBar *m_progress;
       QLabel *m_iconLabel;
       QLabel *m_titleLabel;
       QLabel *m_percentLabel;
       QLabel *m_tipsLabel;

};

#endif // CARDDEVICES_H
