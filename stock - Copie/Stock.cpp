#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include "fournisseur.h"
#include "rayon.h"
#include "commande.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QDebug>
#include <QUrl>
#include <QFileDialog>
#include <QDesktopServices>
#include <QTableView>
#include <QSqlError>
#include <QObject>
#include <QStringList>
#include <QtCore>
#include <QKeyEvent>
#include <smtp.h>
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include <QPdfWriter>
#include <QtPrintSupport/QPrinter>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->hide();
    ui->stackedWidget_2->hide();
    ui->stackedWidget_3->hide();
    ui->stackedWidget_4->hide();

}

MainWindow::~MainWindow()
{
    delete ui;


}


void MainWindow::on_produit_clicked()
{
ui->stackedWidget->show();
}



void MainWindow::on_prec_clicked()
{
    ui->stackedWidget->hide();
}

void MainWindow::on_ajputerP_clicked()
{
   ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_doneP_clicked()
{
    bool test;
    int ok=100;



        QString Nom=ui->nom->text();
         int Id_produit=ui->id->text().toInt();
        float Prix=ui->prix->text().toInt();
        QString Duree_conservatoire=ui->duree->text();
        int Code_a_barre=ui->code->text().toInt();
        int Quantite_rayon=ui->quantite_r->text().toInt();
        int Quantite_stock=ui->quantite_s->text().toInt();

        QString Prixver=ui->prix->text();
        QString CodeVer=ui->code->text();
        QString quantiterVer=ui->quantite_r->text();
        QString quantitesVer=ui->quantite_s->text();
        QString idVer=ui->id->text();

        Produit p(Nom,Id_produit,Prix,Duree_conservatoire,Code_a_barre,Quantite_rayon,Quantite_stock);
        ok=p.verifier_saisie_donnees(Prixver,CodeVer,quantiterVer,quantitesVer,idVer);
        if(ok==0)
            QMessageBox::information(this,"information","faute dans la saisie du nom");
        else if(ok==1)
            QMessageBox::information(this,"information","faute dans la saisie du prix");
        else if(ok==2)
            QMessageBox::information(this,"information","faute dans la saisie du code a barre");
        else if(ok==3)
            QMessageBox::information(this,"information","faute dans la saisie du quantite stock");
        else if(ok==4)
            QMessageBox::information(this,"information","faute dans la saisie du quantite rayon");
        else if(ok==5)
            QMessageBox::information(this,"information","faute dans la saisie du id produit");
        else if(ok==100)
        {
        Produit p(Nom,Id_produit,Prix,Duree_conservatoire,Code_a_barre,Quantite_rayon,Quantite_stock);
        test=p.ajouter() ;
        }
        if(test)
        QMessageBox::information(this,"succes","PRODUIT AJOUTE AVEC SUCCES");
        else
        QMessageBox::information(this,"failure","PRODUIT NON AJOUTE");
    }

void MainWindow::on_precP_clicked()
{
    ui->widget_2->hide();
    ui->widget_1->show();

}

void MainWindow::on_afficherP_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlQueryModel *model;
    Produit p("",0,0,0,0,0,0);
        model = p.afficher();
        ui->tableView->setModel(model);
    if (model->lastError().isValid())
        qDebug() << model->lastError();
    ui->tableView->show();
}


void MainWindow::on_supprimerP_2_clicked()
{

}

void MainWindow::on_precAP_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_supprimerP_clicked()
{
    Produit p("",0,0,"",0,0,0);
        int id1=ui->lineEdit_recherche->text().toInt();
        p.supprimerProduit(id1);
        ui->tableView->show();
        ui->lineEdit_recherche->clear();
}

void MainWindow::on_modifierP_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void MainWindow::on_done_m_p_clicked()
{
    QString Nom=ui->nom_2->text();
        int Id_produit=ui->id_2->text().toInt();
        float Prix=ui->prix_2->text().toInt();
        QString Duree_conservatoire=ui->duree_2->text();
        int Code_a_barre=ui->code_2->text().toInt();
        int Quantite_rayon=ui->quantite_r_2->text().toInt();
        int Quantite_stock=ui->quantite_s_2->text().toInt();
        Produit p(Nom,Id_produit,Prix,Duree_conservatoire,Code_a_barre,Quantite_rayon,Quantite_stock);
        p.modifier(Nom,Id_produit,Prix,Duree_conservatoire,Code_a_barre,Quantite_rayon,Quantite_stock);
}

