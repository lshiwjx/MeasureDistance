#-------------------------------------------------
#
# Project created by QtCreator 2016-03-06T13:59:30
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += axcontainer


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtRobot
TEMPLATE = app
CONFIG += C++11

SOURCES += main.cpp\
    logindialog.cpp \
    robotclient.cpp \
    robotcontroldialog.cpp \
    cameracontrol.cpp \
    cameralogindialog.cpp \
    mylabel.cpp \
#    compressiveTracking/CompressiveTracker.cpp


HEADERS  += \
    logindialog.h \
    robotclient.h \
    robotcontroldialog.h \
    cameracontrol.h \
    cameralogindialog.h \
    mylabel.h \
#    compressiveTracking/CompressiveTracker.h

FORMS    += \
    logindialog.ui \
    robotcontroldialog.ui \
    cameralogindialog.ui


win32:CONFIG(debug, debug|release):
{
    LIBS += -L$$PWD/Ar/LIB -lArNetworkingDebugVC12
    LIBS += -L$$PWD/Ar/LIB -lAriaDebugVC12
    LIBS += -L$$PWD/opencv30x86VC12/lib/ -lopencv_ts300d
    LIBS += -L$$PWD/opencv30x86VC12/lib/ -lopencv_world300d
#    LIBS += -L$$PWD/tld/lib -llibqtldd
}
win32:CONFIG(release, debug|release):
{
    LIBS += -L$$PWD/Ar/LIB -lArNetworkingVC12
    LIBS += -L$$PWD/Ar/LIB -lAriaVC12
    LIBS += -L$$PWD/opencv30x86VC12/lib/ -lopencv_ts300
    LIBS += -L$$PWD/opencv30x86VC12/lib/ -lopencv_world300
#    LIBS += -L$$PWD/tld/lib -llibqtld
}




INCLUDEPATH += $$PWD/Ar/INC
INCLUDEPATH += $$PWD/opencv30x86VC12/include
INCLUDEPATH += $$PWD/camerasource
#INCLUDEPATH += $$PWD/tld/inc

