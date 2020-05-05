#include "androidwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AndroidWindow w;
    w.show();
    return a.exec();
}
