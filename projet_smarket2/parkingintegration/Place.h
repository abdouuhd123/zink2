#ifndef PLACE_H
#define PLACE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Place
{
public:
    Place();
    Place(int,int);
    int getNump();
   int getEtat();
     int setEtat();

    bool ajouter(int);
    QSqlQueryModel * afficher();
   bool supprimer(int);
       bool modifierplace(int numero);
         QSqlQueryModel * placedanslazone(QString);
          QSqlQueryModel * tri_par_numero();
            void selectionner(int);


private:
    int num;
    int etat;


};

#endif // PLACE_H
