#ifndef ANDROIDWINDOW_H
#define ANDROIDWINDOW_H

#include <QMainWindow>

class AndroidWindow : public QMainWindow
{
    Q_OBJECT

public:
    AndroidWindow(QWidget *parent = nullptr);
    ~AndroidWindow();
};
#endif // ANDROIDWINDOW_H
