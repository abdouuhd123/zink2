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
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("NUMERO"));

}
QSqlQueryModel *Place::tri_par_numero2()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from PLACE order by NUMP ");
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("NUMERO"));
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMP"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("ETAT"));
    return model;

}
void Place::selectionner(int numero)
{

    QSqlQuery qry;
    qry.prepare("select * from place where nump= ?");
    qry.addBindValue(num);
    if(qry.exec())
    {
        while (qry.next())
        {
            num=qry.value(0).toInt();
            etat=qry.value(1).toInt();




        }
    }
}
QSqlQueryModel *Place:: placearduino6()

{
    QSqlQueryModel *model=new QSqlQueryModel();


QVector <QString> tab;

    QSqlQuery qry5;
    qry5.prepare("select * from place where numero = 6");
 qry5.exec();
 model->setQuery(qry5);

    if(qry5.exec())
    {
        int i = 0;
        while(qry5.next())
        {

           /*if(i == 0)
            k=qry5.value(0).toString();
            if(i == 1)
            l=qry5.value(0).toString();*/
            tab.push_back(qry5.value(0).toString());

k=tab[0];
//l=tab[1];


            i++;
        }
        k=tab[0];
        l=tab[1];


    }
    return model;
}


QSqlQueryModel *Place::placearduinocombobo(int no)
{   QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery qry5;
    QVector <QString> tab;
    qry5.prepare("select * from place where numero = :no");
    qry5.bindValue(":n",no);
 qry5.exec();
 model->setQuery(qry5);

    if(qry5.exec())
    {
        int i = 0;
        while(qry5.next())
        {

           /*if(i == 0)
            k=qry5.value(0).toString();
            if(i == 1)
            l=qry5.value(0).toString();*/
            tab.push_back(qry5.value(0).toString());

//k=tab[0];
//l=tab[1];


            i++;
        }
        k=tab[0];
        l=tab[1];
        m=tab[2];
        n=tab[3];
        o=tab[4];
        p=tab[5];




    }
    return model;



}
 bool Place :: supprimerverifier(int)
 {
     QSqlQuery b;
           QString things("SELECT count(*) as nombre  FROM PLACE where NUMP='");
           things+=num;
           things+="'";
           int b1=0;
           qDebug() <<things;
           if(b.exec(things)){
               while(b.next()){
                   if(b.value(0).toInt()>0){
                       b1=1;
                   }
               }
           }
 }

