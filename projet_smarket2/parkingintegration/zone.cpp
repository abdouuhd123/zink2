#include "zone.h"
#include <QSqlRelationalTableModel>
#include <QDebug>
Zone::Zone()
{
    Numero=0;
    Nombre=0;
    Etat=0;
}
Zone ::Zone(int Numero,int Nombre,int etat)
{
  this->Numero=Numero;
  this->Nombre=Nombre;
    this->Etat=etat;

}

int Zone::get_nombre(){return  Nombre;}
int Zone::get_numero(){return  Numero;}
int Zone::get_etat(){return  Etat;}
void Zone::set_num(int n){Numero=n;}


bool Zone::ajouterzone()
{ QSqlQuery query ;
    QString res=QString ::number(Numero);
   QString res2=QString ::number(Nombre);
   QString res3=QString ::number(Etat);
    query.prepare("INSERT INTO ZONE(NUMERO, NOMBRE,ETAT) "
                       "VALUES (:Numero, :Nombre ,:Etat)");
    query.bindValue(":Numero",res);
    query.bindValue(":Nombre",res2);
     query.bindValue(":Etat",res3);
    return query.exec();

}
QSqlQueryModel * Zone::afficherzone()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from ZONE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMERO"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOMBRE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("ETAT"));




    return model;
}
 bool Zone::supprimerzone(int num)
 {
     QSqlQuery query;
     QString res=QString::number(num);
     query.prepare("Delete from ZONE where NUMERO=:Numero");
     query.bindValue(":Numero",res);
     qDebug()<<"hkhdjsh";
     return query.exec();

 }
 bool Zone::modifierzone(int Numero)
 {
     QSqlQuery qry;
     qry.prepare("Update ZONE set NOMBRE = :NOMBRE where NUMERO=:Numero");
    qry.bindValue(":Numero",Numero);
   qry.bindValue(":NOMBRE",Nombre);
     return qry.exec();

 }

 bool Zone::verifier(QString k)
 {
     bool ok;
     int num;
     num=k.toInt(&ok);
     if (ok)
     return true;
     else
         return false;
 }
 QSqlQueryModel * Zone::chercher_avance()
 {
     QSqlQuery query;
     QString blabla = QString::number(Numero);
     query.prepare("SELECT * FROM PLACE WHERE NUMERO LIKE ?");
     query.addBindValue(blabla+"%"); //
     QSqlQueryModel * model= new QSqlQueryModel();
     query.exec();
 model->setQuery(query);
 model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMP"));
 model->setHeaderData(1,Qt::Horizontal,QObject::tr("ETAT"));
     return model;
 }
QSqlQueryModel * Zone::nombrepositif()
{
     QSqlQueryModel *model=new QSqlQueryModel();
     QSqlQuery qry;
     qry.prepare("select NUMERO from ZONE where nombre > '0'");
     qry.exec();
     model->setQuery(qry);

}
QSqlQueryModel *Zone::tri_par_numero1()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from ZONE order by NUMERO ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUMERO"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOMBRE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("ETAT"));
    return model;

}
 QSqlQueryModel *Zone:: comboBoxdansajouterplace()
 {
     QSqlQueryModel *model=new QSqlQueryModel();
     QSqlQuery qry;
     qry.prepare("select NUMERO from ZONE where nombre >= '1'");
     qry.exec();
     model->setQuery(qry);
     return model;
 }
void Zone::nombreplaceinferieurasix()
 {   QSqlQueryModel *model=new QSqlQueryModel();

     QSqlQuery qry2;
     int n = 0;
     qry2.prepare("select * from ZONE ");
     //QString numero;
     QString numero;
      if(qry2.exec())
        {
             while(qry2.next())
             {
n = 0;

                  numero = qry2.value(0).toString();

                 QSqlQuery qry3;
                 qry3.prepare("select * from place where numero = '"+numero+"'");
                 qDebug()<<"fgh";
                 if(qry3.exec())
                 {
                     while(qry3.next())
                     { if(qry3.value(1).toInt()==0)
                         n ++;
                        // qDebug()<<QString::number(n);


                     }

                     qDebug()<<"fgh";
                 }
                 if(n != 0)
                     dispo.push_back(numero);
               /*  if(n < 6)
                    return numero;*/
                   // return model;

                   qDebug()<<"hhh"<<model;


             }

             //return model;
 }

}
