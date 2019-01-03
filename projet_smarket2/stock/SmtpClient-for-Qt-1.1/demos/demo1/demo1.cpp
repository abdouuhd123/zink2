#include <QtCore>

#include "./SmtpClient-for-Qt-1.1/src/SmtpMime"

int main2(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // This is a first demo application of the SmtpClient for Qt project


    // First we need to create an SmtpClient object
    // We will use the Gmail's smtp server (smtp.gmail.com, port 465, ssl)

    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

    // We need to set the username (your email address) and password
    // for smtp authentification.

    smtp.setUser("melek.hentati@esprit.tn");
    smtp.setPassword("20345891Melek");

    // Now we create a MimeMessage object. This is the email.

    MimeMessage message;

    EmailAddress sender("melek.hentati@esprit.tn", "melek");
    message.setSender(&sender);

    EmailAddress to("melek.hentati@esprit.tn", "melek");
    message.addRecipient(&to);

    message.setSubject("smarket administration");

    // Now add some text to the email.
    // First we create a MimeText object.

    MimeText text;

    text.setText("Hi,\nThis is a simple email message.\n");

    // Now add it to the mail

    message.addPart(&text);

    // Now we can send the mail

    if (!smtp.connectToHost()) {
        qDebug() << "Failed to connect to host!" << endl;
        return -1;
    }

    if (!smtp.login()) {
        qDebug() << "Failed to login!" << endl;
        return -2;
    }

    if (!smtp.sendMail(message)) {
        qDebug() << "Failed to send mail!" << endl;
        return -3;
    }

    smtp.quit();

}
