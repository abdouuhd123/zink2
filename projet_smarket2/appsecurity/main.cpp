#include "mainwindow.h"
#include <QApplication>

#include "smarket.h"
#include <QMessageBox>
#include "connexion.h"
#include "parkingintegration/connexionp.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    smarket w;

   //connexion c;

connexionp c1;



    w.show();
  // bool test=c.ouvrirConnexion();
   bool test1=c1.createconnexion();
   if(test1)
    {
}
else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection  :( .\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
/*    if(test)
    {//ac.show();
        QMessageBox::critical(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);*/


    return a.exec();
}
