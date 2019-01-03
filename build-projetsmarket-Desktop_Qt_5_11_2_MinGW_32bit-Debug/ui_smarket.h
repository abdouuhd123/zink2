/********************************************************************************
** Form generated from reading UI file 'smarket.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARKET_H
#define UI_SMARKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_smarket
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *smarket)
    {
        if (smarket->objectName().isEmpty())
            smarket->setObjectName(QStringLiteral("smarket"));
        smarket->resize(1200, 800);
        centralWidget = new QWidget(smarket);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 480, 171, 151));
        pushButton->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 480, 171, 151));
        pushButton_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 490, 141, 131));
        pushButton_3->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1200, 800));
        label->setStyleSheet(QLatin1String("background-image: url(:/interface/beyaaa.png);\n"
"border-image: url(:/interface/MAINNNNNNNNN.png);"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(970, 480, 191, 161));
        pushButton_4->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        smarket->setCentralWidget(centralWidget);
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        menuBar = new QMenuBar(smarket);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 26));
        smarket->setMenuBar(menuBar);
        mainToolBar = new QToolBar(smarket);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        smarket->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(smarket);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        smarket->setStatusBar(statusBar);

        retranslateUi(smarket);

        QMetaObject::connectSlotsByName(smarket);
    } // setupUi

    void retranslateUi(QMainWindow *smarket)
    {
        smarket->setWindowTitle(QApplication::translate("smarket", "smarket", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class smarket: public Ui_smarket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARKET_H