void MainWindow::on_prec_m_p_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}
//------------fournisseur------------//

void MainWindow::on_fournisseur_clicked()
{
 ui->stackedWidget_2->show();
}

void MainWindow::on_ajouterF_clicked()
{
   ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_doneF_clicked()
{
    int ok=100;
    bool test;

        int Id_fournisseur=ui->id_3->text().toInt();
        QString Nom=ui->nom_3->text();
       QString Adresse=ui->adresse->text();
       int Telephone=ui->tel->text().toInt();
               QString TelVerif=ui->tel->text();
               QString idfVerif=ui->id_3->text();

       Fournisseur f(Id_fournisseur,Nom,Adresse,Telephone);
       ok=f.verifier_saisie_donnees(TelVerif ,idfVerif);
       if(ok==0)
           QMessageBox::information(this,"information","faute dans la saisie du id_fournisseur");
       else if(ok==1)
           QMessageBox::information(this,"information","faute dans la saisie du nom");
       else if(ok==2)
           QMessageBox::information(this,"information","faute dans la saisie du adresse");
       else if(ok==3)
           QMessageBox::information(this,"information","faute dans la saisie du telephone");
       else if(ok=100)
       {
       Fournisseur f(Id_fournisseur,Nom,Adresse,Telephone);
       test=f.ajouter() ;
       }
       ui->id_3->clear();
       ui->nom_3->clear();
       ui->adresse->clear();
       ui->tel->clear();
       if(test)
       QMessageBox::information(this,"succes","FOURNISSEUR AJOUTE AVEC SUCCES");
       else
       QMessageBox::information(this,"failure","FOURNISSEUR NON AJOUTE");
}

void MainWindow::on_precF_2_clicked()
{
  ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_modifierF_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void MainWindow::on_doneF_2_clicked()
{
    int Id_fournisseur=ui->id_4->text().toInt();
    QString Nom=ui->nom_4->text();
   QString Adresse=ui->adresse_2->text();
   int Telephone=ui->tel_2->text().toInt();

        Fournisseur f(Id_fournisseur,Nom,Adresse,Telephone);

        f.modifier(Id_fournisseur,Nom,Adresse,Telephone) ;
       ui->id_4->clear();
       ui->nom_4->clear();
       ui->adresse_2->clear();
       ui->tel_2->clear();
}

void MainWindow::on_precF_3_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_idC_clicked()
{
   // Fournisseur f;
    //ui->id_4->setModel(f.Check_id());
}

void MainWindow::on_rechercheF_clicked()
{

}

void MainWindow::on_supprimerF_clicked()
{
    QSqlQueryModel *model;
    Fournisseur f(0,"","",0);
        int id1=ui->lineEdit_rechercheF->text().toInt();
        f.supprimerFournisseur(id1);
            model = f.afficher();
            ui->tableView_2->setModel(model);
        ui->tableView->show();
        ui->lineEdit_rechercheF->clear();
}

void MainWindow::on_PrecFA_clicked()
{
  ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_afficherF_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
    QSqlQueryModel *model;
    Fournisseur f(0,"","",0);
        model = f.afficher();
        ui->tableView_2->setModel(model);
    if (model->lastError().isValid())
        qDebug() << model->lastError();
    ui->tableView_2->show();
}

void MainWindow::on_iddd_clicked()
{
    Fournisseur f;
      ui->idd->setModel(f.Check_id());
}

void MainWindow::on_emailF_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(4);
}

void MainWindow::on_precFF_clicked()
{
   ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_envoyer_clicked()
{
    QString receiver=ui->mail->text();
    QString objet=ui->idf->text();
    QString contenu=ui->contenu_mail->toPlainText();
    Smtp* smtp = new Smtp("malek.hen01@gmail.com", "20345891Melek", "smtp.gmail.com");
                    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

                    smtp->sendMail("melek.hentati@esprit.tn","melek.hentati@esprit.tn", objet,contenu);

}

void MainWindow::on_precF_clicked()
{
    ui->stackedWidget_2->hide();
}

//--------------------------------------**RAYON**-----------------------------------------------------------//

void MainWindow::on_ajouterR_clicked()
{
ui->stackedWidget_3->setCurrentIndex(1);
}

void MainWindow::on_modifierR_clicked()
{
ui->stackedWidget_3->setCurrentIndex(2);
}

void MainWindow::on_afficherR_clicked()
{
ui->stackedWidget_3->setCurrentIndex(3);
QSqlQueryModel *model;
rayon r("",0,0);
    model = r.afficher();
    ui->tableView_3->setModel(model);
if (model->lastError().isValid())
    qDebug() << model->lastError();
ui->tableView_3->show();
}

void MainWindow::on_htR_clicked()
{

}

void MainWindow::on_precR_clicked()
{
ui->stackedWidget_3->hide();
}

void MainWindow::on_PrecRA_clicked()
{
   ui->stackedWidget_3->setCurrentIndex(0);
}

void MainWindow::on_doneR_clicked()
{
    bool test;


        QString nom_produit=ui->nomPR->currentText();
        int  etat=ui->etat->text().toInt();
        int  id_rayon=ui->idR->text().toInt();


        rayon r(nom_produit,id_rayon,etat);
        test=r.ajouter() ;
        ui->nomPR->clear();
        ui->etat->clear();
        ui->idR->clear();
        if(test)
        QMessageBox::information(this,"succes","RAYON AJOUTE AVEC SUCCES");
        else
        QMessageBox::information(this,"failure","RAYON NON AJOUTE");
}

void MainWindow::on_rayon_clicked()
{
     ui->stackedWidget_3->show();
}

void MainWindow::on_doneRM_clicked()
{
    QString nom_produit=ui->nomR->text();
    int  etat=ui->etatR->text().toInt();
    int  id_rayon=ui->idRR->text().toInt();

        rayon r(nom_produit,id_rayon,etat);
        r.modifier(nom_produit,id_rayon,etat) ;
        ui->nomR->clear();
        ui->etatR->clear();
        ui->idRR->clear();
}

void MainWindow::on_iddR_clicked()
{
    rayon r;
      ui->comboBox->setModel(r.Check_id());
}

void MainWindow::on_precRM_clicked()
{
 ui->stackedWidget_3->setCurrentIndex(0);
}

void MainWindow::on_supprimerR_clicked()
{
    QSqlQueryModel *model;
    rayon r("",0,0);
        int id1=ui->lineEdit_rechercheR->text().toInt();
        r.supprimer(id1);
            model = r.afficher();
            ui->tableView_3->setModel(model);
        ui->tableView_3->show();
        ui->lineEdit_rechercheR->clear();
}

void MainWindow::on_rechercheR_clicked()
{
    rayon r;
           QString s=ui->lineEdit_rechercheR->text();
            QSqlQueryModel *model=new  QSqlQueryModel();
            model=r.rechercher(s);
            ui->tableView_3->setModel(model);
            ui->tableView_3->show();

            ui->lineEdit_rechercheR->clear();
}

void MainWindow::on_precRA_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(0);
}
void MainWindow::on_nomproduitB_clicked()
{
    Produit p;
      ui->nomPR->setModel(p.Check_nom());
}
//--------------------COMMANDE-----------------------------//

void MainWindow::on_affichC_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(3);
    QSqlQueryModel *model;
    commande c("",0,0,0,0);
        model = c.afficher();
        ui->tableView_4->setModel(model);
    if (model->lastError().isValid())
        qDebug() << model->lastError();
    ui->tableView_4->show();
}

