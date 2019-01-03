/********************************************************************************
** Form generated from reading UI file 'ajoutf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTF_H
#define UI_AJOUTF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajoutf
{
public:
    QLineEdit *id;
    QLineEdit *nom;
    QLineEdit *telephone;
    QLineEdit *adresse;
    QPushButton *done;
    QPushButton *pred;

    void setupUi(QDialog *ajoutf)
    {
        if (ajoutf->objectName().isEmpty())
            ajoutf->setObjectName(QStringLiteral("ajoutf"));
        ajoutf->resize(1224, 720);
        ajoutf->setStyleSheet(QStringLiteral("background:url(:/Ajouter-four.png)"));
        id = new QLineEdit(ajoutf);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(630, 179, 301, 41));
        id->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        nom = new QLineEdit(ajoutf);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(630, 290, 301, 41));
        nom->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        telephone = new QLineEdit(ajoutf);
        telephone->setObjectName(QStringLiteral("telephone"));
        telephone->setGeometry(QRect(640, 420, 301, 41));
        telephone->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        adresse = new QLineEdit(ajoutf);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(630, 550, 301, 41));
        adresse->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        done = new QPushButton(ajoutf);
        done->setObjectName(QStringLiteral("done"));
        done->setGeometry(QRect(1074, 572, 91, 71));
        done->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        pred = new QPushButton(ajoutf);
        pred->setObjectName(QStringLiteral("pred"));
        pred->setGeometry(QRect(340, 60, 91, 71));
        pred->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));

        retranslateUi(ajoutf);

        QMetaObject::connectSlotsByName(ajoutf);
    } // setupUi

    void retranslateUi(QDialog *ajoutf)
    {
        ajoutf->setWindowTitle(QApplication::translate("ajoutf", "Dialog", nullptr));
        done->setText(QString());
        pred->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ajoutf: public Ui_ajoutf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTF_H
