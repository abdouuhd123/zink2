/********************************************************************************
** Form generated from reading UI file 'mainwindowc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWC_H
#define UI_MAINWINDOWC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainwindowc
{
public:
    QPushButton *pushButton;
    QLineEdit *LE_password;
    QLineEdit *LE_username;
    QLabel *l_titre;
    QLabel *label_2;

    void setupUi(QDialog *mainwindowc)
    {
        if (mainwindowc->objectName().isEmpty())
            mainwindowc->setObjectName(QStringLiteral("mainwindowc"));
        mainwindowc->resize(1200, 800);
        pushButton = new QPushButton(mainwindowc);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 540, 221, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: none;\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        LE_password = new QLineEdit(mainwindowc);
        LE_password->setObjectName(QStringLiteral("LE_password"));
        LE_password->setGeometry(QRect(500, 440, 221, 31));
        LE_password->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: none;\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        LE_password->setEchoMode(QLineEdit::Password);
        LE_username = new QLineEdit(mainwindowc);
        LE_username->setObjectName(QStringLiteral("LE_username"));
        LE_username->setGeometry(QRect(500, 350, 221, 31));
        LE_username->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: none;\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        l_titre = new QLabel(mainwindowc);
        l_titre->setObjectName(QStringLiteral("l_titre"));
        l_titre->setGeometry(QRect(520, 170, 101, 16));
        label_2 = new QLabel(mainwindowc);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1200, 800));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/interface/Untitled-zrf.png);"));
        label_2->raise();
        LE_username->raise();
        l_titre->raise();
        LE_password->raise();
        pushButton->raise();

        retranslateUi(mainwindowc);

        QMetaObject::connectSlotsByName(mainwindowc);
    } // setupUi

    void retranslateUi(QDialog *mainwindowc)
    {
        mainwindowc->setWindowTitle(QApplication::translate("mainwindowc", "Dialog", nullptr));
        pushButton->setText(QString());
        l_titre->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainwindowc: public Ui_mainwindowc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWC_H
