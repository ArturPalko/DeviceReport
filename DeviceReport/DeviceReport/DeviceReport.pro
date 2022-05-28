#-------------------------------------------------
#

#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
win32:VERSION = 1.0.0.358 # major.minor.patch.build
else:VERSION = 1.0.0    # major.minor.patch

RC_ICONS = res/icon.ico
RC_LANG = 0x0422
RC_CODEPAGE = 1252

TARGET = DeviceReport
TEMPLATE = app
win32 {
LIBS += -lhid -lsetupapi
}

SOURCES += main.cpp\
        mainwindow.cpp \
    aboutdlg.cpp

HEADERS  += mainwindow.h \
    aboutdlg.h

FORMS    += mainwindow.ui \
    aboutdlg.ui

RESOURCES += \
    res.qrc

DISTFILES +=
