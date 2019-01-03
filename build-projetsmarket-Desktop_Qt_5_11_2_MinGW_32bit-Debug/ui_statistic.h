/********************************************************************************
** Form generated from reading UI file 'statistic.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIC_H
#define UI_STATISTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_statistic
{
public:
    QCustomPlot *widget;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *statistic)
    {
        if (statistic->objectName().isEmpty())
            statistic->setObjectName(QStringLiteral("statistic"));
        statistic->resize(1200, 800);
        widget = new QCustomPlot(statistic);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(310, 130, 500, 500));
        pushButton = new QPushButton(statistic);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1010, 760, 93, 28));
        label = new QLabel(statistic);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(750, 230, 55, 16));

        retranslateUi(statistic);

        QMetaObject::connectSlotsByName(statistic);
    } // setupUi

    void retranslateUi(QDialog *statistic)
    {
        statistic->setWindowTitle(QApplication::translate("statistic", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("statistic", "return", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statistic: public Ui_statistic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIC_H
