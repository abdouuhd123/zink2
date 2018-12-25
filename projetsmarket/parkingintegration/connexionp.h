#ifndef CONNEXIONP_H
#define CONNEXIONP_H

#include <QtDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class connexionp
{
public:
    connexionp();
    bool createconnexion();
    void closeconnexion();
private :
    QSqlDatabase dbp;
};

#endif // CONNEXIONP_H
