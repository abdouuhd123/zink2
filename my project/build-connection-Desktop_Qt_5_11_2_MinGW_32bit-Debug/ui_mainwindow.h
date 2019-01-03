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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *LE_username;
    QLineEdit *LE_password;
    QLabel *l_titre;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1254, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 290, 75, 23));
        pushButton->setStyleSheet(QLatin1String("backgroung:transparent;\n"
"border:transparent;\n"
"QPushButton{\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        LE_username = new QLineEdit(centralWidget);
        LE_username->setObjectName(QStringLiteral("LE_username"));
        LE_username->setGeometry(QRect(550, 200, 113, 20));
        LE_password = new QLineEdit(centralWidget);
        LE_password->setObjectName(QStringLiteral("LE_password"));
        LE_password->setGeometry(QRect(550, 240, 113, 20));
        LE_password->setEchoMode(QLineEdit::Password);
        l_titre = new QLabel(centralWidget);
        l_titre->setObjectName(QStringLiteral("l_titre"));
        l_titre->setGeometry(QRect(110, 30, 101, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 0, 1331, 551));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Objet-dynamique-vectoriel.png")));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        pushButton->raise();
        LE_username->raise();
        LE_password->raise();
        l_titre->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1254, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QString());
        l_titre->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
