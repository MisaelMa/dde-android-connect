#include "androidwindow.h"
#include <DApplication>
#include <QtCore/QCoreApplication>
#include <QtCore/QCommandLineParser>
#include <QtCore/QCommandLineOption>
#include <DWidgetUtil>

using namespace Dtk::Core;
using namespace Dtk::Widget;
int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication app(argc, argv);
    app.setProductName("Hello Deepin");
    app.setApplicationDescription("first Application for deepin");
    app.setApplicationLicense("Deepin Application");
    app.setApplicationVersion("0.0.1");
    app.setApplicationHomePage("https://github.com");
    app.setApplicationAcknowledgementVisible(false);
    app.setApplicationAcknowledgementPage("https://github.com");

    if (!app.setSingleInstance("sysbro")) {
        return 0;
    }

    AndroidWindow w;
    w.show();
    Dtk::Widget::moveToCenter(&w);


    return app.exec();
}
