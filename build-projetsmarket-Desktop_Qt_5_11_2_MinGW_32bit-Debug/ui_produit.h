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
    QTableView *tableView_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_tri;
    QPushButton *pushButton_mail;
    QLabel *label_3;
    QPushButton *pushButton_retour;
    QLineEdit *lineEdit;
    QLineEdit *dateEdit;
    QPushButton *pushButton_3;

    void setupUi(QDialog *produit)
    {
        if (produit->objectName().isEmpty())
            produit->setObjectName(QStringLiteral("produit"));
        produit->resize(1200, 800);
        label = new QLabel(produit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 300, 91, 31));
        label->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        label_2 = new QLabel(produit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 350, 91, 41));
        label_2->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        tableView_2 = new QTableView(produit);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(640, 260, 491, 221));
        tableView_2->setStyleSheet(QLatin1String("background-color:rgb(179, 179, 193);\n"
""));
        pushButton = new QPushButton(produit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1020, 600, 75, 61));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/interface/yas.png);"));
        pushButton_2 = new QPushButton(produit);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(870, 610, 141, 51));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 87 15pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);\n"
"background-color:rgb(3, 38, 77);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color:rgb(179, 179, 193);\n"
"}"));
        pushButton_tri = new QPushButton(produit);
        pushButton_tri->setObjectName(QStringLiteral("pushButton_tri"));
        pushButton_tri->setGeometry(QRect(984, 100, 81, 31));
        pushButton_tri->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 87 15pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);\n"
"background-color:rgb(3, 38, 77);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color:rgb(179, 179, 193);\n"
"}"));
        pushButton_mail = new QPushButton(produit);
        pushButton_mail->setObjectName(QStringLiteral("pushButton_mail"));
        pushButton_mail->setGeometry(QRect(1080, 100, 81, 31));
        pushButton_mail->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 87 15pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);\n"
"background-color:rgb(3, 38, 77);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color:rgb(179, 179, 193);\n"
"}"));
        label_3 = new QLabel(produit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, -10, 1200, 800));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/interface/beyaaa.png);"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/gereproduit.png")));
        pushButton_retour = new QPushButton(produit);
        pushButton_retour->setObjectName(QStringLiteral("pushButton_retour"));
        pushButton_retour->setGeometry(QRect(1010, 732, 75, 41));
        pushButton_retour->setStyleSheet(QLatin1String("background:transparent;\n"
"border:transparent;"));
        lineEdit = new QLineEdit(produit);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(330, 299, 182, 31));
        lineEdit->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
"color: rgb(255, 255, 255);*/\n"
"QLineEdit { \n"
"font: 63 8pt \"Yu Gothic UI Semibold\";\n"
"background-color:rgb(179, 179, 193);\n"
"border-style: outset;\n"
"	color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"border-color: blue;\n"
"min-width: 10em;\n"
"padding: 6px;\n"
"}\n"
"QLineEdit:hover:!pressed {\n"
"background-color:rgb(213, 213, 229);\n"
"border-style: inset;\n"
"background-color:rgb(213, 213, 229);\n"
"background-color:rgb(213, 213, 229);\n"
"}\n"
"/*QLineEdit:selected {\n"
"background-color:rgb(179, 179, 193);\n"
"border-style: inset;\n"
"}*/\n"
""));
        dateEdit = new QLineEdit(produit);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(330, 361, 182, 31));
        dateEdit->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
"color: rgb(255, 255, 255);*/\n"
"QLineEdit { \n"
"font: 63 8pt \"Yu Gothic UI Semibold\";\n"
"background-color:rgb(179, 179, 193);\n"
"border-style: outset;\n"
"	color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"border-color: blue;\n"
"min-width: 10em;\n"
"padding: 6px;\n"
"}\n"
"QLineEdit:hover:!pressed {\n"
"background-color:rgb(213, 213, 229);\n"
"border-style: inset;\n"
"background-color:rgb(213, 213, 229);\n"
"background-color:rgb(213, 213, 229);\n"
"}\n"
"/*QLineEdit:selected {\n"
"background-color:rgb(179, 179, 193);\n"
"border-style: inset;\n"
"}*/\n"
""));
        pushButton_3 = new QPushButton(produit);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1110, 710, 71, 61));
        pushButton_3->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        label_3->raise();
        label->raise();
        label_2->raise();
        tableView_2->raise();
        lineEdit->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_mail->raise();
        pushButton_retour->raise();
        pushButton_tri->raise();
        dateEdit->raise();
        pushButton_3->raise();

        retranslateUi(produit);

        QMetaObject::connectSlotsByName(produit);
    } // setupUi

    void retranslateUi(QDialog *produit)
    {
        produit->setWindowTitle(QApplication::translate("produit", "Dialog", nullptr));
        label->setText(QApplication::translate("produit", "id_produit", nullptr));
        label_2->setText(QApplication::translate("produit", "date_limite", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("produit", "supprimer", nullptr));
        pushButton_tri->setText(QApplication::translate("produit", "tri", nullptr));
        pushButton_mail->setText(QApplication::translate("produit", "mail", nullptr));
        label_3->setText(QString());
        pushButton_retour->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class produit: public Ui_produit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUIT_H
