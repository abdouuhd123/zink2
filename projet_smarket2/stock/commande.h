#ifndef COMMANDE_H
#define COMMANDE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class commande
{
private:
    QString date;
    int quantite ;
    int id_produit;
    int id_fournisseur;
    int id_commande;


public:
    commande();
    commande(QString date,int quantite,int id_produit,int id_fournisseur,int id_commande);
    commande(const commande &c);
    void setdate(QString date);
    void setquantite(int quantite);
    void setid_produit(int id_produit);
    void setid_fournisseur(int id_fournisseur);
    void setid_commande(int id_commande);
    QString getdate();
    int getquantite();
    int getid_produit();
    int getid_fournisseur();
    int getid_commande();
    bool ajouter();
    bool supprimerCommande(int id1);
    QSqlQueryModel* afficher();
    QSqlQueryModel* rechercher_Commande(QString idd);
    void modifier(QString date,int quantite,int id_produit,int id_fournisseur,int id_commande);
    QSqlQueryModel * Check_id();
    QSqlQueryModel* rechercher(QString s);



};

#endif // COMMANDE_H
