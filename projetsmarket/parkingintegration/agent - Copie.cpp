#include "agent.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QString>
#include <QVariant>
agent::agent ()
{
     Id="";
    Nom="";
    Prenom="";

     Mp="";
}
  agent:: agent(QString id,QString nom,QString prenom,QString mp)
    {
         Id=id;
    Nom=nom;
    Prenom=prenom;

     Mp=mp;
    }

QString agent::getId()
{ return Id;

}
    void agent::setId(QString id)
    {
        Id=id;
    }

    QString agent:: getMp()
    {
        return Mp;
    }
    void agent::setMp(QString mp)
    {  Mp=mp;
    }
    QString agent::getNom()
    {
       return Nom;
    }
    void agent::setNom (QString nom)
    {
        Nom=nom;
    }

    QString agent::getPrenom()
    {
        return Prenom;
    }
    void agent::setPrenom(QString prenom)
    {
        Prenom=prenom;
    }


bool agent::connexion()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM AGENT WHERE ID=? AND MP=?");
     query.addBindValue(Id);
     query.addBindValue(Mp);
     if(query.exec())
     {   int count=0;
         while(query.next())
         {count++  ;
         }
         if(count==1)
         {return true;}
         else
         {
             QMessageBox::information(nullptr,QObject::tr("blalg"),QObject::tr("incorecte!!"),QMessageBox::Cancel);
             return false;
         }

     }
     QMessageBox::information(nullptr,QObject::tr("blalg"),QObject::tr("incorecte!!"),QMessageBox::Cancel);
     return false;
}
