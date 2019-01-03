#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connexion c;
    bool test=c.ouvrirConnexion();
    if(c.ouvrirConnexion())
        w.show();


    return a.exec();
}
