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
    QLineEdit *lineEdit_numchariot;
    QLineEdit *lineEdit_reference;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
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

    void setupUi(QDialog *chariot)
    {
        if (chariot->objectName().isEmpty())
            chariot->setObjectName(QStringLiteral("chariot"));
        chariot->resize(1254, 600);
        lineEdit_numchariot = new QLineEdit(chariot);
        lineEdit_numchariot->setObjectName(QStringLiteral("lineEdit_numchariot"));
        lineEdit_numchariot->setEnabled(false);
        lineEdit_numchariot->setGeometry(QRect(290, 280, 113, 20));
        lineEdit_numchariot->setStyleSheet(QStringLiteral(""));
        lineEdit_reference = new QLineEdit(chariot);
        lineEdit_reference->setObjectName(QStringLiteral("lineEdit_reference"));
        lineEdit_reference->setGeometry(QRect(290, 310, 113, 20));
        label = new QLabel(chariot);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 280, 61, 16));
        label_2 = new QLabel(chariot);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 310, 47, 13));
        tableView = new QTableView(chariot);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(650, 260, 501, 231));
        pushButton = new QPushButton(chariot);
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
        pushButton_2 = new QPushButton(chariot);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 550, 75, 23));
        pushButton_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border:transparent;\n"
"QPushButton{\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        radioButton_active = new QRadioButton(chariot);
        radioButton_active->setObjectName(QStringLiteral("radioButton_active"));
        radioButton_active->setGeometry(QRect(290, 340, 82, 17));
        radioButton_nonactive = new QRadioButton(chariot);
        radioButton_nonactive->setObjectName(QStringLiteral("radioButton_nonactive"));
        radioButton_nonactive->setGeometry(QRect(380, 340, 82, 17));
        label_3 = new QLabel(chariot);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 340, 47, 13));
        label_4 = new QLabel(chariot);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 400, 47, 13));
        lineEdit_heure = new QLineEdit(chariot);
        lineEdit_heure->setObjectName(QStringLiteral("lineEdit_heure"));
        lineEdit_heure->setEnabled(false);
        lineEdit_heure->setGeometry(QRect(290, 390, 111, 20));
        lineEdit_etat = new QLineEdit(chariot);
        lineEdit_etat->setObjectName(QStringLiteral("lineEdit_etat"));
        lineEdit_etat->setEnabled(false);
        lineEdit_etat->setGeometry(QRect(290, 360, 113, 20));
        pushButton_tri = new QPushButton(chariot);
        pushButton_tri->setObjectName(QStringLiteral("pushButton_tri"));
        pushButton_tri->setGeometry(QRect(1030, 80, 41, 23));
        pushButton_tri->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 24pt \"DEAR Daddy PERSONAL USE\";\n"
"	font: 18pt \"DEAR Daddy PERSONAL USE\";\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        pushButton_statistique = new QPushButton(chariot);
        pushButton_statistique->setObjectName(QStringLiteral("pushButton_statistique"));
        pushButton_statistique->setGeometry(QRect(1090, 80, 151, 23));
        pushButton_statistique->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"	font: 20pt \"DEAR Daddy PERSONAL USE\";\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        label_5 = new QLabel(chariot);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(800, 80, 101, 20));
        label_5->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"	font: 24pt \"DEAR Daddy PERSONAL USE\";\n"
"	font: 18pt \"DEAR Daddy PERSONAL USE\";\n"
"	font: 22pt \"DEAR Daddy PERSONAL USE\";\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        lineEdit_recherche = new QLineEdit(chariot);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(880, 80, 113, 20));
        pushButton_modifier = new QPushButton(chariot);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(710, 540, 75, 23));
        pushButton_modifier->setStyleSheet(QLatin1String("background:transparent;\n"
"border:transparent;\n"
"QPushButton{\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        pushButton_effectuer = new QPushButton(chariot);
        pushButton_effectuer->setObjectName(QStringLiteral("pushButton_effectuer"));
        pushButton_effectuer->setGeometry(QRect(290, 430, 121, 23));
        pushButton_effectuer->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 18pt \"DEAR Daddy PERSONAL USE\";\n"
"background:rgba(255,255,255,0);\n"
"border-radius:8px;\n"
"}\n"
"QPushButton::hover{\n"
"background:rgba(0,0,0,85);\n"
"}"));
        label_6 = new QLabel(chariot);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 10, 1261, 591));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/gererchariot.png")));
        pushButton_retour = new QPushButton(chariot);
        pushButton_retour->setObjectName(QStringLiteral("pushButton_retour"));
        pushButton_retour->setGeometry(QRect(1170, 570, 75, 23));
        pushButton_retour->setStyleSheet(QLatin1String("background:transparent;\n"
"border:transparent;"));
        label_6->raise();
        lineEdit_numchariot->raise();
        lineEdit_reference->raise();
        label->raise();
        label_2->raise();
        tableView->raise();
        pushButton->raise();
        pushButton_2->raise();
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

        retranslateUi(chariot);

        QMetaObject::connectSlotsByName(chariot);
    } // setupUi

    void retranslateUi(QDialog *chariot)
    {
        chariot->setWindowTitle(QApplication::translate("chariot", "Dialog", nullptr));
        label->setText(QApplication::translate("chariot", "num_chariot", nullptr));
        label_2->setText(QApplication::translate("chariot", "reference", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
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
    } // retranslateUi

};

namespace Ui {
    class chariot: public Ui_chariot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARIOT_H
