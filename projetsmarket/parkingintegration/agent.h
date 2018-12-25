#ifndef AGENT_H
#define AGENT_H
#include <QString>
#include <QSqlQuery>

class agent
{   private:
    QString Id;
    QString Nom;
    QString Prenom;
   QString Mp;
public:
    agent ();
    agent(QString ,QString ,QString ,QString );

   QString getId();
    void setId(QString );
    QString getMp();
    void setMp(QString );
    QString getNom();
    void setNom (QString );

    QString getPrenom();
    void setPrenom(QString prenom);



    bool connexion();

};

#endif // AGENT_H
