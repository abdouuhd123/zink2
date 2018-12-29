#ifndef CLASSE_CHARIOT_H
#define CLASSE_CHARIOT_H
#include<QString>
#include<QSqlQuery>
#include<QMessageBox>
#include<QStringList>
#include<QtSql>
#include<QDebug>
#include<QSqlError>
#include<QSqlQueryModel>
class classe_chariot
{
public:
    classe_chariot();
    classe_chariot(int,QString,QString,QString);
    int getNumchariot(){return num_chariot;}
    QString getRef_chariot(){return ref_chariot;}
    QString getEtat(){return etat;}
    QString getHeure(){return heure;}


    void setNumchariot(int num_chariot){this->num_chariot=num_chariot;}
    void setRef_chariot(QString ref_chariot){this->ref_chariot=ref_chariot;}
    void setEtat(QString etat){this->etat=etat;}
    void setHeure(QString heure){this->heure=heure;}



    void ajouter_chariot(classe_chariot);


    QSqlQueryModel * afficher_chariot();
    QSqlQueryModel * tri_par_heure();
    void selectionner(int);
    bool supprimer_chariot(int);
    QSqlQueryModel * rechercher_chariot(QString);
    void modifier_chariot(classe_chariot );

private:
    int num_chariot;
    QString ref_chariot;
    QString etat;
    QString heure;




};




#endif // CLASSE_CHARIOT_H
