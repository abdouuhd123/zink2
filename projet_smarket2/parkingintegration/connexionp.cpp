#include "connexionp.h"

connexionp::connexionp(){};

bool connexionp::createconnexion()
{bool test=false;
dbp = QSqlDatabase::addDatabase("QODBC");
dbp.setDatabaseName("Source_Projet2A");
dbp.setUserName("system");//inserer nom de l'utilisateur
dbp.setPassword("abdou123");//inserer mot de passe de cet utilisateur

if (dbp.open()){
    qDebug() <<"connexion ok";
    test=true;
}
else{
    qDebug() <<"connexion NON";
    test=false;}
    return  test;
}


void connexionp::closeconnexion()
{dbp.close();}

