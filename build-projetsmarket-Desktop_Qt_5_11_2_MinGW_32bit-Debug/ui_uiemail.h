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
    QLabel *recipantL;
    QLineEdit *file;
    QLineEdit *rcpt;
    QPushButton *browseBtn;
    QLabel *messageL;
    QLineEdit *port;
    QPushButton *sendPB;
    QLabel *smtpserverL;
    QLabel *attachmentL;
    QLabel *serverportL;
    QLabel *usernameL;
    QLabel *subjectL;
    QLabel *passwordL;
    QLineEdit *server;
    QPlainTextEdit *msg;
    QLineEdit *uname;
    QLineEdit *paswd;
    QLabel *label;
    QLineEdit *subject;
    QPushButton *pushButton_16;
    QPushButton *pushButton_34;

    void setupUi(QDialog *uiemail)
    {
        if (uiemail->objectName().isEmpty())
            uiemail->setObjectName(QStringLiteral("uiemail"));
        uiemail->resize(1200, 800);
        recipantL = new QLabel(uiemail);
        recipantL->setObjectName(QStringLiteral("recipantL"));
        recipantL->setGeometry(QRect(400, 320, 131, 31));
        recipantL->setStyleSheet(QLatin1String("font: 87 20pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        file = new QLineEdit(uiemail);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(590, 460, 301, 41));
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
        rcpt = new QLineEdit(uiemail);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(590, 320, 395, 41));
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
        browseBtn = new QPushButton(uiemail);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(910, 460, 61, 51));
        browseBtn->setStyleSheet(QStringLiteral("border-image: url(:/interface/modifie button.png);"));
        messageL = new QLabel(uiemail);
        messageL->setObjectName(QStringLiteral("messageL"));
        messageL->setGeometry(QRect(400, 530, 81, 31));
        messageL->setStyleSheet(QLatin1String("font: 87 20pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        port = new QLineEdit(uiemail);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(590, 110, 395, 41));
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
        sendPB = new QPushButton(uiemail);
        sendPB->setObjectName(QStringLiteral("sendPB"));
        sendPB->setGeometry(QRect(1010, 710, 71, 61));
        sendPB->setStyleSheet(QStringLiteral("border-image: url(:/interface/advancedre.png);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/128px/mail.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendPB->setIcon(icon);
        smtpserverL = new QLabel(uiemail);
        smtpserverL->setObjectName(QStringLiteral("smtpserverL"));
        smtpserverL->setGeometry(QRect(400, 50, 121, 31));
        smtpserverL->setStyleSheet(QLatin1String("font: 87 20pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        attachmentL = new QLabel(uiemail);
        attachmentL->setObjectName(QStringLiteral("attachmentL"));
        attachmentL->setGeometry(QRect(400, 460, 131, 31));
        attachmentL->setStyleSheet(QLatin1String("font: 87 20pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        serverportL = new QLabel(uiemail);
        serverportL->setObjectName(QStringLiteral("serverportL"));
        serverportL->setGeometry(QRect(400, 110, 121, 41));
        serverportL->setStyleSheet(QLatin1String("font: 87 20pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        usernameL = new QLabel(uiemail);
        usernameL->setObjectName(QStringLiteral("usernameL"));
        usernameL->setGeometry(QRect(400, 180, 71, 31));
        usernameL->setStyleSheet(QLatin1String("font: 87 20pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        subjectL = new QLabel(uiemail);
        subjectL->setObjectName(QStringLiteral("subjectL"));
        subjectL->setGeometry(QRect(400, 390, 71, 31));
        subjectL->setStyleSheet(QLatin1String("font: 87 20pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        passwordL = new QLabel(uiemail);
        passwordL->setObjectName(QStringLiteral("passwordL"));
        passwordL->setGeometry(QRect(400, 250, 101, 31));
        passwordL->setStyleSheet(QLatin1String("font: 87 20pt \"Lato Black\";\n"
"	color: rgb(213, 213, 229);"));
        server = new QLineEdit(uiemail);
        server->setObjectName(QStringLiteral("server"));
        server->setGeometry(QRect(590, 40, 395, 41));
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
        msg = new QPlainTextEdit(uiemail);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(590, 530, 401, 181));
        msg->setStyleSheet(QLatin1String("background-color: transparent;\n"
"	color: rgb(213, 213, 229);\n"
""));
        uname = new QLineEdit(uiemail);
        uname->setObjectName(QStringLiteral("uname"));
        uname->setGeometry(QRect(590, 180, 391, 41));
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
""));
        paswd = new QLineEdit(uiemail);
        paswd->setObjectName(QStringLiteral("paswd"));
        paswd->setGeometry(QRect(590, 250, 391, 41));
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
        label = new QLabel(uiemail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1200, 800));
        label->setStyleSheet(QStringLiteral("border-image: url(:/interface/fond 1.png);"));
        subject = new QLineEdit(uiemail);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(590, 390, 391, 41));
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
        pushButton_16 = new QPushButton(uiemail);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(300, 720, 58, 58));
        pushButton_16->setStyleSheet(QStringLiteral("border-image: url(:/interface/close.png);"));
        pushButton_34 = new QPushButton(uiemail);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        pushButton_34->setGeometry(QRect(210, 720, 68, 58));
        pushButton_34->setStyleSheet(QStringLiteral("border-image: url(:/interface/menu.png);"));
        label->raise();
        recipantL->raise();
        file->raise();
        rcpt->raise();
        browseBtn->raise();
        messageL->raise();
        port->raise();
        sendPB->raise();
        smtpserverL->raise();
        attachmentL->raise();
        serverportL->raise();
        usernameL->raise();
        subjectL->raise();
        passwordL->raise();
        server->raise();
        msg->raise();
        uname->raise();
        paswd->raise();
        subject->raise();
        pushButton_16->raise();
        pushButton_34->raise();

        retranslateUi(uiemail);

        QMetaObject::connectSlotsByName(uiemail);
    } // setupUi

    void retranslateUi(QDialog *uiemail)
    {
        uiemail->setWindowTitle(QApplication::translate("uiemail", "Dialog", nullptr));
        recipantL->setText(QApplication::translate("uiemail", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">MAIL RECIPANT</span></p></body></html>", nullptr));
        file->setText(QString());
        file->setPlaceholderText(QApplication::translate("uiemail", "importer votre fichier", nullptr));
        rcpt->setText(QString());
        browseBtn->setText(QString());
        messageL->setText(QApplication::translate("uiemail", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">MESSAGE</span></p></body></html>", nullptr));
        port->setText(QApplication::translate("uiemail", "465", nullptr));
        sendPB->setText(QString());
        smtpserverL->setText(QApplication::translate("uiemail", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">SERVER-SMTP</span></p></body></html>", nullptr));
        attachmentL->setText(QApplication::translate("uiemail", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">ATTACHEMENT</span></p></body></html>", nullptr));
        serverportL->setText(QApplication::translate("uiemail", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">SERVER-PORT</span></p></body></html>", nullptr));
        usernameL->setText(QApplication::translate("uiemail", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">MAIL</span></p></body></html>", nullptr));
        subjectL->setText(QApplication::translate("uiemail", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">SUBJECT</span></p></body></html>", nullptr));
        passwordL->setText(QApplication::translate("uiemail", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">PASSWORD</span></p></body></html>", nullptr));
        server->setText(QApplication::translate("uiemail", "smtp.gmail.com", nullptr));
        label->setText(QString());
        pushButton_16->setText(QString());
        pushButton_34->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class uiemail: public Ui_uiemail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIEMAIL_H
