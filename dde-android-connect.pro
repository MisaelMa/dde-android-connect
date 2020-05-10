QT       +=  core gui widgets svg multimedia multimediawidgets xml network sql dbus websockets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG +=plugin c++11 link_pkgconfig console


PKGCONFIG += dtkwidget

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/main.cpp \
    src/androidwindow.cpp \
    src/leftsidebar.cpp \
    src/pushbutton.cpp \
    src/server/server.cpp \
     src/utils/utils.cpp
HEADERS += \
    src/androidwindow.h \
    src/leftsidebar.h \
    src/pushbutton.h \
    src/server/server.h \
    src/utils/utils.h
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
