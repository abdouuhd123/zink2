#include "produit.h"
#include "ui_produit.h"

produit::produit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produit)
{
    ui->setupUi(this);

    ui->tableView_2->setModel(p.afficher_produit());
    indice=-1;

}

produit::~produit()
{
    delete ui;
}


void produit::on_tableView_2_clicked(const QModelIndex &index)
{
    indice=ui->tableView_2->model()->index(index.row(),0).data().toInt();
}

void produit::on_pushButton_2_clicked()
{
    p.selectionner(indice);
    p.supprimer_produit(indice);
    this->hide();
    produit produitob;
    produitob.setModal(true);
    produitob.exec();
}

void produit::on_pushButton_clicked()
{
    p.setDate(ui->dateEdit->date());

    p.ajouter_produit(p);
     this->hide();
    produit produitob;
    produitob.setModal(true);
    produitob.exec();
}

void produit::on_pushButton_tri_clicked()
{
     ui->tableView_2->setModel(p.tri_par_date());
}

void produit::on_pushButton_mail_clicked()
{
    this->hide();
    uiemail emailob;
    emailob.setModal(true);
    emailob.exec();
}

void produit::on_pushButton_retour_clicked()
{
    this->hide();
    chariot chariotob;
    chariotob.setModal(true);
    chariotob.exec();
}
