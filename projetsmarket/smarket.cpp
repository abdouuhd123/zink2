#include "smarket.h"
#include "ui_smarket.h"
//#include "C:\Users\ASUS\Documents\projetsmarket\appsecurity\mainwindow.h"
#include "appsecurity/mainwindow.h"
#include "parkingintegration/parking.h"
#include "connection/mainwindowc.h"
smarket::smarket(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::smarket)
{
    ui->setupUi(this);
}

smarket::~smarket()
{
    delete ui;
}

void smarket::on_pushButton_clicked()
{
    this->hide();
    MainWindow *m= new MainWindow;
    m->show();
}

void smarket::on_pushButton_2_clicked()
{
    this->hide();
    parking *p= new parking;
    p->show();
}

void smarket::on_pushButton_3_clicked()
{
    this->hide();
    mainwindowc *c= new mainwindowc;
    c->show();
}
