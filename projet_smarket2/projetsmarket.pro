#-------------------------------------------------
#
# Project created by QtCreator 2018-12-25T16:21:38
#
#-------------------------------------------------

QT       += core gui printsupport network
QT       += sql
QT       += core
QT       += widgets
QT       += gui
QT       += core gui  serialport

QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projetsmarket
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
        smarket.cpp \
    appsecurity/accidentc.cpp \
    appsecurity/blocc.cpp \
    appsecurity/connexion.cpp \
    appsecurity/employeec.cpp \
    appsecurity/main.cpp \
    appsecurity/mainwindow.cpp \
    appsecurity/qcustomplot.cpp \
    appsecurity/second.cpp \
    appsecurity/statistic.cpp \
    appsecurity/uiemail.cpp \
    parkingintegration/agent.cpp \
    parkingintegration/arduino.cpp \
    parkingintegration/parking.cpp \
    parkingintegration/Place.cpp \
    parkingintegration/zone.cpp \
    parkingintegration/connexionp.cpp \
    connection/chariot.cpp \
    connection/classe_chariot.cpp \
    connection/classe_produit.cpp \
    connection/connection.cpp \
    connection/menu.cpp \
    connection/produit.cpp \
    connection/statistique_c.cpp \
    connection/mainwindowc.cpp \
    smtp.cpp \
    connection/uiemail1.cpp

HEADERS += \
        smarket.h \
    appsecurity/accidentc.h \
    appsecurity/blocc.h \
    appsecurity/connexion.h \
    appsecurity/employeec.h \
    appsecurity/mainwindow.h \
    appsecurity/qcustomplot.h \
    appsecurity/second.h \
    appsecurity/smtp.h \
    appsecurity/statistic.h \
    appsecurity/uiemail.h \
    parkingintegration/agent.h \
    parkingintegration/arduino.h \
    parkingintegration/parking.h \
    parkingintegration/Place.h \
    parkingintegration/zone.h \
    parkingintegration/connexionp.h \
    connection/chariot.h \
    connection/classe_chariot.h \
    connection/classe_produit.h \
    connection/connection.h \
    connection/menu.h \
    connection/produit.h \
    connection/smtp.h \
    connection/statistique_c.h \
    connection/mainwindowc.h \
    connection/uiemail1.h

FORMS += \
        smarket.ui \
    appsecurity/mainwindow.ui \
    appsecurity/second.ui \
    appsecurity/statistic.ui \
    appsecurity/uiemail.ui \
    parkingintegration/parking.ui \
    connection/chariot.ui \
    connection/chariot_copy.ui \
    connection/menu.ui \
    connection/produit.ui \
    connection/statistique_c.ui \
    connection/mainwindowc.ui \
    connection/uiemail1.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    appsecurity/appsecurity.pro \
    parkingintegration/parkingintegration.pro \
    connection/connection.pro

RESOURCES += \
    appsecurity/ressource.qrc \
    connection/image.qrc

    connection/image.qrc


DISTFILES += \
    appsecurity/appsecurity.pro.user \
    connection/normalsound.mp3 \
    connection/backgroundCarrefour.png \
    connection/gereproduit.png \
    connection/gererchariot.png \
    connection/Objet-dynamique-vectoriel.png \
  connection/normalsound.mp3 \
    connection/backgroundCarrefour.png \
    choisiradminclient.png








