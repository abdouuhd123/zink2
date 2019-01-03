#include "blocc.h"

blocc::blocc()
{
id=0;
type="";
etat="";
}
blocc::blocc(int id,QString type,QString etat)
{
  this->id=id;
  this->type=type;
  this->etat=etat;
}
QString blocc::get_type(){return  type;}
QString blocc::get_etat(){return etat;}
int blocc::get_id(){return  id;}
void blocc::set_id(int idd){id=idd;}
void blocc::set_type(QString typee) {type=typee;}
void blocc::set_etat(QString etatt){etat=etatt;}

bool blocc::ajouter_bloc()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("insert into BLOC (ID, TYPE, ETAT) "
                    "VALUES (:id, :type, :etat)");
query.bindValue(":id", get_id());
query.bindValue(":type", get_type());
query.bindValue(":etat", get_etat());





return    query.exec();
}

QSqlQueryModel * blocc::afficher_bloc()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from BLOC");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
    return model;
}

bool blocc::supprimer_bloc(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from BLOC where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

QSqlQueryModel* blocc::rechercher_bloc(QString idd)
{
  QSqlQueryModel *model=new QSqlQueryModel();
  QSqlQuery q;
  q.prepare("select * from BLOC where ID=:id");
  q.bindValue(":id",idd);
  q.exec();
  model->setQuery(q);
  return (model);
}
void blocc::modifier_bloc(QString c)
{
    QSqlQuery q;
    q.prepare("update BLOC set TYPE=(?),ETAT=(?) where ID=(?)");
        q.addBindValue(get_type());
        q.addBindValue(get_etat());
    q.addBindValue(c);


    q.exec();



}
QSqlQueryModel* blocc::rechercherad_bloc(QString s)
{
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery q;
    QString s1=s;
    QString s2=s;

    q.prepare("select * from BLOC where ID like ? or TYPE like ? or ETAT like ?");

    q.addBindValue("%"+s+"%");
    q.addBindValue("%"+s1+"%");
    q.addBindValue("%"+s2+"%");




    q.exec();
    model->setQuery(q);
    return (model);
}
void blocc::modifier1_bloc(QString c)
{
    QSqlQuery q;
    q.prepare("update BLOC set ETAT=(?) where ID=(?)");
    q.addBindValue(get_etat());
    q.addBindValue(c);


    q.exec();




}
