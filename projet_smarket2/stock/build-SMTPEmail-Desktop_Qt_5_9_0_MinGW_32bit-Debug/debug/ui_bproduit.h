/********************************************************************************
** Form generated from reading UI file 'bproduit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BPRODUIT_H
#define UI_BPRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Bproduit
{
public:
    QPushButton *Ajouter;
    QPushButton *Afficher;
    QPushButton *Modifier;

    void setupUi(QDialog *Bproduit)
    {
        if (Bproduit->objectName().isEmpty())
            Bproduit->setObjectName(QStringLiteral("Bproduit"));
        Bproduit->setEnabled(true);
        Bproduit->resize(1224, 720);
        Bproduit->setStyleSheet(QStringLiteral("background:url(:/prod.png)"));
        Ajouter = new QPushButton(Bproduit);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setGeometry(QRect(600, 320, 311, 51));
        Ajouter->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        Afficher = new QPushButton(Bproduit);
        Afficher->setObjectName(QStringLiteral("Afficher"));
        Afficher->setGeometry(QRect(600, 450, 311, 51));
        Afficher->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        Modifier = new QPushButton(Bproduit);
        Modifier->setObjectName(QStringLiteral("Modifier"));
        Modifier->setGeometry(QRect(600, 610, 311, 51));
        Modifier->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));

        retranslateUi(Bproduit);

        QMetaObject::connectSlotsByName(Bproduit);
    } // setupUi

    void retranslateUi(QDialog *Bproduit)
    {
        Bproduit->setWindowTitle(QApplication::translate("Bproduit", "Dialog", nullptr));
        Ajouter->setText(QString());
        Afficher->setText(QString());
        Modifier->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Bproduit: public Ui_Bproduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BPRODUIT_H
