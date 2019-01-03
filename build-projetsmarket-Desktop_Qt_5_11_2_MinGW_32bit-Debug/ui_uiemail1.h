/********************************************************************************
** Form generated from reading UI file 'uiemail1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIEMAIL1_H
#define UI_UIEMAIL1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_uiemail1
{
public:
    QPushButton *exitBtn;
    QLineEdit *port;
    QLineEdit *uname;
    QLabel *messageL;
    QLabel *subjectL;
    QLineEdit *paswd;
    QLineEdit *server;
    QLabel *recipantL;
    QLabel *smtpserverL;
    QLabel *attachmentL;
    QLineEdit *subject;
    QPushButton *sendPB;
    QLineEdit *rcpt;
    QLabel *serverportL;
    QLabel *usernameL;
    QPushButton *browseBtn;
    QLineEdit *file;
    QLabel *passwordL;
    QPlainTextEdit *msg;
    QLabel *label_2;

    void setupUi(QDialog *uiemail1)
    {
        if (uiemail1->objectName().isEmpty())
            uiemail1->setObjectName(QStringLiteral("uiemail1"));
        uiemail1->resize(1200, 800);
        exitBtn = new QPushButton(uiemail1);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(1000, 740, 81, 41));
        exitBtn->setStyleSheet(QStringLiteral("backrgound_color:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/128px/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitBtn->setIcon(icon);
        port = new QLineEdit(uiemail1);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(360, 140, 395, 31));
        port->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        port->setReadOnly(true);
        uname = new QLineEdit(uiemail1);
        uname->setObjectName(QStringLiteral("uname"));
        uname->setGeometry(QRect(360, 190, 391, 31));
        uname->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
"\n"
""));
        uname->setReadOnly(true);
        messageL = new QLabel(uiemail1);
        messageL->setObjectName(QStringLiteral("messageL"));
        messageL->setGeometry(QRect(220, 450, 81, 31));
        messageL->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        subjectL = new QLabel(uiemail1);
        subjectL->setObjectName(QStringLiteral("subjectL"));
        subjectL->setGeometry(QRect(220, 340, 61, 16));
        subjectL->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        paswd = new QLineEdit(uiemail1);
        paswd->setObjectName(QStringLiteral("paswd"));
        paswd->setGeometry(QRect(360, 240, 391, 31));
        paswd->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        paswd->setEchoMode(QLineEdit::Password);
        paswd->setReadOnly(false);
        server = new QLineEdit(uiemail1);
        server->setObjectName(QStringLiteral("server"));
        server->setGeometry(QRect(360, 90, 395, 31));
        server->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        server->setReadOnly(true);
        recipantL = new QLabel(uiemail1);
        recipantL->setObjectName(QStringLiteral("recipantL"));
        recipantL->setGeometry(QRect(220, 290, 141, 21));
        recipantL->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        smtpserverL = new QLabel(uiemail1);
        smtpserverL->setObjectName(QStringLiteral("smtpserverL"));
        smtpserverL->setGeometry(QRect(220, 90, 121, 31));
        smtpserverL->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        attachmentL = new QLabel(uiemail1);
        attachmentL->setObjectName(QStringLiteral("attachmentL"));
        attachmentL->setGeometry(QRect(220, 390, 111, 21));
        attachmentL->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        subject = new QLineEdit(uiemail1);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(360, 340, 391, 31));
        subject->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        subject->setReadOnly(true);
        sendPB = new QPushButton(uiemail1);
        sendPB->setObjectName(QStringLiteral("sendPB"));
        sendPB->setGeometry(QRect(680, 620, 71, 51));
        sendPB->setStyleSheet(QStringLiteral("border-image: url(:/interface/advancedre.png);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/128px/mail.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendPB->setIcon(icon1);
        rcpt = new QLineEdit(uiemail1);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(360, 290, 395, 31));
        rcpt->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        serverportL = new QLabel(uiemail1);
        serverportL->setObjectName(QStringLiteral("serverportL"));
        serverportL->setGeometry(QRect(220, 150, 111, 21));
        serverportL->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        usernameL = new QLabel(uiemail1);
        usernameL->setObjectName(QStringLiteral("usernameL"));
        usernameL->setGeometry(QRect(220, 200, 91, 16));
        usernameL->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        browseBtn = new QPushButton(uiemail1);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(680, 390, 51, 41));
        browseBtn->setStyleSheet(QStringLiteral("border-image: url(:/interface/modifie button.png);"));
        file = new QLineEdit(uiemail1);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(360, 390, 301, 31));
        file->setStyleSheet(QLatin1String("/*background-color: transparent;\n"
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
        file->setReadOnly(true);
        passwordL = new QLabel(uiemail1);
        passwordL->setObjectName(QStringLiteral("passwordL"));
        passwordL->setGeometry(QRect(220, 240, 121, 21));
        passwordL->setStyleSheet(QLatin1String("font: 87 10pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        msg = new QPlainTextEdit(uiemail1);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setEnabled(false);
        msg->setGeometry(QRect(360, 470, 395, 131));
        label_2 = new QLabel(uiemail1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1200, 800));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/interface/beyaaa.png);"));
        label_2->raise();
        exitBtn->raise();
        port->raise();
        uname->raise();
        messageL->raise();
        subjectL->raise();
        paswd->raise();
        server->raise();
        recipantL->raise();
        smtpserverL->raise();
        attachmentL->raise();
        subject->raise();
        sendPB->raise();
        rcpt->raise();
        serverportL->raise();
        usernameL->raise();
        browseBtn->raise();
        file->raise();
        passwordL->raise();
        msg->raise();

        retranslateUi(uiemail1);

        QMetaObject::connectSlotsByName(uiemail1);
    } // setupUi

    void retranslateUi(QDialog *uiemail1)
    {
        uiemail1->setWindowTitle(QApplication::translate("uiemail1", "Dialog", nullptr));
        exitBtn->setText(QString());
        port->setText(QApplication::translate("uiemail1", "465", nullptr));
        uname->setText(QApplication::translate("uiemail1", "beya.hariz@esprit.tn", nullptr));
        uname->setPlaceholderText(QApplication::translate("uiemail1", "Enter your E-mail", nullptr));
        messageL->setText(QApplication::translate("uiemail1", "Message:", nullptr));
        subjectL->setText(QApplication::translate("uiemail1", "Sujet :", nullptr));
        paswd->setInputMask(QString());
        paswd->setText(QApplication::translate("uiemail1", "255601451998", nullptr));
        paswd->setPlaceholderText(QApplication::translate("uiemail1", "entrer votre mot de passe", nullptr));
        server->setText(QApplication::translate("uiemail1", "smtp.gmail.com", nullptr));
        recipantL->setText(QApplication::translate("uiemail1", "Email recipiant :", nullptr));
        smtpserverL->setText(QApplication::translate("uiemail1", "Serveur-Smtp:", nullptr));
        attachmentL->setText(QApplication::translate("uiemail1", "Attachement:", nullptr));
        subject->setText(QApplication::translate("uiemail1", "date limitee", nullptr));
        subject->setPlaceholderText(QApplication::translate("uiemail1", "Enter subject", nullptr));
        sendPB->setText(QString());
        rcpt->setText(QApplication::translate("uiemail1", "beya.hariz@esprit.tn", nullptr));
        serverportL->setText(QApplication::translate("uiemail1", "Serveur port:", nullptr));
        usernameL->setText(QApplication::translate("uiemail1", "Username:", nullptr));
        browseBtn->setText(QString());
        file->setText(QString());
        file->setPlaceholderText(QApplication::translate("uiemail1", "importer votre fichier", nullptr));
        passwordL->setText(QApplication::translate("uiemail1", "Mot de passe", nullptr));
        msg->setPlainText(QApplication::translate("uiemail1", "Bonjour,\n"
"\n"
"bienvenue dans notre  \"SMARKET\" nous vous esp\303\251rons  le meilleur avec nous.\n"
"\n"
"Bonne journ\303\251e!\n"
"Meilleures salutations,\n"
"\n"
"HARIZ BEYA\n"
"gestion des produits", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class uiemail1: public Ui_uiemail1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIEMAIL1_H
