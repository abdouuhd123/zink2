#include "second.h"
#include "ui_second.h"
#include <QDebug>
#include <QMessageBox>
#include <QDebug>
#include <QDialog>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtMultimedia/QMediaPlayer>
#include "employeec.h"
#include "blocc.h"
#include "accidentc.h"
#include <QDialog>
#include "connexion.h"



#include <QtSql>
#include<QMap>
#include <iostream>
#include <QString>
#include<time.h>
#include <QTime>
#include <QDialog>
#include <qdialog.h>
#include <ctime>
#include<vector>
#include <QLineEdit>
#include <cstring>
#include <QSharedPointer>
#include<QSharedDataPointer>
//#include<qsharedpointer.h>
#include <QSharedPointer>
#include"qcustomplot.h"
second::second(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    ui->but_mouvement->setFixedHeight(140);
    ui->but_mouvement->setFixedWidth(140);
    ui->but_theft->setFixedHeight(140);
    ui->but_theft->setFixedWidth(140);
    ui->but_fire->setFixedHeight(140);
    ui->but_fire->setFixedWidth(140);
    ui->but_employee->setFixedHeight(140);
    ui->but_employee->setFixedWidth(140);
    ui->but_bloc->setFixedHeight(140);
    ui->but_bloc->setFixedWidth(140);
    ui->but_accident->setFixedHeight(140);
    ui->but_accident->setFixedWidth(140);
    QRect rect(0,0,130,130);
    qDebug() << rect.size();
    qDebug() << ui->but_mouvement->size();
    qDebug() << ui->but_fire->size();
    qDebug() << ui->but_theft->size();
    qDebug() << ui->but_employee->size();
    qDebug() << ui->but_bloc->size();
    qDebug() << ui->but_accident->size();
    QRegion region(rect, QRegion::Ellipse);
    qDebug() << region.boundingRect().size();
    ui->but_mouvement->setMask(region);
    ui->but_fire->setMask(region);
    ui->but_theft->setMask(region);
    ui->but_bloc->setMask(region);
    ui->but_accident->setMask(region);
    ui->but_employee->setMask(region);
    sound= new QMediaPlayer;
    sound->setMedia(QUrl("qrc:/interface/normal sound.mp3"));
    sound1= new QMediaPlayer;
    sound1->setMedia(QUrl("qrc:/interface/sound no.mp3"));
    alarm= new QMediaPlayer;
    alarm->setMedia(QUrl("qrc:/interface/siren.mp3"));

    ui->pushButton_30->setFixedHeight(95);
    ui->pushButton_30->setFixedWidth(95);
    ui->pushButton_28->setFixedWidth(95);
    ui->pushButton_28->setFixedHeight(95);

    ui->pushButton_29->setFixedHeight(95);
    ui->pushButton_29->setFixedWidth(95);
    ui->pushButton_17->setFixedHeight(95);
    ui->pushButton_17->setFixedWidth(95);
    ui->pushButton_18->setFixedWidth(95);
    ui->pushButton_18->setFixedHeight(95);


    ui->pushButton_19->setFixedHeight(95);
    ui->pushButton_19->setFixedWidth(95);

    ui->pushButton_22->setFixedHeight(95);
    ui->pushButton_22->setFixedWidth(95);
    ui->pushButton_23->setFixedWidth(95);
    ui->pushButton_23->setFixedHeight(95);

    ui->pushButton_24->setFixedHeight(95);
    ui->pushButton_24->setFixedWidth(95);
    ui->pushButton_25->setFixedHeight(95);
    ui->pushButton_25->setFixedWidth(95);
    QRect rect1(0,0,85,85);
    qDebug() << rect1.size();
    qDebug() << ui->pushButton_30->size();
    qDebug() << ui->pushButton_28->size();
        qDebug() << ui->pushButton_29->size();
        qDebug() << ui->pushButton_17->size();
        qDebug() << ui->pushButton_18->size();
            qDebug() << ui->pushButton_19->size();
            qDebug() << ui->pushButton_22->size();
            qDebug() << ui->pushButton_23->size();
                qDebug() << ui->pushButton_24->size();
                qDebug() << ui->pushButton_25->size();
    QRegion region1(rect1, QRegion::Ellipse);
    qDebug() << region1.boundingRect().size();
    ui->pushButton_30->setMask(region1);
    ui->pushButton_28->setMask(region1);
    ui->pushButton_29->setMask(region1);
    ui->pushButton_17->setMask(region1);
    ui->pushButton_18->setMask(region1);
    ui->pushButton_19->setMask(region1);
    ui->pushButton_22->setMask(region1);
    ui->pushButton_23->setMask(region1);
    ui->pushButton_24->setMask(region1);
    ui->pushButton_25->setMask(region1);

    ui->lineEdit_8->hide();
    ui->lineEdit_9->hide();
    ui->lineEdit_7->hide();
    ui->label_17->hide();
    ui->label_18->hide();
    ui->label_19->hide();
    ui->pushButton_27->hide();
    ui->pushButton_31->hide();
    ui->tabemployee->hide();
    ui->pushButton_32->hide();

    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    ui->lineEdit_3->hide();
    ui->label_11->hide();
    ui->label_12->hide();
    ui->label_13->hide();
    ui->pushButton_2->hide();
    ui->pushButton_14->hide();
    ui->tabaccident->hide();
    ui->pushButton_15->hide();

    ui->lineEdit_5->hide();
    ui->lineEdit_6->hide();
    ui->lineEdit_4->hide();
    ui->label_14->hide();
    ui->label_15->hide();
    ui->label_16->hide();
    ui->pushButton_26->hide();
    ui->pushButton_21->hide();
    ui->tabbloc->hide();
    ui->pushButton_20->hide();
    ui->pushButton_33->hide();


   /* ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    ui->lineEdit_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->pushButton->hide();
    ui->pushButton_5->hide();
     ui->pushButton_6->hide();
    ui->tabaccident->hide();
    ui->pushButton_2->hide();*/



    ui->stackedWidget->setCurrentIndex(0);


}

