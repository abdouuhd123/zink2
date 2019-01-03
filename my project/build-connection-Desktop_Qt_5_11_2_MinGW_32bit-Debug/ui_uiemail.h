/********************************************************************************
** Form generated from reading UI file 'uiemail.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIEMAIL_H
#define UI_UIEMAIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_uiemail
{
public:
    QLabel *label;
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

    void setupUi(QDialog *uiemail)
    {
        if (uiemail->objectName().isEmpty())
            uiemail->setObjectName(QStringLiteral("uiemail"));
        uiemail->resize(998, 658);
        label = new QLabel(uiemail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 1001, 671));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/backgroundCarrefour.png")));
        exitBtn = new QPushButton(uiemail);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(900, 70, 81, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/128px/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitBtn->setIcon(icon);
        port = new QLineEdit(uiemail);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(310, 299, 395, 20));
        port->setReadOnly(true);
        uname = new QLineEdit(uiemail);
        uname->setObjectName(QStringLiteral("uname"));
        uname->setGeometry(QRect(310, 330, 391, 20));
        uname->setReadOnly(true);
        messageL = new QLabel(uiemail);
        messageL->setObjectName(QStringLiteral("messageL"));
        messageL->setGeometry(QRect(211, 476, 61, 16));
        subjectL = new QLabel(uiemail);
        subjectL->setObjectName(QStringLiteral("subjectL"));
        subjectL->setGeometry(QRect(211, 418, 61, 16));
        paswd = new QLineEdit(uiemail);
        paswd->setObjectName(QStringLiteral("paswd"));
        paswd->setGeometry(QRect(310, 360, 391, 20));
        paswd->setEchoMode(QLineEdit::Password);
        paswd->setReadOnly(false);
        server = new QLineEdit(uiemail);
        server->setObjectName(QStringLiteral("server"));
        server->setGeometry(QRect(310, 270, 395, 20));
        server->setReadOnly(true);
        recipantL = new QLabel(uiemail);
        recipantL->setObjectName(QStringLiteral("recipantL"));
        recipantL->setGeometry(QRect(211, 389, 101, 16));
        smtpserverL = new QLabel(uiemail);
        smtpserverL->setObjectName(QStringLiteral("smtpserverL"));
        smtpserverL->setGeometry(QRect(211, 273, 91, 20));
        attachmentL = new QLabel(uiemail);
        attachmentL->setObjectName(QStringLiteral("attachmentL"));
        attachmentL->setGeometry(QRect(211, 447, 71, 16));
        subject = new QLineEdit(uiemail);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(310, 418, 391, 20));
        subject->setReadOnly(true);
        sendPB = new QPushButton(uiemail);
        sendPB->setObjectName(QStringLiteral("sendPB"));
        sendPB->setGeometry(QRect(470, 620, 81, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/128px/mail.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendPB->setIcon(icon1);
        rcpt = new QLineEdit(uiemail);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(310, 390, 395, 20));
        serverportL = new QLabel(uiemail);
        serverportL->setObjectName(QStringLiteral("serverportL"));
        serverportL->setGeometry(QRect(211, 302, 81, 16));
        usernameL = new QLabel(uiemail);
        usernameL->setObjectName(QStringLiteral("usernameL"));
        usernameL->setGeometry(QRect(211, 331, 71, 16));
        browseBtn = new QPushButton(uiemail);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(630, 447, 71, 23));
        browseBtn->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 1px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width:10px;\n"
"}"));
        file = new QLineEdit(uiemail);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(310, 449, 301, 20));
        file->setReadOnly(true);
        passwordL = new QLabel(uiemail);
        passwordL->setObjectName(QStringLiteral("passwordL"));
        passwordL->setGeometry(QRect(211, 360, 81, 16));
        msg = new QPlainTextEdit(uiemail);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setEnabled(false);
        msg->setGeometry(QRect(310, 476, 395, 131));

        retranslateUi(uiemail);

        QMetaObject::connectSlotsByName(uiemail);
    } // setupUi

    void retranslateUi(QDialog *uiemail)
    {
        uiemail->setWindowTitle(QApplication::translate("uiemail", "Dialog", nullptr));
        label->setText(QString());
        exitBtn->setText(QApplication::translate("uiemail", "retour", nullptr));
        port->setText(QApplication::translate("uiemail", "465", nullptr));
        uname->setText(QApplication::translate("uiemail", "ikbel.khemiri@esprit.tn", nullptr));
        uname->setPlaceholderText(QApplication::translate("uiemail", "Enter your E-mail", nullptr));
        messageL->setText(QApplication::translate("uiemail", "Message:", nullptr));
        subjectL->setText(QApplication::translate("uiemail", "Sujet :", nullptr));
        paswd->setInputMask(QString());
        paswd->setText(QString());
        paswd->setPlaceholderText(QApplication::translate("uiemail", "entrer votre mot de passe", nullptr));
        server->setText(QApplication::translate("uiemail", "smtp.gmail.com", nullptr));
        recipantL->setText(QApplication::translate("uiemail", "Email recipiant :", nullptr));
        smtpserverL->setText(QApplication::translate("uiemail", "Serveur-Smtp:", nullptr));
        attachmentL->setText(QApplication::translate("uiemail", "Attachement:", nullptr));
        subject->setText(QApplication::translate("uiemail", "Bienvenue", nullptr));
        subject->setPlaceholderText(QApplication::translate("uiemail", "Enter subject", nullptr));
        sendPB->setText(QApplication::translate("uiemail", "Send", nullptr));
        serverportL->setText(QApplication::translate("uiemail", "Serveur port:", nullptr));
        usernameL->setText(QApplication::translate("uiemail", "Username:", nullptr));
        browseBtn->setText(QApplication::translate("uiemail", "importer...", nullptr));
        file->setText(QString());
        file->setPlaceholderText(QApplication::translate("uiemail", "importer votre fichier", nullptr));
        passwordL->setText(QApplication::translate("uiemail", "mot de passe", nullptr));
        msg->setPlainText(QApplication::translate("uiemail", "Bonjour,\n"
"\n"
"bienvenue dans notre  \"Carrefour\" nous vous esp\303\251rons  le meilleur avec nous.\n"
"\n"
"Bonne journ\303\251e!\n"
"Meilleures salutations,\n"
"\n"
"Mohamed Belhouene\n"
"gestion des clients.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiemail: public Ui_uiemail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIEMAIL_H
