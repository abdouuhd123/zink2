#ifndef SMARKET_H
#define SMARKET_H

#include <QMainWindow>
//#include "C:\Users\ASUS\Documents\projetsmarket\appsecurity\mainwindow.h"
#include "appsecurity/mainwindow.h"
#include "parkingintegration/parking.h"
#include "connection/mainwindowc.h"

namespace Ui {
class smarket;
}

class smarket : public QMainWindow
{
    Q_OBJECT

public:
    explicit smarket(QWidget *parent = nullptr);
    ~smarket();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::smarket *ui;
};

#endif // SMARKET_H
