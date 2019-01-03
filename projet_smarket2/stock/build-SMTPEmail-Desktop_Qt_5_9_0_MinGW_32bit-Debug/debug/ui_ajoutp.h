/********************************************************************************
** Form generated from reading UI file 'ajoutp.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTP_H
#define UI_AJOUTP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajoutP
{
public:
    QPushButton *done;
    QPushButton *Prec;
    QLineEdit *id;
    QLineEdit *nom;
    QLineEdit *quantite_s;
    QLineEdit *quantite_r;
    QLineEdit *duree;
    QLineEdit *prix;
    QLineEdit *code;

    void setupUi(QDialog *ajoutP)
    {
        if (ajoutP->objectName().isEmpty())
            ajoutP->setObjectName(QStringLiteral("ajoutP"));
        ajoutP->resize(1224, 720);
        ajoutP->setStyleSheet(QStringLiteral("background:url(:/Ajouter-Produit.png)"));
        done = new QPushButton(ajoutP);
        done->setObjectName(QStringLiteral("done"));
        done->setGeometry(QRect(1070, 550, 81, 91));
        done->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        Prec = new QPushButton(ajoutP);
        Prec->setObjectName(QStringLiteral("Prec"));
        Prec->setGeometry(QRect(350, 72, 75, 51));
        Prec->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        id = new QLineEdit(ajoutP);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(680, 139, 321, 51));
        id->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        nom = new QLineEdit(ajoutP);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(680, 229, 311, 41));
        nom->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;\n"
""));
        quantite_s = new QLineEdit(ajoutP);
        quantite_s->setObjectName(QStringLiteral("quantite_s"));
        quantite_s->setGeometry(QRect(680, 309, 321, 51));
        quantite_s->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        quantite_r = new QLineEdit(ajoutP);
        quantite_r->setObjectName(QStringLiteral("quantite_r"));
        quantite_r->setGeometry(QRect(680, 400, 321, 51));
        quantite_r->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        duree = new QLineEdit(ajoutP);
        duree->setObjectName(QStringLiteral("duree"));
        duree->setGeometry(QRect(680, 490, 321, 41));
        duree->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        prix = new QLineEdit(ajoutP);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(680, 570, 321, 41));
        prix->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        code = new QLineEdit(ajoutP);
        code->setObjectName(QStringLiteral("code"));
        code->setGeometry(QRect(670, 649, 321, 41));
        code->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));

        retranslateUi(ajoutP);

        QMetaObject::connectSlotsByName(ajoutP);
    } // setupUi

    void retranslateUi(QDialog *ajoutP)
    {
        ajoutP->setWindowTitle(QApplication::translate("ajoutP", "Dialog", nullptr));
        done->setText(QString());
        Prec->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ajoutP: public Ui_ajoutP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTP_H
