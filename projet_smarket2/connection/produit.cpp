#include "produit.h"
#include "ui_produit.h"
#include "parkingintegration/arduino.h"
produit::produit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produit)
{
    ui->setupUi(this);

    ui->tableView_2->setModel(p.afficher_produit());
    indice=-1;
    int ret=a.connect_arduino();
    switch(ret){
    case(0):qDebug()<<"arduino is available and connected to : "<<a.getarduino_port_name();
        break;
    case(1):qDebug()<<"arduino is available but not connected to : "<<a.getarduino_port_name();
        break;
    case(-1):qDebug()<<"arduino is not available";
        break;
    }

     QObject::connect(a.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

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
    p.setDate(ui->dateEdit->text());
    p.setId_produit(ui->lineEdit->text().toInt());
qDebug()<< data;
 data.clear() ;
    bool test=p.ajouter_produit(p);
    ui->tableView_2->setModel(p.afficher_produit());
    if (test){
        a.write_to_arduino("1");
        qDebug()<<"yasssssss";}
    else
        a.write_to_arduino("0");
     /*this->hide();
    produit produitob;
    produitob.setModal(true);
    produitob.exec();*/
}

void produit::on_pushButton_tri_clicked()
{
     ui->tableView_2->setModel(p.tri_par_date());
}

void produit::on_pushButton_mail_clicked()
{
    this->hide();
    uiemail1 emailob;
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
void produit::update_label()
{
    data+=a.read_from_arduino();
ui->lineEdit->setText(data);
qDebug()<<data.toInt();
}

void produit::on_pushButton_3_clicked()
{
    close();
}
