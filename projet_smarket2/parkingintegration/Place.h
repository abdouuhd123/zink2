#ifndef PLACE_H
#define PLACE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Place
{
public:
    QString k;
    QString l;
    QString m;
    QString n;
    QString o;
    QString p;


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
          QSqlQueryModel * tri_par_numero2();
            void selectionner(int);
            QSqlQueryModel *placearduino6();
            QString nombreplaceinferieurasix();
 bool  supprimerverifier(int);
QSqlQueryModel *placearduinocombobo(int no);
private:
    int num;
    int etat;


};

#endif // PLACE_H
