#ifndef PARKING_H
#define PARKING_H
#include "Place.h"
#include <QMainWindow>
#include <QDialog>
#include "Zone.h"
#include <QtMultimedia/QMediaPlayer>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSystemTrayIcon>
   #include <QPlainTextEdit>


#include "arduino.h"

namespace Ui {
class parking;

             }
 class QMediaPlayer;
class parking : public QMainWindow
{
    Q_OBJECT

public:
    explicit parking(QWidget *parent = nullptr);
    ~parking();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_client_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_admin_clicked();

    void on_pushButton_ajouter_clicked();

   // void on_pushButton_10_clicked();

    //void on_pushButton_afficher_2_clicked();

    void on_afficher_clicked();

    void on_pushButton_supprimer_clicked();

    void on_supprimer_2_clicked();

    void on_supprimer_clicked();

    void on_pushButton_modifier_clicked();

    void on_modifierzone_clicked();

    void on_ajouterzone_2_clicked();

    void on_modifier_2_clicked();

    void on_ajouterzone_clicked();

    void on_kk_clicked();

    void on_pushButton_6hhh_clicked();

    void on_boutonajouter_clicked();

    void on_ajouter_clicked();

    void on_supprimer_3_clicked();

    void on_modifier_clicked();

    void on_afficherrecherchezone_clicked();

    void on_afficherrecherche_clicked();

    //void on_ajouter_2_clicked();

    void on_ajouterplace_clicked();

    void on_afficher_2_clicked();

    void on_supprimer_4_clicked();

    void on_modifierplace_clicked();

    void on_supprimerplace_4_clicked();

    void on_ajouterplace_5_clicked();

    void on_afficherplace_4_clicked();

    void on_ajouterplace_4_clicked();

    void on_supprimerplace_3_clicked();

    void on_modifierplace_4_clicked();

    void on_afficherplace_clicked();

    void on_supprimerplace_clicked();

    void on_modifierplace_2_clicked();

    void on_afficherplace_2_clicked();

    void on_ajouterplace_2_clicked();

    void on_modifierplace_3_clicked();

    void on_confirmerajout_clicked();

    void on_confirmerajouterzone_clicked();

    void on_modifier_3_clicked();

    void on_pushButton_suppzone_clicked();

    void on_pushButton_confirmermodification_clicked();

    void on_pushButton_confirmersupprimer_clicked();

    void on_place_clicked();

    void on_zone_clicked();

    void on_verifier_clicked();

    void on_retour_3_clicked();

    void on_retour_2_clicked();

    void on_retour_clicked();

    void on_retour_5_clicked();

    void on_retour_6_clicked();

    void on_retour_7_clicked();

    void on_retour_8_clicked();

    void on_retour_4_clicked();

    void on_Retour_clicked();

    void on_ok_clicked();

    void on_confirmer_clicked();

    void on_lineEdit_cherche_textChanged(const QString &arg1);

    void on_chercherplace_clicked();

    void on_pushButton_affichz_clicked();

    void on_test_clicked();

    void on_test2_clicked();

    void on_label_choisirclientadmin_linkActivated(const QString &link);

    void on_page_choisirclientadmin_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_7_clicked();

    void on_filtrer_clicked();



private:
    Ui::parking *ui;
    Zone tmpzone;
     Place tmpplace;
     Place tmpplace1;
     QSystemTrayIcon * notifyIcon;
     QByteArray data; // variable contenant les données reçues
QMediaPlayer *mMediaPlayer;
    Arduino A;
    QMediaPlayer *sound;
    QMediaPlayer *sound1;
     QMediaPlayer *sound3;
};

#endif // PARKING_H
