#ifndef CLASSE_PRODUIT_H
#define CLASSE_PRODUIT_H
#include<QString>
#include<QSqlQuery>
#include<QMessageBox>
#include<QStringList>
#include<QtSql>
#include<QDebug>
#include<QSqlError>
#include<QSqlQueryModel>
class classe_produit
{
public:
    classe_produit();
    int getId_produit(){return id_produit;}
    QString getDate_limite(){return date_limite;}


    void setId_produit(int id_produit){this->id_produit=id_produit;}
    void setDate(QString date_limite){this->date_limite=date_limite;}

    classe_produit(int,QString);

    bool ajouter_produit(classe_produit);

    QSqlQueryModel * afficher_produit();
    void selectionner(int);
    bool supprimer_produit(int);
    QSqlQueryModel *tri_par_date();
private:
    int id_produit;
    QString date_limite;




};


#endif // CLASSE_PRODUIT_H
