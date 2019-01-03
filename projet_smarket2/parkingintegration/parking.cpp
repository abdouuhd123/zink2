#include "parking.h"
#include "parking.h"
#include "ui_parking.h"
#include "agent.h"
#include <QDialogButtonBox>
#include <QtDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QtMultimedia/QMediaPlayer>
#include "Place.h"
#include <QString>
#include <QSqlQueryModel>
#include "zone.h"
#include "connexionp.h"
#include <QMovie>
#include <QMediaPlayer>
#include "arduino.h"
#include "smarket.h"

parking::parking(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::parking)
{
    ui->setupUi(this);
     indice=-1;

/************************connexion arduino*******************************************/
     /// ARDUINO INITIALIZATION ///
                /*   int  ret=A.connect_arduino();
                   switch(ret){
                      case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
                          break;
                      case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
                         break;
                      case(-1):qDebug() << "arduino is not available";
                      }*/

                   QTimer *timer = new QTimer(this);
                   connect(timer, SIGNAL(timeout()), this, SLOT(capteur()));
                      timer->start(1000);

/***************************ajouter sound***********************************************/
    sound= new QMediaPlayer;
    sound->setMedia(QUrl("C:/Users/ASUS/Documents/projetsmarket/bienvenue.mp3"));
    sound3= new QMediaPlayer;
    sound3->setMedia(QUrl("C:/Users/ASUS/Documents/projetsmarket/place.mp3"));
    sound4= new QMediaPlayer;
    sound4->setMedia(QUrl("C:/Users/ASUS/Documents/projetsmarket/sound.mp3"));
// ui->arduino->setVisible(true);
 ui->confirmera->setVisible(true);

      ui->pushButton_afficher->setToolTip("afficher la zone<font color='blue'>");
      ui->pushButton_ajouter->setToolTip("ajouter une zone ");
      ui->pushButton_modifier->setToolTip("modifier une zone");
      ui->pushButton_supprimer->setToolTip("supprimer une zone");
      ui->ajouterplace->setToolTip("ajouter une place");
      ui->modifierplace->setToolTip("modifier une place");
      ui->supprimer_4->setToolTip("supprimer une place");
      ui->afficher_2->setToolTip("afficher les places");

     /****************affichage zone **************************/
       ui->tableView_2->setVisible(false);
       ui->tablzone->setVisible(false);
       ui->lineEdit_cherche->setVisible(false);
       ui->label_numz->setVisible(false);
/**********************animation admin client***********************************/

       QMovie* movie = new QMovie("C:/Users/abdel/Desktop/gif5.gif");
       ui->label_16->setMovie(movie);
       movie->start();
       connect(movie, &QMovie::finished, movie, &QMovie::stop);

       QMovie* movie2 = new QMovie("C:/Users/abdel/Desktop/gif4.gif");
       ui->label_17->setMovie(movie2);
       movie2->start();
       connect(movie2, &QMovie::finished, movie2, &QMovie::stop);

/********************page client******************************/
     ui->comboBox_3->setVisible(true);
       ui->comboBox_2->setVisible(false);
     ui->comboBox->setVisible(true);
     ui->confirmer->setVisible(false);
    //ui->label_4->setVisible(false);
     ui-> label_choisirplace->setVisible(true);
     ui->label_voiture1->setVisible(false);
     ui->label_24->setVisible(false);
     ui->label_28->setVisible(false);
     ui->label_29->setVisible(false);
     ui->label_30->setVisible(false);
     ui->label_27->setVisible(false);
     ui->label_38->setVisible(false);
     ui->label_placedispo->setVisible(false);
 /*voiture wel label 1**/ ui->label_voiture1->setVisible(false);
                          ui->label_24->setVisible(false);
 /*voiture wel label 2**/ ui->label_37->setVisible(false);
                              ui->label_29->setVisible(false);
         /*voiture wel label 3**/ ui->label_36->setVisible(false);
                                  ui->label_41->setVisible(false);
         /*voiture wel label 4**/ ui->label_35->setVisible(false);
                                  ui->label_40->setVisible(false);
         /*voiture wel label 5**/ ui->label_4->setVisible(false);
                                  ui->label_39->setVisible(false);
         /*voiture wel label 5**/
                                  ui->label_28->setVisible(false);


 ui->comboBox_3->addItem("6");



  Zone z;

    ui->choisirzone->setModel(z.comboBoxdansajouterplace());
    ui->comboBox_etat->addItem("0");
    ui->comboBox_etat->addItem("1");
    ui->tableView->setModel(tmpplace.afficher());


    QSqlRelationalTableModel *model2=new QSqlRelationalTableModel(this);
    model2->setTable("ZONE");
    model2->setRelation(1,QSqlRelation("PLACE","NUMP","ETAT"));
    model2->select();
    ui->tablzone->setModel(tmpzone.afficherzone());

/*****************afficher dans combobox les numero place:client************************/
 QSqlQuery qry2;
 int n = 0;
 qry2.prepare("select * from ZONE ");

 QString numero;
  if(qry2.exec())
    {
         while(qry2.next())
         {
           int  n = 0;

              numero = qry2.value(0).toString();

             QSqlQuery qry3;
             qry3.prepare("select * from place where numero = '"+numero+"'");
             qDebug()<<"fgh";
             if(qry3.exec())
             {
                 while(qry3.next())
                 {
                     n += qry3.value(1).toInt();
                     qDebug()<<QString::number(n);
                 }
                 qDebug()<<"fgh";
             }
             if(n < 6)
                 ui->comboBox->addItem(numero);
         }
    }
/*Zone z1;
z1.nombreplaceinferieurasix();
for(QVector<QString>::iterator i=z1.dispo.begin();i!=z1.dispo.end();i++)
     { ui->comboBox->addItem(*i);

 qDebug()<<"place"<<z.nombreplaceinferieurasix();*/

  /****************************************************/






           }




