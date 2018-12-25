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
query.bindValue(":id", res);
query.bindValue(":type", type);
query.bindValue("etat", etat);

/* QSqlQuery q;
    QString c = QString::number(get_id());
    q.prepare("insert into EMPLOYEE (id_emp,nom,prenom) VALUES (?,?,?)");
    q.addBindValue(c);
    q.addBindValue(get_nom());
    q.addBindValue(get_prenom());*/



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
    //q.prepare("update BLOC (ID, TYPE, ETAT) where ID=:id"
      //        "VALUES (:id, :type, :etat)");
    q.prepare("update BLOC set TYPE=(?),ETAT=(?) where ID=(?)");
     //c = QString::number(get_id());
        //q.addBindValue(c);
    //q.bindValue(":type",get_type());
    //q.bindValue(":etat",get_etat());
        q.addBindValue(get_type());
        q.addBindValue(get_etat());
    q.addBindValue(c);


    q.exec();


   /* QString c = QString::number(get_CIN());
    q.addBindValue(get_Mail());
    q.addBindValue(get_MDP());
    q.addBindValue(get_Nom());
    q.addBindValue(get_Prenom());
    q.addBindValue(get_DateN());
    q.addBindValue(get_Nationalite());
    q.addBindValue(c);*/


    //QString res= QString::number(id);
    //q.prepare("insert into BLOC (ID, TYPE, ETAT) "
                        //"VALUES (:id, :type, :etat)");
    //query.bindValue(":id", res);
    //q.bindValue(":type", type);
   // q.bindValue("etat", etat);
}
QSqlQueryModel* blocc::rechercherad_bloc(QString s)
{
QSqlQueryModel *model=new QSqlQueryModel();
QSqlQuery q;

q.prepare("select * from BLOC where ID like ?");
q.addBindValue("%"+s+"%");



q.exec();
model->setQuery(q);
return (model);
}
