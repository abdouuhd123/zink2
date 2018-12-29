#include "employeec.h"
#include <QDebug>
employeec::employeec()
{
id=0;
nom="";
prenom="";
}
employeec::employeec(int id,QString nom,QString prenom)
{
  this->id=id;
  this->nom=nom;
  this->prenom=prenom;
}
QString employeec::get_nom(){return  nom;}
QString employeec::get_prenom(){return prenom;}
int employeec::get_id(){return  id;}
void employeec::set_id(int idd){id=idd;}
void employeec::set_nom(QString nomm) {nom=nomm;}
void employeec::set_prenom(QString prenomm){prenom=prenomm;}

bool employeec::ajouter_employee()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("insert into EMPLOYEE (ID, NOM, PRENOM) "
                    "VALUES (:id, :nom, :prenom)");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);

/* QSqlQuery q;
    QString c = QString::number(get_id());
    q.prepare("insert into EMPLOYEE (id_emp,nom,prenom) VALUES (?,?,?)");
    q.addBindValue(c);
    q.addBindValue(get_nom());
    q.addBindValue(get_prenom());*/



return    query.exec();
}

QSqlQueryModel * employeec::afficher_employee()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from employee");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    return model;
}

bool employeec::supprimer_employee(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from EMPLOYEE where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

QSqlQueryModel* employeec::rechercher_employee(QString idd)
{
  QSqlQueryModel *model=new QSqlQueryModel();
  QSqlQuery q;
  q.prepare("select * from EMPLOYEE where ID=:id");
  q.bindValue(":id",idd);
  q.exec();
  model->setQuery(q);
  return (model);
}
QSqlQueryModel* employeec::rechercherad_employee(QString s)
{
QSqlQueryModel *model=new QSqlQueryModel();
QSqlQuery q;

q.prepare("select * from EMPLOYEE where ID like ?");
q.addBindValue("%"+s+"%");



q.exec();
model->setQuery(q);
return (model);
}
