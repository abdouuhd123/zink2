#include "produit.h"
#include <QDebug>
#include <QMessageBox>



Produit::Produit()
{
Nom="";
Id_produit=0 ;
Prix=0;
Duree_conservatoire="";
Code_a_barre=0;
Quantite_rayon=0;
Quantite_stock=0;
}
Produit:: Produit (QString Nom,int Id_produit,int Prix, QString Duree_conservatoire,int Code_a_barre,int Quantite_rayon,int Quantite_stock)
{
  this->Nom=Nom;
  this->Id_produit=Id_produit;
  this->Duree_conservatoire=Duree_conservatoire;
  this->Prix=Prix;
  this->Code_a_barre=Code_a_barre;
  this->Quantite_stock=Quantite_stock;
  this->Quantite_rayon=Quantite_rayon;
}
Produit::Produit(const Produit &P)
{
   Nom=P.Nom;
   Id_produit=P.Id_produit;
  Quantite_stock=P.Quantite_stock;
  Quantite_rayon=P.Quantite_rayon;
  Duree_conservatoire=P.Duree_conservatoire ;
  Prix=P.Prix;
  Code_a_barre=P.Code_a_barre;

}
void Produit::setId_produit(int Id_produit){Id_produit=Id_produit;}
    void Produit::setNom(QString Nom){Nom=Nom;}
    void Produit::setPrix(int Prix){Prix=Prix;}
    void Produit::setCode_a_barre(int Code_a_barre){Code_a_barre=Code_a_barre;}
    void Produit::setDuree_conservatoire(QString Duree_conservatoire){Duree_conservatoire=Duree_conservatoire;}
    void Produit::setQuantite_rayon(int Quantite_rayon){Quantite_rayon=Quantite_rayon;}
    void Produit::setQuantite_stock(int Quantite_stock){Quantite_stock=Quantite_stock;}
    int Produit::getId_produit(){return Id_produit;}
QString Produit::getNom(){return Nom;}
    float Produit::getPrix(){return Prix;}
    int Produit::getCode_a_barre(){return Code_a_barre;}
    QString Produit::getDuree_conservatoire(){return Duree_conservatoire;}
    int Produit::getQuantite_rayon(){return Quantite_rayon;}
    int Produit::getQuantite_stock(){return Quantite_stock;}




bool Produit::ajouter()
{

    QSqlQuery query;

    query.prepare("INSERT INTO PRODUIT (NOM, PRIX, DUREE_CONSERVATOIRE, CODE_A_BARRE, QUANTITE_RAYON, QUANTITE_STOCK,ID_PRODUIT) "
                        "VALUES (:Nom, :Id_produit, :Prix, :Duree_conservatoire, :Code_a_barre, :Quantite_rayon, :Quantite_stock)");



                                 query.addBindValue(Nom);

                                 query.addBindValue(QString::number(Prix));
                                 query.addBindValue(Duree_conservatoire);
                                 query.addBindValue(QString::number(Code_a_barre));
                                 query.addBindValue(QString::number(Quantite_rayon));
                                 query.addBindValue(QString::number(Quantite_stock));
                                 query.addBindValue(QString::number(Id_produit));
    return    query.exec();
}

bool Produit::supprimerProduit(int id1)
{
    QSqlQuery query;
    int test = -1 ;
    query.prepare("select * from PRODUIT where ID_PRODUIT = ?");
    query.addBindValue(QString::number(id1));
    query.exec();
            while(query.next())
            {
                if(query.value(1)!="")
                    test=1;
            }
                    if(test==1)
                    {
                    query.prepare("DELETE FROM PRODUIT where ID_PRODUIT=?");

                    query.addBindValue(QString::number(id1));
                    }


                    if(query.exec()&& test==1)
                         { QMessageBox::information(NULL,"delete","done");}
                           else
                           QMessageBox::information(NULL,"delete","verifier l id  ");

                    return  query.exec();
}

QSqlQueryModel* Produit::afficher()
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
QSqlQueryModel* Produit::rechercher_Produit(QString idd)
{


    QSqlQueryModel *model=new QSqlQueryModel();
     QSqlQuery q;
     q.prepare("select * from PRODUIT where ID_PRODUIT=:Id_produit");
     q.bindValue(":Id_produit",idd);
     q.exec();
     model->setQuery(q);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom "));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Duree_conservatoire"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code_a_barre"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite_rayon"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantite_stock"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("Id_produit"));




                return model;
}
    void Produit::modifier(QString Nom,int Id_produit,int Prix,QString Duree_conservatoire,int Code_a_barre,int Quantite_rayon,int Quantite_stock)
    {

        QSqlQuery query;

        query.prepare("update PRODUIT SET NOM = ? ,PRIX = ?,DUREE_CONSERVATOIRE = ?,CODE_A_BARRE = ?,QUANTITE_RAYON = ?,QUANTITE_STOCK = ?  where ID_PRODUIT = ?");


        query.addBindValue(Nom);
        query.addBindValue(QString::number(Prix));
        query.addBindValue(Duree_conservatoire);
        query.addBindValue(QString::number(Code_a_barre));
        query.addBindValue(QString::number(Quantite_rayon));
        query.addBindValue(QString::number(Quantite_stock));
        query.addBindValue(QString::number(Id_produit));
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
    QSqlQueryModel * Produit::Check_id()
    {
     QSqlQueryModel * model= new QSqlQueryModel();

     model->setQuery("select ID_PRODUIT from PRODUIT");
      return model;
    }
    QSqlQueryModel* Produit::rechercher(QString s)
    {
            QSqlQueryModel *model = new QSqlQueryModel;
            QSqlQuery query ;


                    qDebug() << s  ;


                            QString cherche = "%";
                            cherche+=s;
                            cherche+="%";
                            QString rec=("SELECT * FROM PRODUIT where (ID_PRODUIT like :Id_produit) ");
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

    int Produit::verifier_saisie_donnees(QString Prixver,QString CodeVer,QString quantiterVer,QString quantitesVer,QString idVer)
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
    QSqlQueryModel * Produit::Check_nom()
    {
     QSqlQueryModel * model= new QSqlQueryModel();

     model->setQuery("select NOM from PRODUIT");
      return model;
    }
