#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "second.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int i;
        QString username=ui->lineEdit_username->text();
        QString password=ui->lineEdit_password->text();
        if(username=="abdou" && password=="abdou")
        {i=1;
        hide();
       second *s= new second; //second *s=new second;
       s->show();
        s->n=i;
        }

       else if(username=="hoe" && password=="hoe")
        {i=5;
        hide();
       second *s= new second;
       s->show();
        s->n=i;
        }
    else {
            ui->statusBar->showMessage("username and password are not correct");
        //QMessageBox::StandardButton reply = QMessageBox::question(this,"acces denied","do you want to try again",QMessageBox::Yes | QMessageBox::No);
        //if (reply == QMessageBox::No) {QApplication::quit();}
        //else
        //{QMessageBox::Cancel;}
        }
}