parking::~parking()
{
    delete ui;
}

void parking::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_pushButton_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_pushButton_3_clicked()
{   agent a;
    a.setId( ui->lineEdit_identifiant->text());
    a.setMp(ui->lineEdit_mp->text());

   if(a.connexion()==true)
    {   ui->stackedWidget->setCurrentIndex(4);

    }
    else
    {
        QMessageBox :: warning(this,"ton mtp est incorrete","incorrecte :/");
    }
;

}
void parking::capteur(){
   // QString d=A.read_from_arduino();
    int i,j,t=0,t1=0;

/*for(i=0; i<d.size(); i++)
{
    if (d[i]=='d')
    {
        if (d[i+1]=='3')
              t=1;
        if (d[i+1]=='2')
              t=2;

    }
}
for(j=0; j<d.size(); j++)
    {
    if (d[j]=='c')
    {
        if (d[j+1]=='0')
              t1=1;
        if (d[j+1]=='1')
              t1=2;

    }

}
      if(t==1)
      {
          QSqlQuery qry;
          qry.prepare("UPDATE PLACE SET etat=1 where nump=100");
          qry.exec();
           ui->tableView->setModel(tmpplace.afficher());

      }
      if(t==2)
      {
          QSqlQuery qry;
          qry.prepare("UPDATE PLACE SET etat=0 where nump=100");
          qry.exec();
           ui->tableView->setModel(tmpplace.afficher());

      }

      if(t1==1)
      {
          QSqlQuery qry;
          qry.prepare("UPDATE PLACE SET etat=0 where nump=101");
          qry.exec();
           ui->tableView->setModel(tmpplace.afficher());

      }

      if(t1==2)
      {
          QSqlQuery qry;
          qry.prepare("UPDATE PLACE SET etat=1 where nump=101");
          qry.exec();
           ui->tableView->setModel(tmpplace.afficher());

      }

      qDebug() << "Arduino :" << d;*/
}


