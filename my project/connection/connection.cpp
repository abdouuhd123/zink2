#include "connection.h"


connection::connection()
{

}

void connection:: connClose()
{
    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool connection::connOpen()
{

    mydb = QSqlDatabase::addDatabase("QODBC");
    mydb.setDatabaseName("Projet_2A");
    mydb.setUserName("beya");
    mydb.setPassword("beya123");
    if(mydb.open())
    {
        qDebug() << "connected";

        return true ;
    }
    else
    {
         qDebug()<<"NOT connected";
         return false ;
    }
}
