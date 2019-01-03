#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connection.h"

#include "produit.h"
#include"chariot.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_LE_username_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
    QString username;
    QString password;
};


#endif // MAINWINDOW_H
