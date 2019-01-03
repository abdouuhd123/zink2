#include "uiemail.h"
#include "ui_uiemail.h"
#include "smtp.h"
#include"produit.h"
#include <QMessageBox>
#include <QFileDialog>


uiemail::uiemail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uiemail)
{
    ui->setupUi(this);
    this->setWindowTitle("Shift");
    connect(ui->sendPB, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));

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
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}


void uiemail::on_exitBtn_clicked()
{
    this->hide();
   produit uimg;
   uimg.exec();

}
