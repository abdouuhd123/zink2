/********************************************************************************
** Form generated from reading UI file 'produit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUIT_H
#define UI_PRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_produit
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_idproduit;
    QTableView *tableView_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit;
    QPushButton *pushButton_tri;
    QPushButton *pushButton_mail;
    QLabel *label_3;
    QPushButton *pushButton_retour;

    void setupUi(QDialog *produit)
    {
        if (produit->objectName().isEmpty())
            produit->setObjectName(QStringLiteral("produit"));
        produit->resize(1254, 600);
        label = new QLabel(produit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 320, 61, 16));
        label_2 = new QLabel(produit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 360, 61, 16));
        lineEdit_idproduit = new QLineEdit(produit);
        lineEdit_idproduit->setObjectName(QStringLiteral("lineEdit_idproduit"));
        lineEdit_idproduit->setEnabled(false);
        lineEdit_idproduit->setGeometry(QRect(330, 320, 113, 20));
        tableView_2 = new QTableView(produit);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(640, 260, 491, 221));
        pushButton = new QPushButton(produit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 540, 75, 23));
        pushButton->setStyleSheet(QLatin1String("background:transparent;\n"
"border:transparent;\n"
"QPushButton{\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        pushButton_2 = new QPushButton(produit);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 540, 75, 23));
        pushButton_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:transparent;\n"
"QPushButton{\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        dateEdit = new QDateEdit(produit);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(330, 360, 110, 22));
        pushButton_tri = new QPushButton(produit);
        pushButton_tri->setObjectName(QStringLiteral("pushButton_tri"));
        pushButton_tri->setGeometry(QRect(990, 100, 75, 23));
        pushButton_tri->setStyleSheet(QLatin1String("QPushButton{\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        pushButton_mail = new QPushButton(produit);
        pushButton_mail->setObjectName(QStringLiteral("pushButton_mail"));
        pushButton_mail->setGeometry(QRect(1080, 100, 75, 23));
        pushButton_mail->setStyleSheet(QLatin1String("QPushButton{\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        label_3 = new QLabel(produit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 10, 1261, 581));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/gereproduit.png")));
        pushButton_retour = new QPushButton(produit);
        pushButton_retour->setObjectName(QStringLiteral("pushButton_retour"));
        pushButton_retour->setGeometry(QRect(1170, 560, 75, 23));
        pushButton_retour->setStyleSheet(QLatin1String("background:transparent;\n"
"border:transparent;"));
        label_3->raise();
        label->raise();
        label_2->raise();
        lineEdit_idproduit->raise();
        tableView_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        dateEdit->raise();
        pushButton_tri->raise();
        pushButton_mail->raise();
        pushButton_retour->raise();

        retranslateUi(produit);

        QMetaObject::connectSlotsByName(produit);
    } // setupUi

    void retranslateUi(QDialog *produit)
    {
        produit->setWindowTitle(QApplication::translate("produit", "Dialog", nullptr));
        label->setText(QApplication::translate("produit", "id_produit", nullptr));
        label_2->setText(QApplication::translate("produit", "date_limite", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_tri->setText(QApplication::translate("produit", "tri", nullptr));
        pushButton_mail->setText(QApplication::translate("produit", "mail", nullptr));
        label_3->setText(QString());
        pushButton_retour->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class produit: public Ui_produit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUIT_H