void parking::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_pushButton_5_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void parking::on_pushButton_6_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void parking::on_pushButton_client_clicked()
{
    sound->play();
    ui->label_voiture1->setVisible(false);
                             ui->label_24->setVisible(false);
    /*voiture wel label 2**/ ui->label_37->setVisible(false);
                                 ui->label_29->setVisible(false);
            /*voiture wel label 3**/ ui->label_36->setVisible(false);
                                     ui->label_41->setVisible(false);
            /*voiture wel label 4**/ ui->label_35->setVisible(false);
                                     ui->label_40->setVisible(false);
            /*voiture wel label 5**/ ui->label_4->setVisible(false);
                                     ui->label_39->setVisible(false);
            /*voiture wel label 5**/
                                     ui->label_28->setVisible(false);

    ui->comboBox_3->setVisible(true);
      ui->comboBox_2->setVisible(false);
    ui->comboBox->setVisible(true);
    ui->confirmer->setVisible(false);
   //ui->label_4->setVisible(false);
    ui-> label_choisirplace->setVisible(true);
    ui->label_voiture1->setVisible(false);
    ui->label_24->setVisible(false);
    ui->label_28->setVisible(false);
    ui->label_29->setVisible(false);
    ui->label_30->setVisible(false);
    ui->label_27->setVisible(false);
    ui->label_38->setVisible(false);
    ui->label_placedispo->setVisible(false);
    ui->retour->setVisible(true);
    ui->ok->setVisible(true);
     ui->arduino->setVisible(true);
      ui->bienvenue->setVisible(true);
       ui->label_25->setVisible(true);
       ui->label_26->setVisible(true);
     ui->lineEdit->setVisible(false);
      ui->confirmera->setVisible(false);
       ui->confirmera->setVisible(false);

    ui->stackedWidget->setCurrentIndex(6);
}


void parking::on_pushButton_admin_clicked()
{if(sound4->state()==QMediaPlayer::PlayingState)
        sound4->setPosition(0);
        else if (sound4->state()==QMediaPlayer::StoppedState)
            sound4->play();

    ui->stackedWidget->setCurrentIndex(3);


 }



void parking::on_pushButton_ajouter_clicked()
{     sound4->play();
     ui->stackedWidget_2->setCurrentIndex(2);
}

void parking::on_pushButton_9_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(1);
}





void parking::on_afficher_clicked()
{     sound4->play();
     ui->stackedWidget_2->setCurrentIndex(1);
}

void parking::on_pushButton_supprimer_clicked()
{   sound4->play();
    ui->stackedWidget_2->setCurrentIndex(3);
}

void parking::on_supprimer_2_clicked()
{sound4->play();
    ui->stackedWidget_2->setCurrentIndex(3);
}

void parking::on_supprimer_clicked()
{   sound4->play();
    ui->stackedWidget_2->setCurrentIndex(3);
}

void parking::on_pushButton_modifier_clicked()
{sound4->play();
    ui->stackedWidget_2->setCurrentIndex(4);
}

void parking::on_modifierzone_clicked()
{sound4->play();
    ui->stackedWidget_2->setCurrentIndex(4);
}

void parking::on_ajouterzone_2_clicked()
{sound4->play();
    ui->stackedWidget_2->setCurrentIndex(5);
}

void parking::on_modifier_2_clicked()
{    sound4->play();
    ui->stackedWidget_2->setCurrentIndex(4);
}

void parking::on_ajouterzone_clicked()
{ sound4->play();
    ui->stackedWidget_2->setCurrentIndex(2);
}

void parking::on_kk_clicked()
{ sound4->play();
    ui->stackedWidget_2->setCurrentIndex(5);
}

void parking::on_pushButton_6hhh_clicked()
{ sound4->play();
    ui->stackedWidget_2->setCurrentIndex(5);
}

void parking::on_boutonajouter_clicked()
{ sound4->play();
    ui->stackedWidget_2->setCurrentIndex(2);
}

