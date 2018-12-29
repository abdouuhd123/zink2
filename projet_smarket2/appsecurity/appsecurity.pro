#-------------------------------------------------
#
# Project created by QtCreator 2018-12-11T16:57:16
#
#-------------------------------------------------

QT       += core gui printsupport network\
   multimedia

QT        +=sql

QT  +=widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = appsecurity
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    second.cpp \
    connexion.cpp \
    accidentc.cpp \
    employeec.cpp \
    blocc.cpp \
    qcustomplot.cpp \
    smtp.cpp \
    uiemail.cpp

HEADERS += \
        mainwindow.h \
    second.h \
    connexion.h \
    accidentc.h \
    employeec.h \
    blocc.h \
    qcustomplot.h \
    smtp.h \
    uiemail.h

FORMS += \
        mainwindow.ui \
    second.ui \
    uiemail.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressource.qrc
