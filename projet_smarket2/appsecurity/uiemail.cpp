#include "uiemail.h"
#include "ui_uiemail.h"
#include "smtp.h"
//#include"produit.h"
#include <QMessageBox>
#include <QFileDialog>
#include "second.h"

uiemail::uiemail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uiemail)
{
    ui->setupUi(this);
    this->setWindowTitle("Shift");
    connect(ui->sendPB, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
    sound= new QMediaPlayer;
    sound->setMedia(QUrl("qrc:/interface/normal sound.mp3"));
    sound1= new QMediaPlayer;
    sound1->setMedia(QUrl("qrc:/interface/sound no.mp3"));

}

uiemail::~uiemail()
{
    delete ui;
}


void uiemail::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}

void uiemail::sendMail()
{
    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toInt());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void uiemail::mailSent(QString status)
{
    /*if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );*/
}


void uiemail::on_exitBtn_clicked()
{


}


void uiemail::on_sendPB_clicked()
{
    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toInt());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
    {
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
        QMessageBox::information(nullptr, QObject::tr("Qt Simple SMTP client"),
                                 QObject::tr("mail sent"),QMessageBox::Ok);}
    else
    {smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
        QMessageBox::information(nullptr, QObject::tr("Qt Simple SMTP client"),
                                 QObject::tr("mail sent"),QMessageBox::Ok);}
    this->hide();

    second *s =new second;
    s->show();
    s->n=n;
}

void uiemail::on_pushButton_34_clicked()
{ if(sound->state()==QMediaPlayer::PlayingState)
        sound->setPosition(0);
        else if (sound->state()==QMediaPlayer::StoppedState)
            sound->play();
    hide();
    second *s=new second;
    s->show();
    s->n=n;
}



void uiemail::on_pushButton_16_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        close();
}
