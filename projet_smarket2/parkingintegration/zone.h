#ifndef ZONE_H
#define ZONE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVector>
#include "Place.h"
#include <QSqlRelationalTableModel>
class Zone
{ private:
    int Numero;
    //int Nombre;
    int Etat;
    QVector <Place> Places;

public:
    int Nombre;
    Zone();
    Zone(int ,int ,int );
    bool ajouterzone();
    int get_nombre();
     int get_numero();
    int get_etat();
   void set_etat(int);
   void set_num(int);
void afficher();
    QSqlQueryModel * afficherzone();
    bool supprimerzone(int);
    void ajouterplace(Place p);
    bool modifierzone(int);

void calculerdispoibiliteplace();
int cherchermat(QString );

int cherchermodele(QString );
int cherchermarque(QString );
bool verifier(QString );
 QSqlQueryModel * tri_par_numero();
 QSqlQueryModel * chercher_avance();
 QSqlQueryModel * nombrepositif();

};

#endif // ZONE_H
