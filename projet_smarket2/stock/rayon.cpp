#include "rayon.h"
#include <QDebug>
#include <QMessageBox>

rayon::rayon()
{
nom_produit="";
id_rayon=0;
etat=0;
quantiter:0;
}
rayon::rayon(QString nom_produit,int id_rayon,int etat,int quantiter)
{
 this->nom_produit=nom_produit;
 this->id_rayon=id_rayon;
 this->etat=etat;
 this->quantiter=quantiter;
}
rayon::rayon(const rayon &r)
{
   nom_produit=r.nom_produit;
   id_rayon=r.id_rayon;
   etat=r.etat;
   quantiter=r.quantiter;
}
void rayon::setnom_produit(QString nom_produit){nom_produit=nom_produit;}
void rayon::setid_rayon(int id_rayon){id_rayon=id_rayon;}
QString rayon::getnom_produit(){return nom_produit;}
int rayon::getid_rayon(){return  id_rayon;}
bool rayon::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO RAYON (NOM_PRODUIT, ETAT ,QUANTITE_PRODUIT, ID_RAYON) "
                        "VALUES (:nom_produit, :etat, :quantiter, :id_rayon)");

                                 query.addBindValue(nom_produit);
                                 query.addBindValue(QString::number(etat));
                                 query.addBindValue(QString::number(quantiter));
                                 query.addBindValue(QString::number(id_rayon));
                                 return query.exec();
}
bool rayon::supprimer(int id1)
{
    QSqlQuery query;
    int test = -1 ;
    query.prepare("select * from RAYON where ID_RAYON = ?");
    query.addBindValue(QString::number(id1));
    query.exec();
            while(query.next())
            {
                if(query.value(1)!="")
                    test=1;
            }
                    if(test==1)
                    {
                    query.prepare("DELETE FROM RAYON where ID_RAYON=?");

                    query.addBindValue(QString::number(id1));
                    }


                    if(query.exec()&& test==1)
                         { QMessageBox::information(NULL,"delete","done");}
                           else
                           QMessageBox::information(NULL,"delete","verifier l id  ");

                    return  query.exec();
}
QSqlQueryModel* rayon::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from RAYON");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_produit "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("etat"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("quantiter"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_rayon "));
return model;

}
QSqlQueryModel* rayon::rechercher(QString idd)
{
    QSqlQueryModel *model=new QSqlQueryModel();
     QSqlQuery q;
     q.prepare("select * from RAYON where ID_RAYON=:id_rayon");
     q.bindValue(":id_rayon",idd);
     q.exec();
     model->setQuery(q);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_produit "));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("etat"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("quantiter"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_rayon "));



                return model;
}
void rayon::modifier(QString nom_produit,int id_rayon,int etat,int quantiter)
{
    QSqlQuery query;

    query.prepare("update RAYON SET NOM_PRODUIT = ?,ETAT = ?,QUANTITE_PRODUIT = ? where ID_RAYON = ?");
    query.addBindValue(nom_produit);
    query.addBindValue(QString::number(etat));
    query.addBindValue(QString::number(quantiter));
    query.addBindValue(QString::number(id_rayon));
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
QSqlQueryModel * rayon::Check_id()
{
 QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select ID_RAYON from RAYON");
  return model;
}

