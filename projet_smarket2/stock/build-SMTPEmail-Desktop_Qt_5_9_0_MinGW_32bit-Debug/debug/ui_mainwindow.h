/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Bcommande;
    QPushButton *Brayon;
    QPushButton *Bproduit;
    QPushButton *Bfournisseur;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1224, 720);
        MainWindow->setStyleSheet(QStringLiteral("background:url(:/Menu.png)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Bcommande = new QPushButton(centralwidget);
        Bcommande->setObjectName(QStringLiteral("Bcommande"));
        Bcommande->setGeometry(QRect(10, 290, 171, 51));
        Bcommande->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        Brayon = new QPushButton(centralwidget);
        Brayon->setObjectName(QStringLiteral("Brayon"));
        Brayon->setGeometry(QRect(4, 380, 171, 41));
        Brayon->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        Bproduit = new QPushButton(centralwidget);
        Bproduit->setObjectName(QStringLiteral("Bproduit"));
        Bproduit->setGeometry(QRect(0, 440, 191, 51));
        Bproduit->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        Bfournisseur = new QPushButton(centralwidget);
        Bfournisseur->setObjectName(QStringLiteral("Bfournisseur"));
        Bfournisseur->setGeometry(QRect(10, 522, 181, 41));
        Bfournisseur->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1224, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Bcommande->setText(QString());
        Brayon->setText(QString());
        Bproduit->setText(QString());
        Bfournisseur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
