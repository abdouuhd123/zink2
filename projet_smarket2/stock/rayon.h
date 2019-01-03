#ifndef RAYON_H
#define RAYON_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class rayon
{
private:
    QString nom_produit;
    int id_rayon ;
    int etat ;
    int quantiter;
public:
    rayon();
    rayon(QString nom_produit,int id_rayon,int etat,int quantiter);
    rayon(const rayon &r);
    void setnom_produit(QString nom_produit);
    void setid_rayon(int id_rayon);
    QString getnom_produit();
    int getid_rayon();
    bool ajouter();
    bool supprimer(int id1);
    QSqlQueryModel* afficher();
    QSqlQueryModel* rechercher(QString idd);
    void modifier(QString nom_produit,int id_rayon,int etat,int quantiter);
    QSqlQueryModel * Check_id();



};

#endif // RAYON_H
