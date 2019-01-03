#ifndef STOCK_H
#define STOCK_H

#include <QMainWindow>

namespace Ui {
class Stock;
}

class Stock : public QMainWindow
{
    Q_OBJECT

public:
    explicit Stock(QWidget *parent = nullptr);
    ~Stock();

private slots:


    void on_produit_clicked();

    void on_prec_clicked();

    void on_ajputerP_clicked();

    void on_doneP_clicked();

    void on_precP_clicked();

    void on_afficherP_clicked();



    void on_supprimerP_2_clicked();

    void on_precAP_clicked();

    void on_supprimerP_clicked();

    void on_modifierP_clicked();



    void on_done_m_p_clicked();

    void on_prec_m_p_clicked();

    void on_fournisseur_clicked();

    void on_ajouterF_clicked();

    void on_doneF_clicked();

    void on_precF_2_clicked();

    void on_modifierF_clicked();

    void on_doneF_2_clicked();

    void on_precF_3_clicked();

    void on_idC_clicked();

    void on_rechercheF_clicked();
    void on_supprimerF_clicked();

    void on_PrecFA_clicked();

    void on_afficherF_clicked();

    void on_iddd_clicked();

    void on_emailF_clicked();

    void on_precFF_clicked();

    void on_envoyer_clicked();

    void on_precF_clicked();

    void on_ajouterR_clicked();

    void on_modifierR_clicked();

    void on_afficherR_clicked();

    void on_htR_clicked();

    void on_precR_clicked();

    void on_PrecRA_clicked();

    void on_doneR_clicked();

    void on_rayon_clicked();

    void on_doneRM_clicked();

    void on_iddR_clicked();

    void on_precRM_clicked();

    void on_supprimerR_clicked();

    void on_rechercheR_clicked();

    void on_precRA_clicked();

    void on_affichC_clicked();

    void on_ajouterC_clicked();

    void on_imprimerC_clicked();

    void on_modifierC_clicked();

    void on_precC_clicked();

    void on_doneAC_clicked();

    void on_precAC_clicked();

    void on_commande_clicked();

    void on_doneAC_2_clicked();

    void on_precAC_2_clicked();

    void on_idCC_clicked();

    void on_rechercherC_clicked();

    void on_supprimerC_clicked();

    void on_precAC_3_clicked();

    void on_imprimerC_2_clicked();


    void on_lineEdit_rechercheF_textChanged(const QString &arg1);

    //void on_lineEdit_recherche_textChanged(const QString &arg1);

    void on_nomproduitB_clicked();

    void on_imprimerpdfcom_clicked();

    void on_lineEdit_rechercheC_textChanged(const QString &arg1);

    void on_precIMP_clicked();

    void on_quantiteProduitB_clicked();

    void on_lineEdit_recherche_textEdited( QString id);

    void on_pushButton_37_clicked();

private:
    Ui::Stock *ui;
};

#endif // STOCK_H