second::~second()
{
    delete ui;
}

void second::on_pushButton_clicked()
{ if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
    ui->stackedWidget->setCurrentIndex(1);
}

void second::on_pushButton_3_clicked()
{ if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        ui->stackedWidget->setCurrentIndex(2);
}

void second::on_pushButton_4_clicked()
{if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
            ui->stackedWidget->setCurrentIndex(3);
}

void second::on_pushButton_5_clicked()
{if(n==1){if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
    ui->stackedWidget->setCurrentIndex(4);}
    else
    {if(sound1->state()==QMediaPlayer::PlayingState)
            sound1->setPosition(0);
            else if (sound1->state()==QMediaPlayer::StoppedState)
                sound1->play();}

}

void second::on_pushButton_6_clicked()
{
    if(n==1){if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(5);}
        else
        {if(sound1->state()==QMediaPlayer::PlayingState)
                sound1->setPosition(0);
                else if (sound1->state()==QMediaPlayer::StoppedState)
                    sound1->play();}

}

void second::on_pushButton_7_clicked()
{
    if(n==1){if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(6);}
        else
        {if(sound1->state()==QMediaPlayer::PlayingState)
                sound1->setPosition(0);
                else if (sound1->state()==QMediaPlayer::StoppedState)
                    sound1->play();}

}

void second::on_pushButton_12_clicked()
{
        alarm->play();
}

void second::on_pushButton_13_clicked()
{
    alarm->stop();
}

void second::on_pushButton_10_clicked()
{
    alarm->play();
}

void second::on_pushButton_11_clicked()
{
    alarm->stop();
}

void second::on_pushButton_9_clicked()
{
        alarm->stop();
}

void second::on_pushButton_8_clicked()
{
        alarm->play();
}

void second::on_but_mouvement_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(1);
}

