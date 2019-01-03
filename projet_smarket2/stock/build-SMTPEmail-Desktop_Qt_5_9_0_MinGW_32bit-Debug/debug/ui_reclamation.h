/********************************************************************************
** Form generated from reading UI file 'reclamation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECLAMATION_H
#define UI_RECLAMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_reclamation
{
public:
    QLineEdit *objet;
    QPushButton *envoyer;
    QLineEdit *receiver;
    QLineEdit *contenu;
    QPushButton *prec;

    void setupUi(QDialog *reclamation)
    {
        if (reclamation->objectName().isEmpty())
            reclamation->setObjectName(QStringLiteral("reclamation"));
        reclamation->resize(1224, 720);
        reclamation->setStyleSheet(QStringLiteral("background:url(:/email.png)"));
        objet = new QLineEdit(reclamation);
        objet->setObjectName(QStringLiteral("objet"));
        objet->setGeometry(QRect(650, 169, 301, 41));
        objet->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        envoyer = new QPushButton(reclamation);
        envoyer->setObjectName(QStringLiteral("envoyer"));
        envoyer->setGeometry(QRect(624, 650, 191, 41));
        envoyer->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        receiver = new QLineEdit(reclamation);
        receiver->setObjectName(QStringLiteral("receiver"));
        receiver->setGeometry(QRect(650, 280, 301, 41));
        receiver->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        contenu = new QLineEdit(reclamation);
        contenu->setObjectName(QStringLiteral("contenu"));
        contenu->setGeometry(QRect(650, 380, 431, 201));
        contenu->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        prec = new QPushButton(reclamation);
        prec->setObjectName(QStringLiteral("prec"));
        prec->setGeometry(QRect(350, 60, 71, 61));
        prec->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));

        retranslateUi(reclamation);

        QMetaObject::connectSlotsByName(reclamation);
    } // setupUi

    void retranslateUi(QDialog *reclamation)
    {
        reclamation->setWindowTitle(QApplication::translate("reclamation", "Dialog", nullptr));
        envoyer->setText(QString());
        prec->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reclamation: public Ui_reclamation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECLAMATION_H
