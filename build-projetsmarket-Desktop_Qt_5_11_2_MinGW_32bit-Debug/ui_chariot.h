/********************************************************************************
** Form generated from reading UI file 'chariot.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARIOT_H
#define UI_CHARIOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_chariot
{
public:
    QLineEdit *lineEdit_reference;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *ng;
    QRadioButton *radioButton_active;
    QRadioButton *radioButton_nonactive;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_heure;
    QLineEdit *lineEdit_etat;
    QPushButton *pushButton_tri;
    QPushButton *pushButton_statistique;
    QLabel *label_5;
    QLineEdit *lineEdit_recherche;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_effectuer;
    QLabel *label_6;
    QPushButton *pushButton_retour;
    QLineEdit *beya;
    QPushButton *pushButton_2;
    QPushButton *pushButton_37;

    void setupUi(QDialog *chariot)
    {
        if (chariot->objectName().isEmpty())
            chariot->setObjectName(QStringLiteral("chariot"));
        chariot->resize(1200, 800);
        lineEdit_reference = new QLineEdit(chariot);
        lineEdit_reference->setObjectName(QStringLiteral("lineEdit_reference"));
        lineEdit_reference->setGeometry(QRect(360, 200, 201, 41));
        lineEdit_reference->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        label = new QLabel(chariot);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 130, 191, 31));
        label->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        label_2 = new QLabel(chariot);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 190, 161, 41));
        label_2->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        tableView = new QTableView(chariot);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(550, 480, 621, 291));
        tableView->setStyleSheet(QStringLiteral("background-color:rgb(179, 179, 193);"));
        pushButton = new QPushButton(chariot);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1090, 380, 75, 61));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/interface/yas.png);"));
        ng = new QPushButton(chariot);
        ng->setObjectName(QStringLiteral("ng"));
        ng->setGeometry(QRect(370, 700, 75, 71));
        ng->setStyleSheet(QStringLiteral("border-image: url(:/interface/close.png);"));
        radioButton_active = new QRadioButton(chariot);
        radioButton_active->setObjectName(QStringLiteral("radioButton_active"));
        radioButton_active->setGeometry(QRect(360, 260, 82, 17));
        radioButton_active->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        radioButton_nonactive = new QRadioButton(chariot);
        radioButton_nonactive->setObjectName(QStringLiteral("radioButton_nonactive"));
        radioButton_nonactive->setGeometry(QRect(470, 260, 121, 17));
        radioButton_nonactive->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        label_3 = new QLabel(chariot);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 260, 47, 13));
        label_3->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        label_4 = new QLabel(chariot);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 310, 61, 16));
        label_4->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        lineEdit_heure = new QLineEdit(chariot);
        lineEdit_heure->setObjectName(QStringLiteral("lineEdit_heure"));
        lineEdit_heure->setEnabled(false);
        lineEdit_heure->setGeometry(QRect(360, 310, 201, 41));
        lineEdit_heure->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        lineEdit_etat = new QLineEdit(chariot);
        lineEdit_etat->setObjectName(QStringLiteral("lineEdit_etat"));
        lineEdit_etat->setEnabled(false);
        lineEdit_etat->setGeometry(QRect(600, 250, 191, 31));
        lineEdit_etat->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        pushButton_tri = new QPushButton(chariot);
        pushButton_tri->setObjectName(QStringLiteral("pushButton_tri"));
        pushButton_tri->setGeometry(QRect(920, 40, 41, 31));
        pushButton_tri->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 87 15pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);\n"
"background-color:rgb(3, 38, 77);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color:rgb(179, 179, 193);\n"
"}"));
        pushButton_statistique = new QPushButton(chariot);
        pushButton_statistique->setObjectName(QStringLiteral("pushButton_statistique"));
        pushButton_statistique->setGeometry(QRect(980, 40, 151, 31));
        pushButton_statistique->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 87 15pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);\n"
"background-color:rgb(3, 38, 77);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color:rgb(179, 179, 193);\n"
"}"));
        label_5 = new QLabel(chariot);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(560, 20, 141, 61));
        label_5->setStyleSheet(QLatin1String("font: 87 15pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        lineEdit_recherche = new QLineEdit(chariot);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(710, 40, 182, 31));
        lineEdit_recherche->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        pushButton_modifier = new QPushButton(chariot);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(990, 380, 75, 61));
        pushButton_modifier->setStyleSheet(QLatin1String("border-image: url(:/interface/modifie button.png);\n"
""));
        pushButton_effectuer = new QPushButton(chariot);
        pushButton_effectuer->setObjectName(QStringLiteral("pushButton_effectuer"));
        pushButton_effectuer->setGeometry(QRect(610, 320, 121, 23));
        pushButton_effectuer->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 87 15pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);\n"
"background-color:rgb(3, 38, 77);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color:rgb(179, 179, 193);\n"
"}"));
        label_6 = new QLabel(chariot);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, -10, 1200, 800));
        label_6->setStyleSheet(QLatin1String("border-image: url(:/interface/fond 1.png);\n"
"background-image: url(:/interface/advancedre.png);"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/gererchariot.png")));
        pushButton_retour = new QPushButton(chariot);
        pushButton_retour->setObjectName(QStringLiteral("pushButton_retour"));
        pushButton_retour->setGeometry(QRect(220, 710, 75, 61));
        pushButton_retour->setStyleSheet(QStringLiteral("border-image: url(:/interface/menu.png);"));
        beya = new QLineEdit(chariot);
        beya->setObjectName(QStringLiteral("beya"));
        beya->setGeometry(QRect(360, 130, 201, 41));
        beya->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        pushButton_2 = new QPushButton(chariot);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(840, 400, 121, 31));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 87 15pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);\n"
"background-color:rgb(3, 38, 77);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color:rgb(179, 179, 193);\n"
"}"));
        pushButton_37 = new QPushButton(chariot);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        pushButton_37->setGeometry(QRect(10, 720, 181, 61));
        pushButton_37->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
"color: rgb(255, 255, 255);*/\n"
"QPushButton { \n"
"font: 87 8pt \"Lato Black\";\n"
"background-color: transparent;\n"
"border-style: outset;\n"
"	color: rgb(213, 213, 229);\n"
"border-radius: 10px;\n"
"border-color: blue;\n"
"min-width: 10em;\n"
"padding: 6px;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"background-color: rgb(3, 38, 77);\n"
"border-style: inset;\n"
"}"));
        label_6->raise();
        lineEdit_reference->raise();
        label->raise();
        label_2->raise();
        tableView->raise();
        pushButton->raise();
        ng->raise();
        radioButton_active->raise();
        radioButton_nonactive->raise();
        label_3->raise();
        label_4->raise();
        lineEdit_heure->raise();
        lineEdit_etat->raise();
        pushButton_tri->raise();
        pushButton_statistique->raise();
        label_5->raise();
        lineEdit_recherche->raise();
        pushButton_modifier->raise();
        pushButton_effectuer->raise();
        pushButton_retour->raise();
        beya->raise();
        pushButton_2->raise();
        pushButton_37->raise();

        retranslateUi(chariot);

        QMetaObject::connectSlotsByName(chariot);
    } // setupUi

    void retranslateUi(QDialog *chariot)
    {
        chariot->setWindowTitle(QApplication::translate("chariot", "Dialog", nullptr));
        label->setText(QApplication::translate("chariot", "num_chariot", nullptr));
        label_2->setText(QApplication::translate("chariot", "reference", nullptr));
        pushButton->setText(QString());
        ng->setText(QString());
        radioButton_active->setText(QApplication::translate("chariot", "Active", nullptr));
        radioButton_nonactive->setText(QApplication::translate("chariot", "Non active", nullptr));
        label_3->setText(QApplication::translate("chariot", "Etat", nullptr));
        label_4->setText(QApplication::translate("chariot", "Heure", nullptr));
        pushButton_tri->setText(QApplication::translate("chariot", "tri", nullptr));
        pushButton_statistique->setText(QApplication::translate("chariot", "Statistique", nullptr));
        label_5->setText(QApplication::translate("chariot", "Rechercher", nullptr));
        pushButton_modifier->setText(QString());
        pushButton_effectuer->setText(QApplication::translate("chariot", "effectuer", nullptr));
        label_6->setText(QString());
        pushButton_retour->setText(QString());
        pushButton_2->setText(QApplication::translate("chariot", "supprimer", nullptr));
        pushButton_37->setText(QApplication::translate("chariot", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chariot: public Ui_chariot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARIOT_H
