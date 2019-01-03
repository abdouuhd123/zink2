#ifndef Produit_H
#define Produit_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Produit
{
private:
    QString Nom;
    int Id_produit;
    int Prix;
    int Code_a_barre ;
    QString Duree_conservatoire ;
    int Quantite_rayon ;
    int Quantite_stock;
public:
    Produit();
    Produit (QString Nom,int Id_produit,int Prix, QString Duree_conservatoire,int Code_a_barre,int Quantite_rayon,int Quantite_stock);
    Produit(const Produit &P);
    void setId_produit(int Id_produit);
    void setNom(QString Nom);
    void setPrix(int Prix);
    void setCode_a_barre(int Code_a_barre);
    void setDuree_conservatoire(QString Duree_conservatoire);
    void setQuantite_rayon(int Quantite_rayon);
    void setQuantite_stock(int Quantite_stock);
    int getId_produit();
    QString getNom();
    float getPrix();
    int getCode_a_barre();
    QString getDuree_conservatoire();
    int getQuantite_rayon();
    int getQuantite_stock();
    bool ajouter();
    bool supprimerProduit(int id1);
    QSqlQueryModel* afficher();
    QSqlQueryModel* rechercher_Produit(QString idd);
    QSqlQueryModel * Check_id();
    QSqlQueryModel*  rechercher(QString s);
    int verifier_saisie_donnees(QString Prixver,QString CodeVer,QString quantiterVer,QString quantitesVer,QString idVer);
    void modifier(QString Nom,int Id_produit,int Prix,QString Duree_conservatoire,int Code_a_barre,int Quantite_rayon,int Quantite_stock);
    QSqlQueryModel * Check_nom();
    



};

#endif // Produit_H
