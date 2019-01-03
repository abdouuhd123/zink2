#pragma once
#ifndef PRODUIT_H
#define PRODUIT_H

#include<QString>
#include<QSqlQuery>
#include<QMessageBox>
#include <QStringList>
#include <QtSql>
#include <QDebug>
#include <QSqlError>
#include<QSqlQueryModel>
#include <QDialog>
#include"classe_produit.h"
#include"uiemail1.h"
#include"chariot.h"
#include"parkingintegration/arduino.h"

namespace Ui {
class produit;
}

class produit : public QDialog
{
    Q_OBJECT

public:
    explicit produit(QWidget *parent = nullptr);
    ~produit();

private slots:


    void on_tableView_2_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_tri_clicked();

    void on_pushButton_mail_clicked();

    void on_pushButton_retour_clicked();

    //void on_lineEdit_cursorPositionChanged(int arg1, int arg2);
    void update_label();

    void on_pushButton_3_clicked();

private:
    Ui::produit *ui;
    classe_produit p;
    int indice;
    Arduino a ;
    QByteArray data;
};

#endif // PRODUIT_H
