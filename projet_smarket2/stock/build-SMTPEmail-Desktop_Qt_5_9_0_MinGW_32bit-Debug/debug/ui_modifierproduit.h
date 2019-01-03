/********************************************************************************
** Form generated from reading UI file 'modifierproduit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIERPRODUIT_H
#define UI_MODIFIERPRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modifierproduit
{
public:
    QLineEdit *id;
    QLineEdit *nom;
    QLineEdit *quantites;
    QLineEdit *quantiter;
    QLineEdit *duree;
    QLineEdit *prix;
    QLineEdit *code;
    QPushButton *done;

    void setupUi(QDialog *modifierproduit)
    {
        if (modifierproduit->objectName().isEmpty())
            modifierproduit->setObjectName(QStringLiteral("modifierproduit"));
        modifierproduit->resize(1224, 720);
        modifierproduit->setStyleSheet(QStringLiteral("background:url(:/Modifier-produit.png)"));
        id = new QLineEdit(modifierproduit);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(672, 150, 331, 31));
        id->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        nom = new QLineEdit(modifierproduit);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(670, 240, 331, 31));
        nom->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        quantites = new QLineEdit(modifierproduit);
        quantites->setObjectName(QStringLiteral("quantites"));
        quantites->setGeometry(QRect(670, 320, 331, 31));
        quantites->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        quantiter = new QLineEdit(modifierproduit);
        quantiter->setObjectName(QStringLiteral("quantiter"));
        quantiter->setGeometry(QRect(670, 410, 331, 31));
        quantiter->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        duree = new QLineEdit(modifierproduit);
        duree->setObjectName(QStringLiteral("duree"));
        duree->setGeometry(QRect(670, 490, 331, 31));
        duree->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        prix = new QLineEdit(modifierproduit);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(670, 580, 331, 31));
        prix->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        code = new QLineEdit(modifierproduit);
        code->setObjectName(QStringLiteral("code"));
        code->setGeometry(QRect(670, 660, 331, 31));
        code->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        done = new QPushButton(modifierproduit);
        done->setObjectName(QStringLiteral("done"));
        done->setGeometry(QRect(1070, 550, 91, 81));
        done->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;\n"
""));

        retranslateUi(modifierproduit);

        QMetaObject::connectSlotsByName(modifierproduit);
    } // setupUi

    void retranslateUi(QDialog *modifierproduit)
    {
        modifierproduit->setWindowTitle(QApplication::translate("modifierproduit", "Dialog", nullptr));
        done->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class modifierproduit: public Ui_modifierproduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIERPRODUIT_H
