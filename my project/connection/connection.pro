#-------------------------------------------------
#
# Project created by QtCreator 2018-11-01T13:22:00
#
#-------------------------------------------------

QT       += core gui printsupport network
QT  += sql
QT  +=widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = connection
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    produit.cpp \
    chariot.cpp \
    classe_chariot.cpp \
    classe_produit.cpp \
    qcustomplot.cpp \
    statistique_c.cpp \
    smtp.cpp \
    uiemail.cpp

HEADERS += \
        mainwindow.h \
    connection.h \
    produit.h \
    chariot.h \
    classe_chariot.h \
    classe_produit.h \
    qcustomplot.h \
    statistique_c.h \
    smtp.h \
    uiemail.h

FORMS += \
        mainwindow.ui \
    produit.ui \
    chariot.ui \
    statistique_c.ui \
    uiemail.ui

RESOURCES += \
    ressources.qrc
