
#include "connection.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{ bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("siwar");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