void parking::on_ajouter_clicked()
{   sound4->play();
    ui->stackedWidget_2->setCurrentIndex(2);
}

void parking::on_supprimer_3_clicked()
{   sound4->play();
    ui->stackedWidget_2->setCurrentIndex(3);
}

void parking::on_modifier_clicked()
{   sound4->play();
    ui->stackedWidget_2->setCurrentIndex(4);
}

void parking::on_afficherrecherchezone_clicked()
{ sound4->play();
    ui->stackedWidget_2->setCurrentIndex(1);
}

void parking::on_afficherrecherche_clicked()
{ sound4->play();
    ui->stackedWidget_2->setCurrentIndex(1);
}



void parking::on_ajouterplace_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(3);
}

void parking::on_afficher_2_clicked()
{
 /*   ui->gererplace_3->setCurrentIndex(2);
    QString a=A.read_from_arduino();
    qDebug()  <<"ARDUINO :"<< a;
    if(a=="1")
    {
     ui->label_32->setText("1");
    }
    if(a=="0")
    {
     ui->label_32->setText("0");
    }*/
}

void parking::on_supprimer_4_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(4);
}

void parking::on_modifierplace_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(1);
}

void parking::on_supprimerplace_4_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(4);
}

void parking::on_ajouterplace_5_clicked()
{   sound4->play();
    ui->gererplace_3->setCurrentIndex(3);
}

void parking::on_afficherplace_4_clicked()
{   sound4->play();
    ui->gererplace_3->setCurrentIndex(2);
}

void parking::on_ajouterplace_4_clicked()
{  sound4->play();
    ui->gererplace_3->setCurrentIndex(3);
}

void parking::on_supprimerplace_3_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(4);
}

void parking::on_modifierplace_4_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(1);
}

void parking::on_afficherplace_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(2);
}

void parking::on_supprimerplace_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(4);
}

void parking::on_modifierplace_2_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(1);
}

void parking::on_afficherplace_2_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(2);
}

void parking::on_ajouterplace_2_clicked()
{ sound4->play();

}

void parking::on_modifierplace_3_clicked()
{ sound4->play();
    ui->gererplace_3->setCurrentIndex(1);
}

