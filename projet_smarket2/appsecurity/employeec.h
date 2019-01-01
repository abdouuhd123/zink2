#ifndef EMPLOYEEC_H
#define EMPLOYEEC_H

#include "parkingintegration/connexionp.h"

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class employeec
{public:
    employeec();
    employeec(int,QString,QString);
    QString get_nom();
    QString get_prenom();
    int get_id();
    void set_id(int idd);
    void set_nom(QString nomm);
    void set_prenom(QString prenomm);

    bool ajouter_employee();
    QSqlQueryModel * afficher_employee();
    bool supprimer_employee(int);
    QSqlQueryModel* rechercher_employee(QString idd);
    QSqlQueryModel * rechercherad_employee(QString idd);


private:
    QString nom,prenom;
    int id;
};

#endif // EMPLOYEEC_H
