#include "classe_chariot.h"

classe_chariot::classe_chariot()
{


}
classe_chariot::classe_chariot(int num_chariot,QString ref_chariot,QString etat,QString heure)
{
   this->num_chariot=num_chariot;
    this->ref_chariot=ref_chariot;
    this->etat=etat;
    this->heure=heure;

}
void classe_chariot::ajouter_chariot(classe_chariot c)
{

    QSqlQuery qry;
   QString prix=QString::number(num_chariot);
    qry.prepare("insert into chariot (num_chariot,ref_chariot,etat,heure)"
                "values(?,?,?,?)");
    qry.addBindValue(c.num_chariot);
    qry.addBindValue(c.ref_chariot);
    qry.addBindValue(c.etat);
    qry.addBindValue(c.heure);




    if(qry.exec())
        {
            qDebug()<<"sucsess";
            QMessageBox msgBox;
            msgBox.setText("Sauvegarde effectuee !");
            msgBox.exec();
        }
        else
        {
            qDebug()<<"qwer";
            QMessageBox msgBox;
            msgBox.setText("ERREUR : Sauvegarde echouee !");
            msgBox.exec();


       }
    }
QSqlQueryModel *classe_chariot::afficher_chariot()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from chariot");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("num_chariot"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("ref_chariot"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("heure"));
    return model;

}

QSqlQueryModel *classe_chariot::tri_par_heure()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from chariot order by heure ");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("num_chariot"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("ref_chariot"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("heure"));
    return model;

}


bool classe_chariot::supprimer_chariot(int num_chariot)
{
    QSqlQuery qry;
    qry.prepare("delete from chariot where num_chariot = ?");

    qry.addBindValue(num_chariot);
    if(qry.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}


void classe_chariot::modifier_chariot(classe_chariot c )
{
    QSqlQuery qry;
    qry.prepare("update chariot set ref_chariot=?,etat=?,heure=? where num_chariot=? ");

    qry.addBindValue(c.ref_chariot);
    qry.addBindValue(c.etat);
    qry.addBindValue(c.heure);
   qry.addBindValue(c.num_chariot);



    if(qry.exec())
    {
        qDebug()<<"sucsess";
    }
    else
    {
        qDebug()<<"failed";

    }
}


void classe_chariot::selectionner(int num_chariot)
{
    QSqlQuery qry;
    qry.prepare("select * from chariot where num_chariot= ?");
    qry.addBindValue(num_chariot);
    if(qry.exec())
    {
        while (qry.next())
        {
            num_chariot=qry.value(0).toInt();
            ref_chariot=qry.value(1).toString();
            etat=qry.value(2).toString();
            heure=qry.value(3).toString();



        }
    }
}
QSqlQueryModel * classe_chariot::rechercher_chariot(QString ref_chariot)
{



    QString req="select * from chariot where ref_chariot like '%'||?||'%' " ;
    QSqlQuery qry;
    qry.prepare(req);


    qry.addBindValue(ref_chariot);
    QSqlQueryModel *model=new QSqlQueryModel();
    qry.exec();
    model->setQuery(qry);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("num_chariot"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("ref_chariot"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("heure"));
    return model;
}