void parking::on_confirmerajout_clicked()
{ sound4->play();
    int num= ui->numeroaajouter->text().toInt();
 // int etat= ui->lineEdit_2->text().toInt();
 //int etat=0;
    int etat= ui->comboBox_etat->currentText().toInt();
    int id = ui->choisirzone->currentText().toInt();
      Place p (num,etat);
      bool test= p.ajouter(id);
        if(test)
      { ui->tableView->setModel(tmpplace.afficher());//refresh
      QMessageBox::information(nullptr, QObject::tr("place Ajoutée !"),
                        QObject::tr("Votre place Est Ajoutée !\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

      }
        else
            QMessageBox::critical(nullptr, QObject::tr("place Non Ajoutée !"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        Zone z;
        ui->choisirzone->setModel(z.comboBoxdansajouterplace());
        ui->comboBox_etat->addItem("0");
        ui->comboBox_etat->addItem("1");
}

void parking::on_confirmerajouterzone_clicked()
{ sound4->play();
    int numero= ui->lineEdit_numzone->text().toInt();
    int nombre= ui->lineEdit_nombreplace->text().toInt();
     QString n= ui->lineEdit_nombreplace->text();
    int etat= ui->lineEdit_etat->text().toInt();
    Zone z (numero,nombre,etat);
if(z.verifier(n) && (nombre<=6) &&(etat==1 ||etat==0))
{
      bool test= z.ajouterzone();
        if(test)
      { ui->tablzone->setModel(tmpzone.afficherzone());//refresh
      QMessageBox::information(nullptr, QObject::tr("zone Ajoutée !"),
                        QObject::tr("Votre zone Est Ajoutée !\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

      }
        else
            QMessageBox::critical(nullptr, QObject::tr("zone Non Ajoutée !"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}
else
{   QMessageBox::critical(nullptr, QObject::tr("zone Non Ajoutée !"),
    QObject::tr("Erreur le nombre maximale de place de zone est 6 ! et l'etat doit etre 0 ou 1.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
}
}

void parking::on_modifier_3_clicked()
{ sound4->play();
    int Numero= ui->lineEdit_num->text().toInt();
    int NOMBRE= ui->lineEdit_nom->text().toInt();
           if(NOMBRE <=6)
       {   Zone z(0,NOMBRE,0);
           z.modifierzone(Numero);
           ui->tablzone->setModel(tmpzone.afficherzone());//refresh
           QMessageBox::information(nullptr, QObject::tr(" zone modifiée !"),
           QObject::tr(" Votre zone modifiée !\n""Click Cancel to exit."), QMessageBox::Cancel);

       }
    else

    QMessageBox::critical(nullptr, QObject::tr("le nombre doit etre <=6 !"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
}

void parking::on_pushButton_suppzone_clicked()
{     sound4->play();
    QMessageBox msgBox;
     msgBox.setStyleSheet("background-color: gray ; color : gray");
     QMessageBox ::question(this, tr("confirmation"),
                                                tr("t'es sur de supprimer la zone?.\n"
                                                   "confirmer?"),
                                                QMessageBox::Yes | QMessageBox::No
                                              );

    int numm = ui->lineEdit_suppzone->text().toInt();
     bool test=tmpzone.supprimerzone(numm);
      QMessageBox::StandardButton reply;
       if(reply==QMessageBox::Yes)
      { if(test)
        {   ui->tablzone->setModel(tmpzone.afficherzone());
            QMessageBox::information(nullptr, QObject::tr("zone Supprimée !"),
                        QObject::tr("Votre zone est supprimée.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("zone Non Supprimée !"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);}
}

void parking::on_pushButton_confirmermodification_clicked()
{ sound4->play();
    int Numero= ui->lineEdit_numplace->text().toInt();
    int etat= ui->lineEdit_etatmodifier->text().toInt();
      Place p(Numero,etat);
      if((etat==0) ||(etat==1))
        {  p.modifierplace(Numero);
      ui->tableView->setModel(tmpplace.afficher());//refresh
      QMessageBox::information(nullptr, QObject::tr(" place modifiée !"),
        QObject::tr(" Votre place modifiée !\n"
            "Click Cancel to exit."), QMessageBox::Cancel);
        }
      else

      QMessageBox::critical(nullptr, QObject::tr("l'etat doit etre 1 ou 0 !"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void parking::on_pushButton_confirmersupprimer_clicked()
{  sound4->play();  QMessageBox msgBox;
    QMessageBox ::question(this, tr("confirmation"),
                                               tr("t'es sur de supprimer la place?.\n"
                                                  "confirmer?"),
                                               QMessageBox::Yes | QMessageBox::No
                                             );


       msgBox.setStyleSheet(QString::fromUtf8("background-color: rgb(241, 241, 241);"));

            msgBox.show();

QMessageBox::StandardButton reply;

    int numm = ui->lineEdit_numplaceasupprimer->text().toInt();
        bool test=tmpplace.supprimer(numm);

        if(reply==QMessageBox::Yes)
       { if(test)
        { ui->tableView->setModel(tmpplace.afficher());
            QMessageBox::information(nullptr, QObject::tr("Place Supprimée !"),
                        QObject::tr("Votre Place est supprimée.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
       //return 1;
        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Place Non Supprimée !"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);}
      //return 0;
}

void parking::on_place_clicked()
{    sound4->play();
    ui->stackedWidget->setCurrentIndex(5);
}

void parking::on_zone_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(1);
}

void parking::on_verifier_clicked()
{    ui->label_voiture1->setVisible(false);
     ui->label_24->setVisible(false);
/*voiture wel label 2**/ ui->label_37->setVisible(false);
         ui->label_29->setVisible(false);
/*voiture wel label 3**/ ui->label_36->setVisible(false);
             ui->label_41->setVisible(false);
/*voiture wel label 4**/ ui->label_35->setVisible(false);
             ui->label_40->setVisible(false);
/*voiture wel label 5**/ ui->label_4->setVisible(false);
             ui->label_39->setVisible(false);
/*voiture wel label 5**/
             ui->label_28->setVisible(false);

    ui->comboBox_3->setVisible(true);
    ui->comboBox_2->setVisible(false);
  ui->comboBox->setVisible(true);
  ui->confirmer->setVisible(false);
 //ui->label_4->setVisible(false);
  ui-> label_choisirplace->setVisible(true);
  ui->label_voiture1->setVisible(false);
  ui->label_24->setVisible(false);
  ui->label_28->setVisible(false);
  ui->label_29->setVisible(false);
  ui->label_30->setVisible(false);
  ui->label_27->setVisible(false);
  ui->label_38->setVisible(false);
  ui->label_placedispo->setVisible(false);
  ui->retour->setVisible(true);
  ui->ok->setVisible(true);
   ui->arduino->setVisible(true);
    ui->bienvenue->setVisible(true);
     ui->label_25->setVisible(true);
     ui->label_26->setVisible(true);
   ui->lineEdit->setVisible(false);
    ui->confirmera->setVisible(false);
     ui->confirmera->setVisible(false);
                                 ui->label_28->setVisible(false);
    ui->stackedWidget->setCurrentIndex(6);
}

void parking::on_retour_3_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_retour_2_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_retour_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_retour_5_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_retour_6_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_retour_7_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_retour_8_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_retour_4_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(4);
}

void parking::on_Retour_clicked()
{ sound4->play();
     ui->stackedWidget->setCurrentIndex(2);
}

void parking::on_ok_clicked()
{     sound3->play();
    ui->retour->setVisible(true);
      ui->arduino->setVisible(false);
      ui->label_choisirplace->setVisible(false);
         ui->arduino->setVisible(false);
      ui->label_placedispo->setVisible (true);
      ui->ok->setVisible(false);
      ui->label_25->setVisible(false);
      ui->label_26->setVisible(false);

      ui->comboBox->setVisible(false);
      ui->label_27->setVisible(true);
      ui->comboBox_2->setVisible(true);
      ui->confirmer->setVisible(true);
       //ui->label_4->setVisible(true);
      ui->bienvenue->setVisible(false);
      ui->label_voiture1->setVisible(false);
      ui->label_24->setVisible(true);

      ui->label_28->setVisible(true);
      ui->label_29->setVisible(true);
         ui->label_41->setVisible(true);
            ui->label_40->setVisible(true);
               ui->label_39->setVisible(true);
      ui->label_30->setVisible(true);
/***************combobox_2 dans place***************************/
/*Place p5;
QString  n=ui->comboBox->currentText();
p5.placearduinocombobo(n);

      ui->label_24->setText(p5.k);
        ui->label_29->setText(p5.l);

       ui->label_28->setText(p5.m);

        ui->label_41->setText(p5.n);

   ui->label_40->setText(p5.o);


         ui->label_39->setText(p5.p);*/

  QSqlQuery qry4;
  qry4.prepare("select * from place where numero = '"+ui->comboBox->currentText()+"'");
    if(qry4.exec())
      {    int i=0;
               while(qry4.next())
               {   int n =0;


                   QString numero = qry4.value(0).toString();



                   QSqlQuery qry3;
                   qry3.prepare("select * from PLACE where NUMP = '"+numero+"'");



                    n+= qry3.value(1).toInt();
                   i+=qry3.value(1).toInt();

                   if(i==0)
                       ui->label_24->setText(qry4.value(0).toString());


                      if(i==1)
                         ui->label_29->setText(qry4.value(0).toString());


                       if(i==2)
                        ui->label_28->setText(qry4.value(0).toString());


                   if(i==3)
                         ui->label_41->setText(qry4.value(0).toString());

                  if(i==4)
                    ui->label_40->setText(qry4.value(0).toString());



                     if(i==5)
                          ui->label_39->setText(qry4.value(0).toString());



i++;

                  qDebug()<<"fgh";
                   if(qry3.exec())
                   {
                       while(qry3.next())
                       {
                           n+= qry3.value(1).toInt();
                           qDebug()<<QString::number(n);

                       }
                       qDebug()<<"fgh";
                         if(n ==0)
                        {   ui->comboBox_2->addItem(numero);

                        }

                   }





 /*************************************************************************/





               }

}
}
void parking::on_confirmer_clicked()
{  sound4->play();
   /* QSqlQuery qry;
    QString Numero= ui->comboBox_2->currentText();
    qry.prepare("UPDATE PLACE SET etat=1 where NUMP='"+Numero+"'");
    qry.exec();*/



   // int Numero= ui->comboBox_2->currentIndex();
          /* int etat= ui->lineEdit_etatmodifier->text().toInt();*/



       //   ui->tableView->setModel(tmpplace.afficher());
    QString zone = ui->comboBox->currentText();
    QString place = ui->comboBox_2->currentText();
    QString zonechoisi = "La Zone Choisi Est : ";
    QString z = zonechoisi+zone;
    QString placechoisi = "La Place Choisi Est : ";
   QString p = placechoisi+place;
     notifyIcon=new QSystemTrayIcon(this);
     notifyIcon->setIcon(QIcon("C:/Users/abdel/Desktop/affiche 1.png"));
     notifyIcon->show();
     QString titre=ui->comboBox_2->currentText();
     notifyIcon->showMessage(z,p);
   /*  int Numero= ui->comboBox_2->currentText().toInt();
     int etat= 1;
       Place p2(Numero,etat);
       ui->tableView->setModel(tmpplace.afficher());*/
     //  A.write_to_arduino("v");

}

void parking::on_lineEdit_cherche_textChanged(const QString &arg1)
{
    tmpzone.set_num( ui->lineEdit_cherche->text().toInt());
    ui->tableView_2->setModel(tmpzone.chercher_avance());
}

void parking::on_chercherplace_clicked()
{   sound4->play();
    ui->tableView_2->setVisible(true);
    ui->tablzone->setVisible(false);
    ui->lineEdit_cherche->setVisible(true);
    ui->label_numz->setVisible(true);
    ui->pushButton_7->setVisible(false);

}

void parking::on_pushButton_affichz_clicked()
{     sound4->play();
    ui->tableView_2->setVisible(false);
    ui->tablzone->setVisible(true);
    ui->lineEdit_cherche->setVisible(false);
    ui->label_numz->setVisible(false);
       ui->pushButton_7->setVisible(true);

}

void parking::on_test_clicked()
{


   /* QString a=A.read_from_arduino();
    qDebug()  <<"ARDUINO :"<< a;

    if(a=="1\r\n")
    {
     ui->label_32->setText("1");
    }
    if(a=="0\r\n")
    {
     ui->label_32->setText("0");
    }
*/
}

void parking::on_test2_clicked()
{
   /* QSqlQuery qry;
    qry.prepare("UPDATE PLACE SET etat=1 where nump=100");
    qry.exec();
    int etat,i=1;
 ui->tableView->setModel(tmpplace.afficher());
    QString a=A.read_from_arduino();

    qDebug()  <<"ARDUINO :"<< a;
       if(a=="1\r\n")
    {
           QSqlQuery qry;
           qry.prepare("UPDATE PLACE SET etat=1 where nump=100");
           qry.exec();
            Place  p(100,1);

           p.modifierplace(100);
    }
       else if(a=="0\r\n")
      {  etat=0;

           QSqlQuery qry;
           qry.prepare("UPDATE PLACE SET etat=0 where nump=100");
           qry.exec();
            Place  p(100,0);

           p.modifierplace(100);

      }
*/
}

void parking::on_label_choisirclientadmin_linkActivated(const QString &link)
{

}

void parking::on_page_choisirclientadmin_customContextMenuRequested(const QPoint &pos)
{

}

void parking::on_pushButton_7_clicked()
{   sound4->play();
    Zone z ;
    ui->tablzone->setModel(z.tri_par_numero1());
}

void parking::on_filtrer_clicked()
{   sound4->play();
    Place p;
       ui->tableView->setModel(p.tri_par_numero2());
}



void parking::on_pushButton_afficher_clicked()
{
    sound4->play();
     ui->stackedWidget_2->setCurrentIndex(1);
}

void parking::on_arduino_clicked()
{   ui->comboBox_3->setVisible(false);
    ui->retour->setVisible(true);
    ui->ok->setVisible(false);
    ui->confirmera->setVisible(true);
    ui->label_placedispo->setVisible (true);
   ui->label_25->setVisible(false);
    ui->label_26->setVisible(false);
    ui->comboBox->setVisible(false);
ui->lineEdit->setVisible(true);
    ui->confirmer->setVisible(false);

    ui->label_39->setVisible(true);
    ui->label_30->setVisible(true);
     ui->label_29->setVisible(true);
      ui->label_40->setVisible(true);


      /****************labeelnumero6:100 et 101****************************/
      Place p;
    QString a=p.k;
    QString b=p.l;
    p.placearduino6();

 ui->label_29->setText(p.k);
  ui->label_40->setText(p.l);
  qDebug()<<b;

/**************************************************************/

      QSqlQuery qry2;
      qry2.prepare("select NUMERO from ZONE where NUMERO='"+ui->comboBox_3->currentText()+"'");
      QString numero;
      if(qry2.exec())
      {  QString m;

           while(qry2.next())
           {
             int  p = 0;
               numero =qry2.value(0).toString();

               QSqlQuery qry3;
               QSqlQuery qry1;
              qry1.prepare("select * from PLACE where NUMP = 101");
              QSqlQuery qry6;
               qry6.prepare("select * from PLACE where NUMP = 100");
               if(qry6.exec())
               {
                   while(qry6.next())
                   {  QString n=qry6.value(1).toString();


                       if(n=='1')
                              ui->label_35->setVisible(true);



                    //   qDebug()<<QString::number(p);
                   }
                  // qDebug()<<"fgh";

               }


if(qry1.exec())
{
    while(qry1.next())
    {  QString m=qry1.value(1).toString();

        if(m=='1')
               ui->label_37->setVisible(true);


        qDebug()<<QString::number(p);
    }
    qDebug()<<"fgh";

}




}
}
}
void parking::on_confirmera_clicked()
{    int Numero3= ui->lineEdit->text().toInt();
      /* int etat= ui->lineEdit_etatmodifier->text().toInt();*/
         Place p(Numero3,1);

           {  p.modifierplace(Numero3);
         ui->tableView->setModel(tmpplace.afficher());
    sound4->play();
       QString zone = "6";
        QString place =  ui->lineEdit->text();
        QString zonechoisi = "La Zone Choisi Est : ";
        QString z = zonechoisi+zone;
        QString placechoisi = "La Place Choisi Est : ";
       QString p = placechoisi+place;
         notifyIcon=new QSystemTrayIcon(this);
         notifyIcon->setIcon(QIcon("C:Users/abdel/Desktop/affiche 1.png"));
         notifyIcon->show();
         QString titre=ui->comboBox_2->currentText();
         notifyIcon->showMessage(z,p);
        /* int Numero= ui->comboBox_2->currentText().toInt();
         int etat= 1;
           Place p2(Numero,etat);
           ui->tableView->setModel(tmpplace.afficher());*/
           A.write_to_arduino("v");
}
}


void parking::on_comboBox_activated(const QString &arg1)
{

}

void parking::on_pushButton_37_clicked()
{
    hide();
    smarket *sm=new smarket;
    sm->show();
}