void MainWindow::on_ajouterC_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(1);
}

void MainWindow::on_imprimerC_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(4);
    QSqlQueryModel *model;
    commande c("",0,0,0,0);
        model = c.afficher();
        ui->tableView_5->setModel(model);
    if (model->lastError().isValid())
        qDebug() << model->lastError();
    ui->tableView_5->show();
}


void MainWindow::on_modifierC_clicked()
{
 ui->stackedWidget_4->setCurrentIndex(2);
}

void MainWindow::on_precC_clicked()
{
    ui->stackedWidget_4->hide();
}

void MainWindow::on_doneAC_clicked()
{
    bool test;

        QString date=ui->date->text();
         int quantite=ui->quantite->text().toInt();
         int id_produit=ui->idPC->text().toInt();
        int  id_fournisseur=ui->idFC->text().toInt();
        int  id_commande=ui->idC->text().toInt();


        commande c(date,quantite,id_produit,id_fournisseur,id_commande);
        test=c.ajouter() ;
        ui->date->clear();
        ui->quantite->clear();
        ui->idPC->clear();
        ui->idFC->clear();
        ui->idC->clear();
        if(test)
        QMessageBox::information(this,"succes","COMMANDE AJOUTE AVEC SUCCES");
        else
        QMessageBox::information(this,"failure","COMMANDE NON AJOUTE");
}

