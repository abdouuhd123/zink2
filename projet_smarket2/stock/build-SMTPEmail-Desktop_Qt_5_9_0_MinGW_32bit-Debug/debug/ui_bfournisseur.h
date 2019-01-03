/********************************************************************************
** Form generated from reading UI file 'bfournisseur.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BFOURNISSEUR_H
#define UI_BFOURNISSEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bfournisseur
{
public:
    QPushButton *ajouterf;
    QPushButton *afficherf;
    QPushButton *modifierf;
    QPushButton *prec;
    QPushButton *reclamation;

    void setupUi(QDialog *bfournisseur)
    {
        if (bfournisseur->objectName().isEmpty())
            bfournisseur->setObjectName(QStringLiteral("bfournisseur"));
        bfournisseur->resize(1224, 720);
        bfournisseur->setStyleSheet(QStringLiteral("background:url(:/page1F.png)"));
        ajouterf = new QPushButton(bfournisseur);
        ajouterf->setObjectName(QStringLiteral("ajouterf"));
        ajouterf->setGeometry(QRect(600, 322, 311, 51));
        ajouterf->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        afficherf = new QPushButton(bfournisseur);
        afficherf->setObjectName(QStringLiteral("afficherf"));
        afficherf->setGeometry(QRect(590, 460, 311, 51));
        afficherf->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        modifierf = new QPushButton(bfournisseur);
        modifierf->setObjectName(QStringLiteral("modifierf"));
        modifierf->setGeometry(QRect(600, 610, 311, 51));
        modifierf->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        prec = new QPushButton(bfournisseur);
        prec->setObjectName(QStringLiteral("prec"));
        prec->setGeometry(QRect(340, 60, 71, 61));
        prec->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        reclamation = new QPushButton(bfournisseur);
        reclamation->setObjectName(QStringLiteral("reclamation"));
        reclamation->setGeometry(QRect(610, 530, 311, 51));
        reclamation->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));

        retranslateUi(bfournisseur);

        QMetaObject::connectSlotsByName(bfournisseur);
    } // setupUi

    void retranslateUi(QDialog *bfournisseur)
    {
        bfournisseur->setWindowTitle(QApplication::translate("bfournisseur", "Dialog", nullptr));
        ajouterf->setText(QString());
        afficherf->setText(QString());
        modifierf->setText(QString());
        prec->setText(QString());
        reclamation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bfournisseur: public Ui_bfournisseur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BFOURNISSEUR_H
