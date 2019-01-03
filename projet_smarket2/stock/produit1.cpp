#include "produit1.h"
#include <QDebug>
#include <QMessageBox>



Produit1::Produit1()
{
Nom="";
Id_produit=0 ;
Prix=0;
Duree_conservatoire="";
Code_a_barre=0;
Quantite_rayon=0;
Quantite_stock=0;
}
Produit1:: Produit1 (QString nom,int id_produit,int prix, QString duree_conservatoire,int code_a_barre,int quantite_rayon,int quantite_stock)
{
  Nom=nom;
  Id_produit=id_produit;
  Duree_conservatoire=duree_conservatoire;
  Prix=prix;
  Code_a_barre=code_a_barre;
  Quantite_stock=quantite_stock;
  Quantite_rayon=quantite_rayon;
}
Produit1::Produit1(const Produit1 &P)
{
   Nom=P.Nom;
   Id_produit=P.Id_produit;
  Quantite_stock=P.Quantite_stock;
  Quantite_rayon=P.Quantite_rayon;
  Duree_conservatoire=P.Duree_conservatoire ;
  Prix=P.Prix;
  Code_a_barre=P.Code_a_barre;

}
void Produit1::setId_produit(int id_produit){Id_produit=id_produit;}
    void Produit1::setNom(QString nom){Nom=nom;}
    void Produit1::setPrix(int prix){Prix=prix;}
    void Produit1::setCode_a_barre(int code_a_barre){Code_a_barre=code_a_barre;}
    void Produit1::setDuree_conservatoire(QString duree_conservatoire){Duree_conservatoire=duree_conservatoire;}
    void Produit1::setQuantite_rayon(int quantite_rayon){Quantite_rayon=quantite_rayon;}
    void Produit1::setQuantite_stock(int quantite_stock){Quantite_stock=quantite_stock;}
    int Produit1::getId_produit(){return Id_produit;}
QString Produit1::getNom(){return Nom;}
    float Produit1::getPrix(){return Prix;}
    int Produit1::getCode_a_barre(){return Code_a_barre;}
    QString Produit1::getDuree_conservatoire(){return Duree_conservatoire;}
    int Produit1::getQuantite_rayon(){return Quantite_rayon;}
    int Produit1::getQuantite_stock(){return Quantite_stock;}