void MainWindow::on_precAC_clicked()
{
 ui->stackedWidget_4->setCurrentIndex(0);
}

void MainWindow::on_commande_clicked()
{
  ui->stackedWidget_4->show();
}

void MainWindow::on_doneAC_2_clicked()
{
    QString date=ui->date2->text();
         int quantite=ui->quantite2->text().toInt();
         int id_produit=ui->idCP->text().toInt();
        int  id_fournisseur=ui->idCF->text().toInt();
        int  id_commande=ui->idC2->text().toInt();


        commande c(date,quantite,id_produit,id_fournisseur,id_commande);
        c.modifier(date,quantite,id_produit,id_fournisseur,id_commande) ;
}

void MainWindow::on_precAC_2_clicked()
{
   ui->stackedWidget_4->setCurrentIndex(0);
}

void MainWindow::on_idCC_clicked()
{
    commande c;
      ui->IDDcombo->setModel(c.Check_id());
}

void MainWindow::on_rechercherC_clicked()
{
    /*commande c;
           QString s=ui->lineEdit_rechercheC->text();
            QSqlQueryModel *model=new  QSqlQueryModel();
            model=c.rechercher_Commande(s);
            ui->tableView_4->setModel(model);
            ui->tableView_4->show();
            ui->lineEdit_rechercheC->clear(); */
}

void MainWindow::on_supprimerC_clicked()
{
    QSqlQueryModel *model;
    commande c("",0,0,0,0);
        int id1=ui->lineEdit_rechercheC->text().toInt();
        c.supprimerCommande(id1);
            model = c.afficher();
            ui->tableView_4->setModel(model);
        ui->tableView_4->show();
        ui->lineEdit_rechercheC->clear();
}

void MainWindow::on_precAC_3_clicked()
{
     ui->stackedWidget_4->setCurrentIndex(0);
}

