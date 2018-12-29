#include "Place.h"
#include <QMessageBox>
#include <QDebug>

Place::Place()
{
   num=0;
   etat=0;

}
Place::Place(int num,int etat)
   {
    this->num=num;
    this->etat=etat;
   }

int Place:: getNump()
   {
       return num;

   }


int Place:: getEtat()
   {
       return etat;

   }

bool Place::ajouter(int id)
{ QSqlQuery query ;
   int nombre ;
   QString res=QString::number(num);
   QString res2=QString::number(etat);
   QString res3=QString::number(id);
   query.prepare("select * from ZONE where NUMERO = '"+res3+"'");
   if(query.exec()){
   if(query.next())
   {
       nombre = query.value(1).toInt() - 1 ;
   }
   else
       return false;

   }
   else
       return false;
   QString res4 = QString::number(nombre);
   QSqlQuery query1, query2;
   query1.prepare("INSERT INTO PLACE (NUMP,ETAT,NUMERO) "
                      "VALUES (:num, :etat,:id)");
   query1.bindValue(":num",res);
   query1.bindValue(":etat",res2);
   query1.bindValue(":id",res3);
   query2.prepare("update zone set nombre = '"+res4+"' where numero = '"+res3+"'");
   if(query2.exec())
   return query1.exec();
   else
       return false;
}
QSqlQueryModel * Place::afficher()
{
   QSqlQueryModel *model=new QSqlQueryModel();
   model->setQuery("select * from PLACE");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMP"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("ETAT"));
   return model;
}
bool Place::supprimer(int nu)
{
    QSqlQuery query, query1, query2, query3;
    QString res=QString::number(nu), res5, res1;
   int id = 44;
    int nombre;
    query3.prepare("select * from PLACE where NUMP = '"+res+"'");
    if(!query3.exec())
        return false;
    if(query3.next())
    {
        id = query3.value(2).toInt();
        qDebug() <<" rechercher num zone";
    }
    //else
       // return false;
    res1 = QString::number(id);
    query2.prepare("select * from ZONE where NUMERO = '"+res1+"'");
    if(!query2.exec())
       return false;
    if(query2.next())
    {
        nombre = query2.value(1).toInt();
        nombre++;
        res5 = QString::number(nombre);
    }
    query1.prepare("update ZONE set NOMBRE = '"+res5+"' where NUMERO = '"+res1+"'");
   if(!query1.exec())
       return false;
    query.prepare("Delete from PLACE where NUMP= :nump");
    query.bindValue(":nump",res);
    return query.exec();
}
bool Place::modifierplace(int Numero)
{
    QSqlQuery qry;
    qry.prepare("Update PLACE set ETAT = :etat where NUMP=:Numero");
   qry.bindValue(":Numero",num);
  qry.bindValue(":etat",etat);
    return qry.exec();

}
QSqlQueryModel * Place::placedanslazone(QString numero)
{
QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from PLACE where NUMERO = '"+numero+"'");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMP"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("ETAT"));
}
QSqlQueryModel *Place::tri_par_numero()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from PLACE order by NUMP ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMERO"));
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMP"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("ETAT"));
    return model;

}
void Place::selectionner(int numero)
{
    QSqlQuery qry;
    qry.prepare("select * from PLACE where NUMERO= ?");
    qry.addBindValue(numero);
    if(qry.exec())
    {
        while (qry.next())
        {
            numero=qry.value(0).toInt();




        }
    }
}
