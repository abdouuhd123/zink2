#ifndef MAINWINDOWC_H
#define MAINWINDOWC_H

#include <QDialog>

#include "connection.h"

#include "produit.h"
#include"chariot.h"
#include <QtMultimedia/QMediaPlayer>

namespace Ui {
class mainwindowc;
}

class mainwindowc : public QDialog
{
    Q_OBJECT

public:
    explicit mainwindowc(QWidget *parent = nullptr);
    ~mainwindowc();

private slots:
    void on_pushButton_clicked();

   // void on_LE_username_cursorPositionChanged(int arg1, int arg2);

    //void on_label_linkActivated(const QString &link);

private:
    Ui::mainwindowc *ui;
    QString username;
    QString password;
//   QMediaPlayer *s;

};


#endif // MAINWINDOWC_H