void MainWindow::on_imprimerC_2_clicked()
{
   /* QString DATE=ui->date->text();
             QString QUANTITE=ui->quantite->text();
             QString ID_PRODUIT=ui->idPC->text();
            QString  ID_FOURNISSEUR=ui->idFC->text();
            QString  ID_COMMANDE=ui->idC->text();

            QString z="- COMMANDE -" ,c="Date :",e="Quantite :",f="Id produit :",g="Id fournisseur :" , h="Id commande : " ;
            QPrinter printer;
                   printer.setOutputFormat(QPrinter::PdfFormat);
                   printer.setOutputFileName("C:/Users/MELEK/Desktop/stock/FICHIER.pdf");
                   QPainter painter(this);
                  if (! painter.begin(&printer)) { // failed to open file
                       qWarning("failed to open file, is it writable?");

                   }

                     else
                     painter.drawImage(QRect(0, 30, 1500, 1061), QImage("C:/Users/MELEK/Desktop/stock/bg.png"));
                      painter.drawImage(QRect(40, 0, 700, 115), QImage("C:/Users/MELEK/Desktop/stock/kiko.png"));
                      painter.drawImage(QRect(40, 1000, 700, 115), QImage("C:/Users/MELEK/Desktop/stock/kiko.png"));




                       painter.setFont(QFont("Futura(Light)",20, QFont::ExtraLight));
                          painter.drawText(QRect(250, 250,500,500),z);


                           painter.setFont(QFont("Futura(Light)",14, QFont::ExtraLight));


                          painter.drawText(QRect(100,400,100,100), c);
                          painter.drawText(QRect(200,400,100,100), DATE);

                          painter.drawText(QRect(100,510,100,100), e);
                          painter.drawText(QRect(200,510,100,100), QUANTITE);

                          painter.drawText(QRect(70,620,100,100), f);
                          painter.drawText(QRect(200,620,200,200), ID_PRODUIT);

                          painter.drawText(QRect(50,710,200,200), g);
                          painter.drawText(QRect(200,710,160,160), ID_FOURNISSEUR);

                          painter.drawText(QRect(50,810,200,200), h);
                          painter.drawText(QRect(200,810,160,160), ID_COMMANDE);


                            QMessageBox::information(NULL,"PDF","PRINT TO PDF DONE"); */

}
void MainWindow::on_imprimerpdfcom_clicked()
{
    QString DATE=ui->imp_date->text();
             QString QUANTITE=ui->imp_quantite->text();
             QString ID_PRODUIT=ui->imp_idp->text();
            QString  ID_FOURNISSEUR=ui->imp_idf->text();
            QString  ID_COMMANDE=ui->imp_idc->text();

            QString z="- COMMANDE -" ,c="Date :",e="Quantite :",f="Id produit :",g="Id fournisseur :" , h="Id commande : " ;
            QPrinter printer;
                   printer.setOutputFormat(QPrinter::PdfFormat);
                   printer.setOutputFileName("C:/Users/MELEK/Desktop/stock/FICHIER.pdf");
                   QPainter painter(this);
                  if (! painter.begin(&printer)) { // failed to open file
                       qWarning("failed to open file, is it writable?");

                   }

                     else
                     painter.drawImage(QRect(0, 30, 1500, 1061), QImage("C:/Users/MELEK/Desktop/stock/bg.png"));
                      painter.drawImage(QRect(40, 0, 700, 115), QImage("C:/Users/MELEK/Desktop/stock/kiko.png"));
                      painter.drawImage(QRect(40, 1000, 700, 115), QImage("C:/Users/MELEK/Desktop/stock/kiko.png"));




                       painter.setFont(QFont("Futura(Light)",20, QFont::ExtraLight));
                          painter.drawText(QRect(250, 250,500,500),z);


                           painter.setFont(QFont("Futura(Light)",14, QFont::ExtraLight));


                          painter.drawText(QRect(100,400,100,100), c);
                          painter.drawText(QRect(200,400,100,100), DATE);

                          painter.drawText(QRect(100,510,100,100), e);
                          painter.drawText(QRect(200,510,100,100), QUANTITE);

                          painter.drawText(QRect(70,620,100,100), f);
                          painter.drawText(QRect(200,620,200,200), ID_PRODUIT);

                          painter.drawText(QRect(50,710,200,200), g);
                          painter.drawText(QRect(200,710,160,160), ID_FOURNISSEUR);

                          painter.drawText(QRect(50,810,200,200), h);
                          painter.drawText(QRect(200,810,160,160), ID_COMMANDE);


                            QMessageBox::information(NULL,"PDF","PRINT TO PDF DONE");
}

//-------------------------------------------///---------------------------//

void MainWindow::on_lineEdit_rechercheF_textChanged(const QString &arg1)
{

    QSqlQueryModel *model = new QSqlQueryModel;
        Fournisseur f;
        model = f.rechercher_fournisseur(arg1);
        if (model->lastError().isValid())
            qDebug() << model->lastError();
        ui->tableView_2->setModel(model);
        ui->tableView_2->show();
}

void MainWindow::on_lineEdit_recherche_textChanged(const QString &arg1)
{
    QSqlQueryModel *model = new QSqlQueryModel;
        Produit p;
        model = p.rechercher(arg1);
        if (model->lastError().isValid())
            qDebug() << model->lastError();
        ui->tableView->setModel(model);
        ui->tableView->show();
}






void MainWindow::on_lineEdit_rechercheC_textChanged(const QString &arg1)
{
    QSqlQueryModel *model = new QSqlQueryModel;
        commande c;
        model = c.rechercher(arg1);
        if (model->lastError().isValid())
            qDebug() << model->lastError();
        ui->tableView_4->setModel(model);
        ui->tableView_4->show();
}

void MainWindow::on_precIMP_clicked()
{
     ui->stackedWidget_4->setCurrentIndex(0);
}
