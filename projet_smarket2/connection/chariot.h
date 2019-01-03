#pragma once
#ifndef CHARIOT_H
#define CHARIOT_H

#include <QTimer>
#include <QDateTime>
#include<QString>
#include<QSqlQuery>
#include<QMessageBox>
#include <QStringList>
#include <QtSql>
#include <QDebug>
#include <QSqlError>
#include<QSqlQueryModel>
#include <QDialog>
#include"classe_chariot.h"
#include"statistique_c.h"
#include"produit.h"
namespace Ui {
class chariot;
}

class chariot : public QDialog
{
    Q_OBJECT

public:
    explicit chariot(QWidget *parent = nullptr);
    ~chariot();

private slots:
    QString showTime();
    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_radioButton_active_clicked();


    void on_radioButton_nonactive_clicked();

    void on_pushButton_tri_clicked();

    void on_pushButton_statistique_clicked();

    void on_lineEdit_recherche_textChanged(const QString &arg1);

    void on_pushButton_modifier_clicked();

    void on_pushButton_effectuer_clicked();

    void on_pushButton_retour_clicked();

//    void on_lineEdit_numchariot_cursorPositionChanged(int arg1, int arg2);

   // void on_beya_cursorPositionChanged(int arg1, int arg2);

    void on_ng_clicked();

    void on_pushButton_37_clicked();

private:
    Ui::chariot *ui;
    classe_chariot c;
    int indice;
    statistique_c *s;
};

#endif // CHARIOT_H
