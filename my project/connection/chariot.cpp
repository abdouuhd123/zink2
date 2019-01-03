#include "chariot.h"
#include "ui_chariot.h"

chariot::chariot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chariot)
{
    ui->setupUi(this);
    ui->tableView->setModel(c.afficher_chariot());
    indice=-1;

QTimer *timer=new QTimer(this);
                connect(timer, SIGNAL(timeout()),this,SLOT(showTime()));
                timer->start();
ui->lineEdit_heure->setText(showTime());
ui->lineEdit_etat->setVisible(false);
ui->pushButton_effectuer->setVisible(false);



}

chariot::~chariot()
{
    delete ui;
}


QString chariot::showTime()
{
    QTime time=QTime::currentTime();
            QString time_text=time.toString(" hh : mm : ss");
           return time_text;
}
void chariot::on_pushButton_clicked()
{
    c.setRef_chariot(ui->lineEdit_reference->text());
    c.setEtat(ui->lineEdit_etat->text());

    c.setHeure(ui->lineEdit_heure->text());

    if(!(ui->lineEdit_reference->text()).isEmpty())
    {
    c.ajouter_chariot(c);
     this->hide();
    chariot chariotob;
    chariotob.setModal(true);
    chariotob.exec();
    }
    else
    {
        QMessageBox::information(this,tr("error"),tr("le champ ne doit pas etre vide"));
    }


}

void chariot::on_tableView_clicked(const QModelIndex &index)
{
    indice=ui->tableView->model()->index(index.row(),0).data().toInt();
}

void chariot::on_pushButton_2_clicked()
{
    c.selectionner(indice);
    c.supprimer_chariot(indice);
    this->hide();
    chariot chariotob;
    chariotob.setModal(true);
    chariotob.exec();
}

void chariot::on_radioButton_active_clicked()
{
    QString active;
        if(ui->radioButton_active->isChecked())
        {active="active";
        ui->lineEdit_etat->setText(active);}

}


void chariot::on_radioButton_nonactive_clicked()
{
    QString nonactive;
        if(ui->radioButton_nonactive->isChecked())
        {nonactive="non active";
        ui->lineEdit_etat->setText(nonactive);}

}

void chariot::on_pushButton_tri_clicked()
{
    ui->tableView->setModel(c.tri_par_heure());
}

void chariot::on_pushButton_statistique_clicked()
{
    s=new statistique_c(this);
        s->show();
}

void chariot::on_lineEdit_recherche_textChanged(const QString &arg1)
{
    QSqlQueryModel *model=c.rechercher_chariot(ui->lineEdit_recherche->text());
    ui->tableView->setModel(model);
}

void chariot::on_pushButton_modifier_clicked()
{ui->pushButton_effectuer->setVisible(true);
     ui->lineEdit_etat->setVisible(true);
    if(indice>0)
    {
        c.selectionner(indice);
        ui->lineEdit_numchariot->setText(QString::number(indice));
        ui->lineEdit_reference->setText(c.getRef_chariot());
        ui->lineEdit_etat->setText(c.getEtat());
        ui->lineEdit_heure->setText(c.getHeure());


    }
}

void chariot::on_pushButton_effectuer_clicked()
{
    c.selectionner(indice);
    c.setNumchariot(indice);
    c.setRef_chariot(ui->lineEdit_reference->text());
    c.setEtat(ui->lineEdit_etat->text());
    c.setHeure(ui->lineEdit_heure->text());
    if(!(ui->lineEdit_reference->text()).isEmpty())
    {

    c.modifier_chariot(c);
    this->hide();
    chariot chariotob;
    chariotob.setModal(true);
    chariotob.exec();
    }
    else
    {
          QMessageBox::information(this,tr("error"),tr("les champs ne doit pas etre vide"));
    }

}

void chariot::on_pushButton_retour_clicked()
{
    this->hide();
    produit produitob;
    produitob.setModal(true);
   produitob.exec();

}