void second::on_but_fire_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(2);
}

void second::on_but_theft_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(3);
}

void second::on_but_employee_clicked()
{
    if(n==1){if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(4);}
        else
        {if(sound1->state()==QMediaPlayer::PlayingState)
                sound1->setPosition(0);
                else if (sound1->state()==QMediaPlayer::StoppedState)
                    sound1->play();}
}

void second::on_but_accident_clicked()
{
    if(n==1){if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(5);}
        else
        {if(sound1->state()==QMediaPlayer::PlayingState)
                sound1->setPosition(0);
                else if (sound1->state()==QMediaPlayer::StoppedState)
                    sound1->play();}
}

void second::on_but_bloc_clicked()
{
    if(n==1){if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(6);}
        else
        {if(sound1->state()==QMediaPlayer::PlayingState)
                sound1->setPosition(0);
                else if (sound1->state()==QMediaPlayer::StoppedState)
                    sound1->play();}
}

void second::on_pushButton_32_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        int id = ui->lineEdit_8->text().toInt();
        QString nom= ui->lineEdit_9->text();
        QString prenom= ui->lineEdit_7->text();
        ui->lineEdit_8->clear();
        ui->lineEdit_9->clear();
        ui->lineEdit_7->clear();

      employeec e(id,nom,prenom);
      bool test=e.ajouter_employee();
      if(test)
    {ui->tabemployee->setModel(e.afficher_employee());//refresh
    QMessageBox::information(nullptr, QObject::tr("Ajouter un employee"),
                      QObject::tr("employee ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un employee"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
}

void second::on_pushButton_31_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        int id = ui->lineEdit_8->text().toInt();
        ui->lineEdit_8->clear();
        bool test=e.supprimer_employee(id);
        if(test)
        {ui->tabemployee->setModel(e.afficher_employee());//refresh
            QMessageBox::information(nullptr, QObject::tr("Supprimer un employee"),
                        QObject::tr("employee supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
          QMessageBox::critical(nullptr, QObject::tr("Supprimer un employee"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void second::on_pushButton_27_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        employeec e;
           QString s=ui->lineEdit_8->text();
           ui->lineEdit_8->clear();
            QSqlQueryModel *model=new  QSqlQueryModel();
            model=e.rechercherad_employee(s);
            ui->tabemployee->setModel(model);
            ui->tabemployee->show();
            ui->lineEdit_8->clear();
}

void second::on_pushButton_30_clicked()
{
    ui->lineEdit->clear();
       if(sound->state()==QMediaPlayer::PlayingState)
           sound->setPosition(0);
           else if (sound->state()==QMediaPlayer::StoppedState)
               sound->play();
 ui->tabemployee->show();
 ui->lineEdit_9->hide();
 ui->lineEdit_8->show();
 ui->lineEdit_7->hide();
 ui->label_17->show();
 ui->label_18->hide();
 ui->label_19->hide();
 ui->pushButton_32->hide();
 ui->pushButton_31->hide();
   ui->pushButton_27->show();
     employeec e;
     QSqlQueryModel* model=new QSqlQueryModel();
     model=e.afficher_employee();
     ui->tabemployee->setModel(model);
}

void second::on_pushButton_28_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        ui->lineEdit_8->show();
        ui->lineEdit_9->show();
        ui->lineEdit_7->show();
        ui->label_17->show();
        ui->label_18->show();
        ui->label_19->show();
        ui->pushButton_32->show();
        ui->pushButton_27->hide();
        ui->tabemployee->hide();
        ui->pushButton_31->hide();
}

void second::on_pushButton_29_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        ui->tabaccident->hide();
            ui->lineEdit_8->clear();
            ui->lineEdit_9->hide();
            ui->lineEdit_8->show();
            ui->lineEdit_7->hide();
            ui->label_17->show();
            ui->label_18->hide();
            ui->label_19->hide();
           // ui->pushButton->hide();
            ui->pushButton_31->show();
            ui->pushButton_32->hide();
            ui->pushButton_27->hide();
            ui->tabemployee->hide();
}

void second::on_pushButton_18_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
        sound->setPosition(0);
        else if (sound->state()==QMediaPlayer::StoppedState)
            sound->play();


        ui->lineEdit->clear();
        ui->tabaccident->show();
        ui->lineEdit_2->hide();
        ui->lineEdit->show();
        ui->lineEdit_3->hide();
        ui->label_13->show();
        ui->label_12->hide();
        ui->label_11->hide();
        ui->pushButton_2->hide();
        ui->pushButton_14->hide();
          ui->pushButton_15->show();

          accidentc a;
          QSqlQueryModel* model=new QSqlQueryModel();
          model=a.afficher_accident();
          ui->tabaccident->setModel(model);
}

void second::on_pushButton_17_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        ui->lineEdit_2->show();
        ui->lineEdit->show();
        ui->lineEdit_3->show();
        ui->label_11->show();
        ui->label_12->show();
        ui->label_13->show();
        ui->pushButton_2->show();
        ui->pushButton_14->hide();
        ui->tabaccident->hide();
        ui->pushButton_15->hide();
}

void second::on_pushButton_19_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        ui->tabaccident->hide();
            ui->lineEdit->clear();
            ui->lineEdit_3->hide();
            ui->lineEdit->show();
            ui->lineEdit_2->hide();
            ui->label_13->show();
            ui->label_12->hide();
            ui->label_11->hide();
            ui->pushButton_2->hide();
            ui->pushButton_14->show();
            ui->pushButton_15->hide();
}

void second::on_pushButton_2_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        int id = ui->lineEdit->text().toInt();
        QString type= ui->lineEdit_2->text();
        QString date_a= ui->lineEdit_3->text();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
      accidentc a(id,type,date_a);
      bool test=a.ajouter_accident();
      if(test)
    {ui->tabaccident->setModel(a.afficher_accident());//refresh
    QMessageBox::information(nullptr, QObject::tr("Ajouter un accident"),
                      QObject::tr("accident ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
     else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un accident"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void second::on_pushButton_14_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        int id = ui->lineEdit->text().toInt();
        ui->lineEdit->clear();
        bool test=a.supprimer_accident(id);
        if(test)
        {ui->tabaccident->setModel(a.afficher_accident());//refresh
           QMessageBox::information(nullptr, QObject::tr("Supprimer un accident"),
                        QObject::tr("accident supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
          QMessageBox::critical(nullptr, QObject::tr("Supprimer un accident"),
                       QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void second::on_pushButton_15_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        accidentc ac;
       QString s=ui->lineEdit->text();
       ui->lineEdit->clear();
        QSqlQueryModel *model=new  QSqlQueryModel();
        model=ac.rechercherad_accident(s);
        ui->tabaccident->setModel(model);
        ui->tabaccident->show();
        ui->lineEdit->clear();
}


void second::on_pushButton_24_clicked()
{
    ui->lineEdit_5->clear();
         if(sound->state()==QMediaPlayer::PlayingState)
             sound->setPosition(0);
             else if (sound->state()==QMediaPlayer::StoppedState)
                 sound->play();
   ui->tabbloc->show();
   ui->lineEdit_6->hide();
   ui->lineEdit_5->show();
   ui->lineEdit_4->hide();
   ui->label_14->show();
   ui->label_15->hide();
   ui->label_16->hide();
   ui->pushButton_21->hide();
   ui->pushButton_26->hide();
     ui->pushButton_20->show();
     ui->pushButton_33->hide();

       blocc e;
       QSqlQueryModel* model=new QSqlQueryModel();
       model=e.afficher_bloc();
       ui->tabbloc->setModel(model);

}

void second::on_pushButton_22_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        ui->lineEdit_5->show();
        ui->lineEdit_6->show();
        ui->lineEdit_4->show();
        ui->label_14->show();
        ui->label_15->show();
        ui->label_16->show();
        ui->pushButton_21->show();
        ui->pushButton_20->hide();
        ui->tabbloc->hide();
        ui->pushButton_26->hide();
        ui->pushButton_33->hide();

}

void second::on_pushButton_23_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        ui->tabbloc->hide();
            ui->lineEdit_5->clear();
            ui->lineEdit_6->hide();
            ui->lineEdit_5->show();
            ui->lineEdit_4->hide();
            ui->label_14->show();
            ui->label_15->hide();
            ui->label_16->hide();
            ui->pushButton_26->hide();
            ui->pushButton_33->show();
            ui->pushButton_20->hide();
            ui->pushButton_21->hide();
}

void second::on_pushButton_25_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        ui->pushButton_26->show();
        ui->lineEdit_6->show();
        ui->lineEdit_5->show();
        ui->label_15->show();
        ui->label_16->show();
        ui->label_14->show();

        ui->lineEdit_4->show();
        ui->pushButton_21->hide();
        ui->pushButton_20->hide();
        ui->tabbloc->hide();
        ui->pushButton_33->hide();
}

void second::on_pushButton_20_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        blocc b;
           QString s=ui->lineEdit_5->text();
           ui->lineEdit_5->clear();
            QSqlQueryModel *model=new  QSqlQueryModel();
            model=b.rechercherad_bloc(s);
            ui->tabbloc->setModel(model);
            ui->tabbloc->show();
}

void second::on_pushButton_33_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        int id = ui->lineEdit_5->text().toInt();
        ui->lineEdit_5->clear();
        bool test=b.supprimer_bloc(id);
        if(test)
        {ui->tabbloc->setModel(b.afficher_bloc());//refresh
            QMessageBox::information(nullptr, QObject::tr("Supprimer un bloc"),
                      QObject::tr("bloc supprimé.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
         { QMessageBox::critical(nullptr, QObject::tr("Supprimer un bloc"),
                        QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);}

}

void second::on_pushButton_21_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        int id = ui->lineEdit_5->text().toInt();
        QString type= ui->lineEdit_6->text();
        QString etat= ui->lineEdit_4->text();
        ui->lineEdit_5->clear();
        ui->lineEdit_6->clear();
        ui->lineEdit_4->clear();

      blocc b(id,type,etat);
      bool test=b.ajouter_bloc();
      if(test)
    {ui->tabbloc->setModel(b.afficher_bloc());//refresh
    QMessageBox::information(nullptr, QObject::tr("Ajouter un bloc"),
                     QObject::tr("bloc ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un bloc"),
                      QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void second::on_pushButton_26_clicked()
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        blocc b;
        QString c = ui->lineEdit_5->text();
        //b.set_id(s);
        b.set_type(ui->lineEdit_6->text());
        b.set_etat(ui->lineEdit_4->text());

        b.modifier_bloc(c);
        ui->tabbloc->setModel(b.afficher_bloc());
        ui->lineEdit_5->clear();
        ui->lineEdit_6->clear();
        ui->lineEdit_4->clear();
}

void second::on_pushButton_16_clicked()
{        if(sound->state()==QMediaPlayer::PlayingState)
        sound->setPosition(0);
        else if (sound->state()==QMediaPlayer::StoppedState)
            sound->play();
    close();
}

void second::on_pushButton_34_clicked()
{       if(sound->state()==QMediaPlayer::PlayingState)
        sound->setPosition(0);
        else if (sound->state()==QMediaPlayer::StoppedState)
            sound->play();
    ui->stackedWidget->setCurrentIndex(0);
}

/*void second::on_lineEdit_8_textEdited( QString id)
{
    employeec e;
    id=ui->lineEdit_8->text();
    QSqlQueryModel *model=new QSqlQueryModel();
    model=e.rechercher_employee(id);
    ui->tabemployee->setModel(model);
}*/

void second::on_pushButton_35_clicked()
{
    /*hide();
   statistic *st= new statistic;
   st->show();*/
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    ui->widget->setBackground(QBrush(gradient));

    // create empty bar chart objects:
    QCPBars *regen = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);

    regen->setAntialiased(false); // gives more crisp, pixel aligned bar borders


    // set names and colors:

    regen->setName("accidents number");
    regen->setPen(QPen(QColor(0, 168, 140).lighter(180)));
    regen->setBrush(QColor(0, 168, 140));



    // prepare x axis with etat labels:
    QVector<double> ticks;
    QVector<QString> labels;

    QVector<double> regenData;


    ticks << 1 << 2 << 3 << 4 << 5 ;
    QSqlQuery q;
q.prepare("select TYPE ,count(ID)as somme from ACCIDENT group by TYPE ");

    if(q.exec()){
    while (q.next()) {


     labels << q.value(0).toString();

     regenData   << q.value(1).toDouble();

    }}
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);

    ui->widget->xAxis->setTicker(textTicker);
    ui->widget->xAxis->setTickLabelRotation(60);
    ui->widget->xAxis->setTickLength(0, 4);
    ui->widget->xAxis->setRange(0, 4);
    ui->widget->xAxis->setLabel("type of accident");

    ui->widget->xAxis->setBasePen(QPen(Qt::white));
    ui->widget->xAxis->setTickPen(QPen(Qt::white));
    ui->widget->xAxis->grid()->setVisible(true);
    ui->widget->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->widget->xAxis->setTickLabelColor(Qt::white);
    ui->widget->xAxis->setLabelColor(Qt::white);

    // prepare y axis:
    ui->widget->yAxis->setRange(0,10);
    ui->widget->yAxis->setPadding(5); // a bit more space to the left border
    ui->widget->yAxis->setLabel("number");
    ui->widget->yAxis->setBasePen(QPen(Qt::white));
    ui->widget->yAxis->setTickPen(QPen(Qt::white));
    ui->widget->yAxis->setSubTickPen(QPen(Qt::white));
    ui->widget->yAxis->grid()->setSubGridVisible(true);
    ui->widget->yAxis->setTickLabelColor(Qt::white);
    ui->widget->yAxis->setLabelColor(Qt::white);
    ui->widget->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    ui->widget->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

    // Add data:

    regen->setData(ticks, regenData);

    // setup legend:
    ui->widget->legend->setVisible(true);
    ui->widget->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->widget->legend->setBrush(QColor(255, 255, 255, 100));
    ui->widget->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->widget->legend->setFont(legendFont);
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    if(n==1){if(sound->state()==QMediaPlayer::PlayingState)
                sound->setPosition(0);
                else if (sound->state()==QMediaPlayer::StoppedState)
                    sound->play();
        ui->stackedWidget->setCurrentIndex(7);}
        else
        {if(sound1->state()==QMediaPlayer::PlayingState)
                sound1->setPosition(0);
                else if (sound1->state()==QMediaPlayer::StoppedState)
                    sound1->play();}

}

void second::on_pushButton_36_clicked()
{    if(n==1){if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        hide();
       uiemail *em= new uiemail;
       em->show();}
    else
    {if(sound1->state()==QMediaPlayer::PlayingState)
            sound1->setPosition(0);
            else if (sound1->state()==QMediaPlayer::StoppedState)
                sound1->play();}

}

void second::on_lineEdit_textEdited(QString s)
{
    if(sound->state()==QMediaPlayer::PlayingState)
            sound->setPosition(0);
            else if (sound->state()==QMediaPlayer::StoppedState)
                sound->play();
        accidentc ac;
       s=ui->lineEdit->text();
       //ui->lineEdit->clear();
        QSqlQueryModel *model=new  QSqlQueryModel();
        model=ac.rechercherad_accident(s);
        ui->tabaccident->setModel(model);
        ui->tabaccident->show();
        //ui->lineEdit->clear();
}
