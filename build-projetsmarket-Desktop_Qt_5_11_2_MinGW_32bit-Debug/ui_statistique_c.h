/********************************************************************************
** Form generated from reading UI file 'statistique_c.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIQUE_C_H
#define UI_STATISTIQUE_C_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_statistique_c
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *statistique_c)
    {
        if (statistique_c->objectName().isEmpty())
            statistique_c->setObjectName(QStringLiteral("statistique_c"));
        statistique_c->resize(1200, 800);
        centralwidget = new QWidget(statistique_c);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(360, 250, 591, 411));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1010, 700, 75, 31));
        pushButton->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: none;\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1200, 751));
        label->setStyleSheet(QStringLiteral("border-image: url(:/interface/beyaaa.png);"));
        statistique_c->setCentralWidget(centralwidget);
        label->raise();
        widget->raise();
        pushButton->raise();
        menubar = new QMenuBar(statistique_c);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        statistique_c->setMenuBar(menubar);
        statusbar = new QStatusBar(statistique_c);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statistique_c->setStatusBar(statusbar);

        retranslateUi(statistique_c);

        QMetaObject::connectSlotsByName(statistique_c);
    } // setupUi

    void retranslateUi(QMainWindow *statistique_c)
    {
        statistique_c->setWindowTitle(QApplication::translate("statistique_c", "MainWindow", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statistique_c: public Ui_statistique_c {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIQUE_C_H
