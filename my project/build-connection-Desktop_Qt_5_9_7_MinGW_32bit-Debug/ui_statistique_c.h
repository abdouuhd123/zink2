/********************************************************************************
** Form generated from reading UI file 'statistique_c.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIQUE_C_H
#define UI_STATISTIQUE_C_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *statistique_c)
    {
        if (statistique_c->objectName().isEmpty())
            statistique_c->setObjectName(QStringLiteral("statistique_c"));
        statistique_c->resize(800, 600);
        centralwidget = new QWidget(statistique_c);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(150, 70, 591, 411));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 75, 23));
        statistique_c->setCentralWidget(centralwidget);
        menubar = new QMenuBar(statistique_c);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        statistique_c->setMenuBar(menubar);
        statusbar = new QStatusBar(statistique_c);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statistique_c->setStatusBar(statusbar);

        retranslateUi(statistique_c);

        QMetaObject::connectSlotsByName(statistique_c);
    } // setupUi

    void retranslateUi(QMainWindow *statistique_c)
    {
        statistique_c->setWindowTitle(QApplication::translate("statistique_c", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("statistique_c", "retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class statistique_c: public Ui_statistique_c {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIQUE_C_H
