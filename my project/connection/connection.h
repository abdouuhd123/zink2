#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

class connection
{
public:
    connection();
    QSqlDatabase mydb;
    void connClose();
    bool connOpen();
private:
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");


};

#endif // CONNECTION_H
