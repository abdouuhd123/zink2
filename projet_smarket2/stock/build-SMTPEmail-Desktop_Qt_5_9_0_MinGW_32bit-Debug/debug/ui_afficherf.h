/********************************************************************************
** Form generated from reading UI file 'afficherf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHERF_H
#define UI_AFFICHERF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_afficherf
{
public:
    QTableView *tableView;
    QPushButton *supprimerb;
    QPushButton *prec;
    QPushButton *rechercheb;
    QLineEdit *lineEdit;

    void setupUi(QDialog *afficherf)
    {
        if (afficherf->objectName().isEmpty())
            afficherf->setObjectName(QStringLiteral("afficherf"));
        afficherf->resize(1224, 720);
        afficherf->setStyleSheet(QStringLiteral("background:url(:/Liste-four)"));
        tableView = new QTableView(afficherf);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(375, 190, 761, 421));
        tableView->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        supprimerb = new QPushButton(afficherf);
        supprimerb->setObjectName(QStringLiteral("supprimerb"));
        supprimerb->setGeometry(QRect(960, 650, 201, 41));
        supprimerb->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        prec = new QPushButton(afficherf);
        prec->setObjectName(QStringLiteral("prec"));
        prec->setGeometry(QRect(344, 60, 71, 51));
        prec->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        rechercheb = new QPushButton(afficherf);
        rechercheb->setObjectName(QStringLiteral("rechercheb"));
        rechercheb->setGeometry(QRect(640, 130, 41, 31));
        rechercheb->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        lineEdit = new QLineEdit(afficherf);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(410, 130, 231, 31));
        lineEdit->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;\n"
""));

        retranslateUi(afficherf);

        QMetaObject::connectSlotsByName(afficherf);
    } // setupUi

    void retranslateUi(QDialog *afficherf)
    {
        afficherf->setWindowTitle(QApplication::translate("afficherf", "Dialog", nullptr));
        supprimerb->setText(QString());
        prec->setText(QString());
        rechercheb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class afficherf: public Ui_afficherf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHERF_H