bool Produit1::ajouter_produit1()
{
    /*QSqlQuery query;

        query.prepare("INSERT INTO PRODUIT (ID_PRODUIT,NOM, PRIX, DUREE_CONSERVATOIRE, CODE_A_BARRE, QUANTITE_RAYON, QUANTITE_STOCK) "
                            "VALUES (:Id_produit ,:Nom , :Prix, :Duree_conservatoire, :Code_a_barre, :Quantite_rayon, :Quantite_stock)");


        query.bindValue(":Id_produit",QString::number(Id_produit));

                                     query.bindValue(":Nom",Nom);
                                   query.bindValue("Prix",QString::number(Prix));
                                     query.bindValue(":Duree_conservatoire",Duree_conservatoire);
                                    query.bindValue(":Code_a_barre",QString::number(Code_a_barre));
                                    query.bindValue(":Quantite_rayon",QString::number(Quantite_rayon));
                                     query.bindValue(":Quantite_stock",QString::number(Quantite_stock));

                                 query.addBindValue(Nom);

                                 query.addBindValue(QString::number(Prix));
                                 query.addBindValue(Duree_conservatoire);
                                 query.addBindValue(QString::number(Code_a_barre));
                                 query.addBindValue(QString::number(Quantite_rayon));
                                 query.addBindValue(QString::number(Quantite_stock));
                                 query.addBindValue(QString::number(Id_produit));

        return    query.exec();*/
   /* QSqlQuery query;
    query.prepare("insert into PRODUIT (NOM,PRIX,DUREE_CONSERVATOIRE,CODE_A_BARRE,QUANTITE_RAYON,QUANTITE_STOCK,ID_PRODUIT)"
                        "VALUES (:Nom, :Prix, :Duree_conservatoire, :Code_a_barre, :Quantite_rayon, :Quantite_stock, :Id_produit)");


    query.bindValue(":Nom",Nom);
  query.bindValue("Prix",Prix);
    query.bindValue(":Duree_conservatoire",Duree_conservatoire);
   query.bindValue(":Code_a_barre",QString::number(Code_a_barre));
   query.bindValue(":Quantite_rayon",QString::number(Quantite_rayon));
    query.bindValue(":Quantite_stock",QString::number(Quantite_stock));
    query.bindValue(":Id_produit",QString::number(Id_produit));

    QString s=QString::number(Prix);
    QString s1=QString::number(Code_a_barre);
    QString s2=QString::number(Quantite_rayon);
    QString s3=QString::number(Quantite_stock);
    QString s4=QString::number(Id_produit);
    query.bindValue(":Nom",getNom());
      query.bindValue("Prix",s);
        query.bindValue(":Duree_conservatoire",getDuree_conservatoire());
       query.bindValue(":Code_a_barre",s1);
       query.bindValue(":Quantite_rayon",s2);
        query.bindValue(":Quantite_stock",s3);
        query.bindValue(":Id_produit",s4);*/


   /* query.bindValue(":Nom",getNom());
  query.bindValue("Prix",getPrix());
    query.bindValue(":Duree_conservatoire",getDuree_conservatoire());
   query.bindValue(":Code_a_barre",getCode_a_barre());
   query.bindValue(":Quantite_rayon",getQuantite_rayon());
    query.bindValue(":Quantite_stock",getQuantite_stock());
    query.bindValue(":Id_produit",getId_produit());*/



    //return    query.exec();



    QSqlQuery query;

    query.prepare("INSERT INTO PRODUIT (ID_PRODUIT,NOM, PRIX, DUREE_CONSERVATOIRE,CODE_A_BARRE,QUANTITE_RAYON,QUANTITE_STOCK) "
                        "VALUES (:Id_PRODUIT,:Nom, :Prix, :Duree_conservatoire, :Code_a_barre,:Quantite_rayon,:Quantite_stock)");


                                 query.addBindValue(QString::number(Id_produit));
                                 query.addBindValue(Nom);
                                 query.addBindValue(QString::number(Prix));
                                 query.addBindValue(Duree_conservatoire);
                                 query.addBindValue(QString::number(Code_a_barre));
                                 query.addBindValue(QString::number(Quantite_rayon));

                                 query.addBindValue(QString::number(Quantite_stock));





    return    query.exec();



}

bool Produit1::supprimerProduit(int id1)
{

    QSqlQuery query;
    QString res= QString::number(id1);
    query.prepare("Delete from PRODUIT where ID_PRODUIT = :id ");
    query.bindValue(":id", res);
    return    query.exec();
}

