#ifndef ACCIDENTC_H
#define ACCIDENTC_H

#include "connexion.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class accidentc
{public:
    accidentc();
    accidentc(int,QString,QString);
    QString get_type();
    QString get_date_a();
    int get_id();
    void set_id(int idd);
    void set_type(QString typee);
    void set_date(QString datee);

    bool ajouter_accident();
    QSqlQueryModel * afficher_accident();
    bool supprimer_accident(int);
    QSqlQueryModel * rechercher_accident(QString idd);
    QSqlQueryModel * rechercherad_accident(QString idd);
private:
        int id;
    QString type,date_a;

};
#endif // ACCIDENTC_H
