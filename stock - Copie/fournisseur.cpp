#include "fournisseur.h"
#include <QDebug>
#include <QMessageBox>
#include "./SmtpClient-for-Qt-1.1/src/SmtpMime"

Fournisseur::Fournisseur()
{
Id_fournisseur=0;
Nom="";
Adresse="";
Telephone;

}
Fournisseur::Fournisseur(int Id_fournisseur,QString Nom,QString Adresse,int Telephone)
{
 this->Id_fournisseur=Id_fournisseur;
 this->Nom=Nom;
    this->Adresse=Adresse;
    this->Telephone=Telephone;

}
Fournisseur::Fournisseur(const Fournisseur &f)
{
   Id_fournisseur=f.Id_fournisseur;
   Nom=f.Nom;
   Adresse=f.Adresse;
   Telephone=f.Telephone;
}
void Fournisseur::setId_fournisseur(int Id_fournisseur){Id_fournisseur=Id_fournisseur;}
void Fournisseur::setNom(QString nom){Nom=Nom;}
void Fournisseur::setAdresse(QString Adresse){Adresse=Adresse;}
void Fournisseur::setTelephone(int Telephone){Telephone=Telephone;}
int Fournisseur::getID_fournisseur(){return Id_fournisseur;}
QString Fournisseur::getNom(){return  Nom;}
QString Fournisseur::getAdresse(){return Adresse;}
int Fournisseur::getTelephone(){return Telephone;}

bool Fournisseur::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO FOURNISSEUR (ADRESSE, TELEPHONE, NOM,ID_FOURNISSEUR) "
                        "VALUES (:Adresse, :Telephone, :Nom, :Id_fournisseur)");



                                 query.addBindValue(Adresse);
                                 query.addBindValue(QString::number(Telephone));
                                 query.addBindValue(Nom);
                                 query.addBindValue(QString::number(Id_fournisseur));


    return    query.exec();
}
bool Fournisseur::supprimerFournisseur(int id1)
{
    QSqlQuery query;
    int test = -1 ;
    query.prepare("select * from FOURNISSEUR where ID_FOURNISSEUR = ?");
    query.addBindValue(QString::number(id1));
    query.exec();
            while(query.next())
            {
                if(query.value(1)!="")
                    test=1;
            }
                    if(test==1)
                    {
                    query.prepare("DELETE FROM FOURNISSEUR where ID_FOURNISSEUR=?");

                    query.addBindValue(QString::number(id1));
                    }


                    if(query.exec()&& test==1)
                         { QMessageBox::information(NULL,"delete","done");}
                           else
                           QMessageBox::information(NULL,"delete","verifier l id  ");

                    return  query.exec();
}
QSqlQueryModel* Fournisseur::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from FOURNISSEUR");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Adresse "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Telephone"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Id_fournisseur"));
 return model;
}
QSqlQueryModel* Fournisseur::rechercher_Fournisseur(QString idd)
{

}
void Fournisseur::modifier(int Id_fournisseur,QString Nom,QString Adresse,int Telephone)
{
    QSqlQuery query;

    query.prepare("update FOURNISSEUR SET ADRESSE = ? ,TELEPHONE = ?,NOM = ? where ID_FOURNISSEUR = ?");


    query.addBindValue(Adresse);
    query.addBindValue(QString::number(Telephone));
    query.addBindValue(Nom);
    query.addBindValue(QString::number(Id_fournisseur));
    query.exec();

    if(query.exec())
    {
        QMessageBox::information(NULL,"modify","done");
    }
         else
    {
        QMessageBox::information(NULL,"modify","not done");
    }
}

QSqlQueryModel * Fournisseur::Check_id()
{
 QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select ID_FOURNISSEUR from FOURNISSEUR");
  return model;
}

QSqlQueryModel* Fournisseur::rechercher_fournisseur(QString s)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query ;


            qDebug() << s  ;

                if(s.toInt())
                {
                    QString cherche = "%";
                    cherche+=s;
                    cherche+="%";
                    QString rec=("SELECT * FROM FOURNISSEUR where (TELEPHONE like :Telephone)  or  (ID_FOURNISSEUR like :Id_fournisseur) ");
                    query.prepare(rec);
                    query.bindValue(":Telephone", "%"+cherche+"%");
                    query.bindValue(":Id_fournisseur","%"+cherche+"%");
                    query.exec();
                    model->setQuery(query);

                }


            else
            {
                    QString cherche = "%";
                    cherche+=s;
                    cherche+="%";
                    QString rec=("SELECT * FROM FOURNISSEUR where  (ADRESSE like :Adresse) or  (NOM like :Nom)");
                    query.prepare(rec);
                    query.bindValue(":Adresse", "%"+cherche+"%");
                    query.bindValue(":Nom","%"+cherche+"%");


                    query.exec();
                    model->setQuery(query);
            }



                    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Adresse "));
                    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Telephone"));
                    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
                    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Id_fournisseur"));
                    return  model ;
}

int Fournisseur::verifier_saisie_donnees(QString TelVerif ,QString idfVerif)
{

    int ok=100;
    int i=0;

    if(idfVerif=="" || Nom=="" || Adresse=="" || TelVerif=="")
        return  ok=0;

    while(i<idfVerif.size())
    {
        if(idfVerif[i].isLetter())
        {

        return ok=0;
        //break ;
        }
        else i++;

    }
    i=0;
    while(i<Nom.size())
    {
        if(Nom[i].isNumber())
        {

        return ok=1;

        }
        else i++;

    }
    i=0;
    while(i<Adresse.size())
    {
        if(Adresse[i].isNumber())
        {

        return ok=2;

        }
        else i++;

    }
    i=0;
    while(i<TelVerif.size())
    {
        if(TelVerif[i].isLetter())
        {

        return ok=3;
        //break ;
        }
        else i++;

    }



    return ok;
}
