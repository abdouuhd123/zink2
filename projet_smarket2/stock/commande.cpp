#include "commande.h"
#include <QDebug>
#include <QMessageBox>
commande::commande()
{
date="";
quantite=0;
id_produit=0;
id_fournisseur=0;
id_commande=0;
}
commande::commande(QString date,int quantite,int id_produit,int id_fournisseur,int id_commande)
{
 this->date=date;
 this->quantite=quantite;
 this->id_produit=id_produit;
 this->id_fournisseur=id_fournisseur;
 this->id_commande=id_commande;
}
commande::commande(const commande &c)
{
 date=c.date;
 quantite=c.quantite;
 id_produit=c.id_produit;
 id_fournisseur=c.id_fournisseur;
 id_commande=c.id_commande;
}

void commande::setdate(QString date){date=date;}
void commande::setquantite(int quantite){quantite=quantite;}
void commande::setid_produit(int id_produit){id_produit=id_produit;}
void commande::setid_fournisseur(int id_fournisseur){id_fournisseur=id_fournisseur;}
void commande::setid_commande(int id_commande){id_commande=id_commande;}
QString commande::getdate(){return date;}
int commande::getquantite(){return quantite;}
int commande::getid_produit(){return  id_produit;}
int commande::getid_fournisseur(){return id_fournisseur;}
int commande::getid_commande(){return  id_commande;}
bool commande::ajouter()
{
    QSqlQuery query;

        query.prepare("INSERT INTO COMMANDE (ID_COMMANDE, DATE_COMMANDE, QUANTITE, ID_PRODUIT, ID_FOURNISSEUR) "
                            "VALUES (:id_commande, :date, :quantite, :id_produit, :id_fournisseur)");

query.addBindValue(QString::number(id_commande));
        query.addBindValue(date);
        query.addBindValue(QString::number(quantite));
        query.addBindValue(QString::number(id_produit));
        query.addBindValue(QString::number(id_fournisseur));



return    query.exec();
}
bool commande::supprimerCommande(int id1)
{
    QSqlQuery query;
    int test = -1 ;
    query.prepare("select * from COMMANDE where ID_COMMANDE = ?");
    query.addBindValue(QString::number(id1));
    query.exec();
            while(query.next())
            {
                if(query.value(1)!="")
                    test=1;
            }
                    if(test==1)
                    {
                    query.prepare("DELETE FROM COMMANDE where ID_COMMANDE=?");

                    query.addBindValue(QString::number(id1));
                    }


                    if(query.exec()&& test==1)
                         { QMessageBox::information(NULL,"delete","done");}
                           else
                           QMessageBox::information(NULL,"delete","verifier l id  ");

                    return  query.exec();
}
QSqlQueryModel* commande::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from COMMANDE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("date "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("quantite"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("id_produit"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_fournisseur"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("id_commande"));
return model;
}
QSqlQueryModel* commande::rechercher_Commande(QString idd)
{
    QSqlQueryModel *model=new QSqlQueryModel();
     QSqlQuery q;
     q.prepare("select * from COMMANDE where ID_COMMANDE=:id_commande");
     q.bindValue(":id_commande",idd);
     q.exec();
     model->setQuery(q);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("date "));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("quantite"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("id_produit"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_fournisseur"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("id_commande"));




                return model;


}
void commande::modifier(QString date,int quantite,int id_produit,int id_fournisseur,int id_commande)
{

    QSqlQuery query;

    query.prepare("update COMMANDE SET DATE_COMMANDE = ? ,QUANTITE = ?,ID_PRODUIT = ?,ID_FOURNISSEUR = ? where ID_COMMANDE = ?");


    query.addBindValue(date);
    query.addBindValue(QString::number(quantite));
    query.addBindValue(QString::number(id_produit));
    query.addBindValue(QString::number(id_fournisseur));
    query.addBindValue(QString::number(id_commande));
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
QSqlQueryModel * commande::Check_id()
{
 QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select ID_COMMANDE from COMMANDE");
  return model;
}
QSqlQueryModel* commande::rechercher(QString s)
{
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query ;


            qDebug() << s  ;

                    QString cherche = "%";
                    cherche+=s;
                    cherche+="%";
                    QString rec=("SELECT * FROM COMMANDE where (QUANTITE like :quantite)  or  (ID_PRODUIT like :id_produit) or  (ID_FOURNISSEUR like :id_fournisseur)or  (ID_COMMANDE like :id_commande) ");
                    query.prepare(rec);
                    query.bindValue(":quantite", "%"+cherche+"%");
                    query.bindValue(":id_produit","%"+cherche+"%");
                    query.bindValue(":id_fournisseur", "%"+cherche+"%");
                    query.bindValue(":id_commande","%"+cherche+"%");
                    query.exec();
                    model->setQuery(query);


                    model->setHeaderData(0, Qt::Horizontal, QObject::tr("date "));
                    model->setHeaderData(1, Qt::Horizontal, QObject::tr("quantite"));
                    model->setHeaderData(2, Qt::Horizontal, QObject::tr("id_produit"));
                    model->setHeaderData(3, Qt::Horizontal, QObject::tr("id_fournisseur"));
                    model->setHeaderData(4, Qt::Horizontal, QObject::tr("id_commande"));
                    return  model ;
}
