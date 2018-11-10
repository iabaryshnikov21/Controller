#-------------------------------------------------
#
# Project created by QtCreator 2018-09-20T22:14:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = new_micro
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    new_class.cpp \
    customscene.cpp \
    switches.cpp \
    radiobuttons.cpp \
    j1_j9.cpp \
    buttons.cpp \
    diodes.cpp \
    mcu.cpp \
    port.cpp \
    ports.cpp

HEADERS  += mainwindow.h \
    new_class.h \
    customscene.h \
    switches.h \
    radiobuttons.h \
    j1_j9.h \
    buttons.h \
    diodes.h \
    mcu.h \
    port.h \
    ports.h

FORMS    += mainwindow.ui \
    switches.ui \
    radiobuttons.ui \
    j1_j9.ui \
    buttons.ui \
    diodes.ui \
    mcu.ui \
    port.ui \
    ports.ui
