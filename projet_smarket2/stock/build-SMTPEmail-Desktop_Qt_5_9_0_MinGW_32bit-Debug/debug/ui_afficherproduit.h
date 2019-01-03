/********************************************************************************
** Form generated from reading UI file 'afficherproduit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHERPRODUIT_H
#define UI_AFFICHERPRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_afficherproduit
{
public:
    QTableView *tableView;
    QPushButton *rechercher_b;
    QLineEdit *lineEdit_recherche;
    QPushButton *supprimer_b;

    void setupUi(QDialog *afficherproduit)
    {
        if (afficherproduit->objectName().isEmpty())
            afficherproduit->setObjectName(QStringLiteral("afficherproduit"));
        afficherproduit->resize(1224, 720);
        afficherproduit->setStyleSheet(QStringLiteral("background:url(:/Afficher-prod.png)"));
        tableView = new QTableView(afficherproduit);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(345, 191, 871, 421));
        tableView->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;\n"
""));
        rechercher_b = new QPushButton(afficherproduit);
        rechercher_b->setObjectName(QStringLiteral("rechercher_b"));
        rechercher_b->setGeometry(QRect(640, 132, 41, 31));
        rechercher_b->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;\n"
""));
        lineEdit_recherche = new QLineEdit(afficherproduit);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(410, 130, 231, 31));
        lineEdit_recherche->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;\n"
""));
        supprimer_b = new QPushButton(afficherproduit);
        supprimer_b->setObjectName(QStringLiteral("supprimer_b"));
        supprimer_b->setGeometry(QRect(960, 650, 201, 41));
        supprimer_b->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;\n"
""));

        retranslateUi(afficherproduit);

        QMetaObject::connectSlotsByName(afficherproduit);
    } // setupUi

    void retranslateUi(QDialog *afficherproduit)
    {
        afficherproduit->setWindowTitle(QApplication::translate("afficherproduit", "Dialog", nullptr));
        rechercher_b->setText(QString());
        supprimer_b->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class afficherproduit: public Ui_afficherproduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHERPRODUIT_H
