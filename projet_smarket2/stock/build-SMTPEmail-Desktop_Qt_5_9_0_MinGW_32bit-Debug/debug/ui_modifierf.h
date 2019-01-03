/********************************************************************************
** Form generated from reading UI file 'modifierf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIERF_H
#define UI_MODIFIERF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modifierf
{
public:
    QLineEdit *id;
    QLineEdit *nom;
    QLineEdit *telephone;
    QLineEdit *adresse;
    QPushButton *done;
    QPushButton *prec;

    void setupUi(QDialog *modifierf)
    {
        if (modifierf->objectName().isEmpty())
            modifierf->setObjectName(QStringLiteral("modifierf"));
        modifierf->resize(1224, 720);
        modifierf->setStyleSheet(QStringLiteral("background:url(:/Modifier.png)"));
        id = new QLineEdit(modifierf);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(640, 180, 291, 51));
        id->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        nom = new QLineEdit(modifierf);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(640, 290, 291, 51));
        nom->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        telephone = new QLineEdit(modifierf);
        telephone->setObjectName(QStringLiteral("telephone"));
        telephone->setGeometry(QRect(640, 410, 291, 51));
        telephone->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        adresse = new QLineEdit(modifierf);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(640, 550, 291, 51));
        adresse->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        done = new QPushButton(modifierf);
        done->setObjectName(QStringLiteral("done"));
        done->setGeometry(QRect(1064, 570, 101, 81));
        done->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        prec = new QPushButton(modifierf);
        prec->setObjectName(QStringLiteral("prec"));
        prec->setGeometry(QRect(350, 60, 71, 61));
        prec->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));

        retranslateUi(modifierf);

        QMetaObject::connectSlotsByName(modifierf);
    } // setupUi

    void retranslateUi(QDialog *modifierf)
    {
        modifierf->setWindowTitle(QApplication::translate("modifierf", "Dialog", nullptr));
        done->setText(QString());
        prec->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class modifierf: public Ui_modifierf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIERF_H