QSqlQueryModel* Produit1::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from PRODUIT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Duree_conservatoire"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code_a_barre"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite_rayon"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantite_stock"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("Id_produit"));

    return model;
}
QSqlQueryModel* Produit1::rechercher_Produit(QString idd)
{


   /* QSqlQueryModel *model=new QSqlQueryModel();
     QSqlQuery q;
     q.prepare("select * from PRODUIT1 where ID_PRODUIT=:Id_produit");
     q.bindValue(":Id_produit",idd);
     q.exec();
     model->setQuery(q);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom "));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Duree_conservatoire"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code_a_barre"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite_rayon"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantite_stock"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("Id_produit"));*/
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery q;
    QString s1=idd;
    QString s2=idd;

    q.prepare("select * from PRODUIT where ID_PRODUIT like ? or NOM like ? or PRIX like ?");

    q.addBindValue("%"+idd+"%");
    q.addBindValue("%"+s1+"%");
    q.addBindValue("%"+s2+"%");




    q.exec();
    model->setQuery(q);
    return (model);




}
    void Produit1::modifier(QString Nom,int Id_produit,int Prix,QString Duree_conservatoire,int Code_a_barre,int Quantite_rayon,int Quantite_stock)
    {

        QSqlQuery query;

        query.prepare("update PRODUIT SET NOM = ? ,PRIX = ?,DUREE_CONSERVATOIRE = ?,CODE_A_BARRE = ?,QUANTITE_RAYON = ?,QUANTITE_STOCK = ?  where ID_PRODUIT = ?");

        query.addBindValue(QString::number(Id_produit));
        query.addBindValue(Nom);
        query.addBindValue(QString::number(Prix));
        query.addBindValue(Duree_conservatoire);
        query.addBindValue(QString::number(Code_a_barre));
        query.addBindValue(QString::number(Quantite_rayon));
        query.addBindValue(QString::number(Quantite_stock));

        query.exec();

        if(query.exec())
        {
            QMessageBox::information(NULL,"modify","done");
        }
             else
        {
            QMessageBox::information(NULL,"modify","not done");
        }

    }
    QSqlQueryModel * Produit1::Check_id()
    {
     QSqlQueryModel * model= new QSqlQueryModel();

     model->setQuery("select ID_PRODUIT from PRODUIT1");
      return model;
    }
    QSqlQueryModel* Produit1::rechercher(QString s)
    {
            QSqlQueryModel *model = new QSqlQueryModel;
            QSqlQuery query ;


                    qDebug() << s  ;


                            QString cherche = "%";
                            cherche+=s;
                            cherche+="%";
                            QString rec=("SELECT * FROM PRODUIT1 where (ID_PRODUIT like :Id_produit) ");
                            query.prepare(rec);
                            query.bindValue(":Id_produit", "%"+cherche+"%");



                            query.exec();
                            model->setQuery(query);




                            model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom "));
                            model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
                            model->setHeaderData(2, Qt::Horizontal, QObject::tr("Duree_conservatoire"));
                            model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code_a_barre"));
                            model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite_rayon"));
                            model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantite_stock"));
                            model->setHeaderData(6, Qt::Horizontal, QObject::tr("Id_produit"));
                        return  model ;
    }

    int Produit1::verifier_saisie_donnees(QString Prixver,QString CodeVer,QString quantiterVer,QString quantitesVer,QString idVer)
    {

        int ok=100;
        int i=0;

        if(Nom=="" || Prixver=="" || CodeVer=="" || quantiterVer==""  || quantitesVer=="" || idVer=="")
            return ok=0;

        while(i<Nom.size())
        {
            if(Nom[i].isNumber())
            {
            //QMessageBox::information(this,"information","faute dans la saisie du nom");
            return ok=0;
            //break;
            }
            else i++;

        }
        i=0;
        while(i<Prixver.size())
        {
            if(Prixver[i].isLetter())
            {

            return ok=1;
            //break ;
            }
            else i++;

        }
        i=0;
        while(i<CodeVer.size())
        {
            if(CodeVer[i].isLetter())
            {

            return ok=2;
            //break ;
            }
            else i++;

        }

        i=0;
        while(i<quantiterVer.size())
        {
            if(quantiterVer[i].isLetter())
            {

            return ok=3;
            //break ;
            }
            else i++;

        }
        i=0;
        while(i<quantitesVer.size())
        {
            if(quantitesVer[i].isLetter())
            {

            return ok=4;
            //break ;
            }
            else i++;

        }
        i=0;
        while(i<idVer.size())
        {
            if(idVer[i].isLetter())
            {

            return ok=5;
            //break ;
            }
            else i++;

        }


        return ok;
    }
    QSqlQueryModel * Produit1::Check_nom()
    {
     QSqlQueryModel * model= new QSqlQueryModel();

     model->setQuery("select NOM from PRODUIT");
      return model;
    }

