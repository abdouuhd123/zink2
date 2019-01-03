#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Fournisseur
{
private:
    int Id_fournisseur;
    QString Nom ;
    QString Adresse;
    int Telephone ;
public:
    Fournisseur();
    Fournisseur(int Id_fournisseur,QString Nom,QString Adresse,int Telephone);
    Fournisseur(const Fournisseur &f);
    void setId_fournisseur(int Id_fournisseur);
    void setNom(QString nom);
    void setAdresse(QString Adresse);
    void setTelephone(int Telephone);
    int getID_fournisseur();
    QString getNom();
    QString getAdresse();
    int getTelephone();

    bool ajouter();
    bool supprimerFournisseur(int id1);
    QSqlQueryModel* afficher();
    QSqlQueryModel* rechercher_Fournisseur(QString idd);
    QSqlQueryModel * Check_id();
    void modifier(int Id_fournisseur,QString Nom,QString Adresse,int Telephone);
QSqlQueryModel* rechercher_fournisseur(QString s);
int verifier_saisie_donnees(QString TelVerif ,QString idfVerif);


};

#endif // FOURNISSEUR_H
