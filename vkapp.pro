#-------------------------------------------------
#
# Project created by QtCreator 2015-10-18T22:28:45
#
#-------------------------------------------------

QT       += core gui  webkitwidgets network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = vkapp
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    json.cpp

HEADERS  += widget.h \
    json.h

FORMS    += widget.ui
