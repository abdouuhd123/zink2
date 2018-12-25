#ifndef SECOND_H
#define SECOND_H
#include <QtMultimedia/QMediaPlayer>
#include "employeec.h"
#include "blocc.h"
#include "accidentc.h"
#include <QDialog>
#include "connexion.h"
//#include "statistic.h"
#include "uiemail.h"
namespace Ui {
class second;
}

class second : public QDialog
{
    Q_OBJECT

public:
    explicit second(QWidget *parent = nullptr);
    ~second();
    int n;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_but_mouvement_clicked();

    void on_but_fire_clicked();

    void on_but_theft_clicked();

    void on_but_employee_clicked();

    void on_but_accident_clicked();

    void on_but_bloc_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_34_clicked();

    //void on_lineEdit_8_textEdited(QString id);

    void on_pushButton_35_clicked();

    void on_pushButton_36_clicked();

    void on_lineEdit_textEdited(QString s);

private:
    Ui::second *ui;
    QMediaPlayer *sound;
    QMediaPlayer *sound1;
    QMediaPlayer *alarm;
    accidentc a;
    employeec e;
    blocc b;
    //statistic st;
    uiemail em;
};

#endif // SECOND_H
