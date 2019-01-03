#include "accidentc.h"
#include <QUrlQuery>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
accidentc::accidentc()
{
id=0;
type="";
date_a="";
}
accidentc::accidentc(int id,QString type,QString date_a)
{
  this->id=id;
  this->type=type;
  this->date_a=date_a;
}
QString accidentc::get_type(){return  type;}
QString accidentc::get_date_a(){return date_a;}
int accidentc::get_id(){return  id;}
void accidentc::set_id(int idd){id=idd;}
void accidentc::set_type(QString typee) {type=typee;}
void accidentc::set_date(QString datee){date_a=datee;}

bool accidentc::ajouter_accident()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("insert into ACCIDENT (ID, TYPE, DATE_A) "
                    "VALUES (:id, :type, :date_a)");
query.bindValue(":id", res);
query.bindValue(":type", type);
query.bindValue(":date_a", date_a);

/* QSqlQuery q;
    QString c = QString::number(get_id());
    q.prepare("insert into EMPLOYEE (id_emp,nom,prenom) VALUES (?,?,?)");
    q.addBindValue(c);
    q.addBindValue(get_nom());
    q.addBindValue(get_prenom());*/



return    query.exec();
}

QSqlQueryModel * accidentc::afficher_accident()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ACCIDENT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_A"));
    return model;
}

bool accidentc::supprimer_accident(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from ACCIDENT where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

QSqlQueryModel* accidentc::rechercher_accident(QString idd)
{
  QSqlQueryModel *model=new QSqlQueryModel();
  QSqlQuery q;
  q.prepare("select * from ACCIDENT where ID=:id");
  q.bindValue(":id",idd);
  q.exec();
  model->setQuery(q);
  return (model);
}
QSqlQueryModel* accidentc::rechercherad_accident(QString s)
{
QSqlQueryModel *model=new QSqlQueryModel();
QSqlQuery q;
QString s1=s;
QString s2=s;

q.prepare("select * from ACCIDENT where ID like ? or TYPE like ? or DATE_A like ?");

q.addBindValue("%"+s+"%");
q.addBindValue("%"+s1+"%");
q.addBindValue("%"+s2+"%");




q.exec();
model->setQuery(q);
return (model);
}
