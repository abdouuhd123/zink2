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
    connection/uiemail1.cpp \
    stock/commande.cpp \
    stock/fournisseur.cpp \
    stock/rayon.cpp \
    stock/Stock.cpp \
    stock/produit1.cpp \
    smtp.cpp

HEADERS += \
        smarket.h \
    appsecurity/accidentc.h \
    appsecurity/blocc.h \
    appsecurity/connexion.h \
    appsecurity/employeec.h \
    appsecurity/mainwindow.h \
    appsecurity/qcustomplot.h \
    appsecurity/second.h \
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
    connection/statistique_c.h \
    connection/mainwindowc.h \
    connection/uiemail1.h \
    stock/commande.h \
    stock/fournisseur.h \
    stock/rayon.h \
    stock/Stock.h \
    stock/produit1.h \
    smtp.h

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
    connection/uiemail1.ui \
    stock/Stock.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    appsecurity/appsecurity.pro \
    parkingintegration/parkingintegration.pro \
    connection/connection.pro \
    stock/Stock.pro

RESOURCES += \
    appsecurity/ressource.qrc




DISTFILES += \
    F:/Adobe/runsc.exe \
    appsecurity/appsecurity.pro.user \
    stock/Stock.pro.user \
    stock/stock.pro.user.d567f1b \
    stock/rayon.png \
    source/affic-fourn.png \
    source/affich-comm.png \
    source/affich-prod.png \
    source/affich-rayo.png \
    source/ajou-modf-four.png \
    source/ajout-mod-com.png \
    source/ajout-mod-produit.png \
    source/ajout-mod-rayon.png \
    source/bg.png \
    source/commande.png \
    source/fournisseur.png \
    source/imprimer.png \
    source/kiko.png \
    source/mail-four.png \
    source/produit.png \
    source/rayon.png \
    source/the-real-interface.png \
    affic-fourn.png \
    affich-comm.png \
    affich-prod.png \
    affich-rayo.png \
    ajou-modf-four.png \
    ajout-mod-com.png \
    ajout-mod-produit.png \
    ajout-mod-rayon.png \
    bg.png \
    commande.png \
    fournisseur.png \
    imprimer.png \
    kiko.png \
    mail-four.png \
    produit.png \
    rayon.png \
    the-real-interface.png

    choisiradminclient.png








