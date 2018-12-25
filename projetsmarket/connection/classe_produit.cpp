#include "classe_produit.h"

classe_produit::classe_produit()
{


}
classe_produit::classe_produit(int id_produit,QDate date_limite)
{
    this->id_produit=id_produit;
    this->date_limite=date_limite;

}

void classe_produit::ajouter_produit(classe_produit c)
{
    QSqlQuery qry;
     QString prix=QString::number(id_produit);
    qry.prepare("insert into produit (id_produit,date_limite)"
                "values(?,?)");
    qry.addBindValue(c.id_produit);
    qry.addBindValue(c.date_limite);


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
QSqlQueryModel *classe_produit::afficher_produit()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from produit");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_produit"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date_limite"));
    return model;

}
bool classe_produit::supprimer_produit(int id_produit)
{
    QSqlQuery qry;
    qry.prepare("delete from produit where id_produit = ?");

    qry.addBindValue(id_produit);
    if(qry.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void classe_produit::selectionner(int id_produit)
{
    QSqlQuery qry;
    qry.prepare("select * from produit where id_produit= ?");
    qry.addBindValue(id_produit);
    if(qry.exec())
    {
        while (qry.next())
        {
            id_produit=qry.value(0).toInt();
            date_limite=qry.value(1).toDate();



        }
    }
}
QSqlQueryModel *classe_produit::tri_par_date()
{

    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from produit where date_limite < sysdate order by date_limite  ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_produit"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date_limite"));

    return model;

}
