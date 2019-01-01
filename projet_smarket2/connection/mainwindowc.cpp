#include <QMessageBox>
#include "mainwindowc.h"
#include "ui_mainwindowc.h"
#include"ui_chariot.h"
#include"chariot.h"
#include <QtMultimedia/QMediaPlayer>
#include <QDialog>

mainwindowc::mainwindowc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainwindowc)
{
    ui->setupUi(this);
    this->setWindowTitle("C2i");
    Connexion connection_object ;
    if(connection_object.createconnect())
    {
        qDebug() << "connected";
        ui->l_titre->setText("connected");
    }
    else
    {
         ui->l_titre->setText("NOT connected");
    }
}
    //s= new QMediaPlayer;
    // s->setMedia(QUrl("C:/Users/2SIS/Desktop/QT/my project/connection/normalsound.mp3"));
mainwindowc::~mainwindowc()
{
    delete ui;
}

void mainwindowc::on_pushButton_clicked()
{/*if(s->state()==QMediaPlayer::PlayingState)
        s->setPosition(0);
        else if(s->state()==QMediaPlayer::StoppedState)
        sound->play();*/

    QSqlQuery qry,qry1;
    username=ui->LE_username->text();
    password=ui->LE_password->text();

    qry.prepare("select * from LOGIN_CHARIOT where USERNAME= ? and  PASSWORD=? ");
    qry.addBindValue(username);
    qry.addBindValue(password);

    if(qry.exec())
    {



        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
        {
            qry1.prepare("select grade from login_chariot where username=? and  password=? ");
            qry1.addBindValue(username);
            qry1.addBindValue(password);
            if(qry1.exec())
            {
                while(qry1.next())
                {
                    qDebug()<<qry.first();
                    QString grade=qry1.value(0).toString();
                    qDebug()<<grade;
                    if(grade=="produit")
                    {
                        this->hide();
                        produit produitob;
                        produitob.exec();
                    }
                    else if(grade=="chariot")
                    {
                        this->hide();
                        chariot chariotob;
                        chariotob.exec();


                    }

                    else
                    {
                        QMessageBox::information(this,tr("Information"),tr("cannot find"));

                        this->hide();
                        chariot chariotob;
                        chariotob.exec();

                    }
                }

            }

        }
        if(count>1)
        {
            QMessageBox::information(this,tr("Information"),tr("duplicate username and password"));
        }
        if(count<1)
        {
            QMessageBox::information(this,tr("Information"),tr("username or password is not correct"));

        }
    }
}
