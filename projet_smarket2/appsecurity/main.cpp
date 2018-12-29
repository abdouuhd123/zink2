#include "mainwindow.h"
#include <QApplication>
#include "connexion.h"
#include "smarket.h"
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    smarket w;

    connexion c;


    w.show();
    bool test=c.ouvrirConnexion();
    if(test)
    {//ac.show();
        QMessageBox::critical(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


    return a.exec();
}
