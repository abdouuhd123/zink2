#ifndef BLOCC_H
#define BLOCC_H
#include "parkingintegration/connexionp.h"


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class blocc
{public:
    blocc();
    blocc(int,QString,QString);
    QString get_type();
    QString get_etat();
    int get_id();
    void set_id(int idd);
    void set_type(QString typee);
    void set_etat(QString etatt);

    bool ajouter_bloc();
    QSqlQueryModel * afficher_bloc();
    bool supprimer_bloc(int);
    QSqlQueryModel * rechercher_bloc(QString idd);
    void modifier_bloc(QString c);
    QSqlQueryModel * rechercherad_bloc(QString idd);
    void modifier1_bloc(QString c);


private:
        int id;
    QString type,etat;

};


#endif // BLOCC_H
