#-------------------------------------------------
#
# Project created by QtCreator 2016-07-13T20:39:00
#
#-------------------------------------------------

QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gateway
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialclass.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp

HEADERS  += mainwindow.h \
    serialclass.h \
    posix_qextserialport.h \
    qextserialbase.h

FORMS    += mainwindow.ui

unix:DEFINES           += _TTY_POSIX_
