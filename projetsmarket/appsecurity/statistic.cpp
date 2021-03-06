#include "statistic.h"
#include "ui_statistic.h"
#include <QtSql>
#include<QMap>
#include <iostream>
#include <QString>
#include<time.h>
#include <QTime>
#include <QDialog>
#include <qdialog.h>
#include <ctime>
#include<vector>
#include <QLineEdit>
#include <cstring>
#include <QSharedPointer>
#include<QSharedDataPointer>
//#include<qsharedpointer.h>
#include <QSharedPointer>
#include"qcustomplot.h"
#include "connexion.h"
#include "second.h"
statistic::statistic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistic)
{
    ui->setupUi(this);
    // set dark background gradient:
                   QLinearGradient gradient(0, 0, 0, 400);
                   gradient.setColorAt(0, QColor(90, 90, 90));
                   gradient.setColorAt(0.38, QColor(105, 105, 105));
                   gradient.setColorAt(1, QColor(70, 70, 70));
                   ui->widget->setBackground(QBrush(gradient));

                   // create empty bar chart objects:
                   QCPBars *regen = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);

                   regen->setAntialiased(false); // gives more crisp, pixel aligned bar borders


                   // set names and colors:

                   regen->setName("accidents number");
                   regen->setPen(QPen(QColor(0, 168, 140).lighter(180)));
                   regen->setBrush(QColor(0, 168, 140));



                   // prepare x axis with etat labels:
                   QVector<double> ticks;
                   QVector<QString> labels;

                   QVector<double> regenData;


                   ticks << 1 << 2 << 3 << 4 << 5 ;
                   QSqlQuery q;
               q.prepare("select TYPE ,count(ID)as somme from ACCIDENT group by TYPE ");

                   if(q.exec()){
                   while (q.next()) {


                    labels << q.value(0).toString();

                    regenData   << q.value(1).toDouble();

                   }}
                   QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
                   textTicker->addTicks(ticks, labels);

                   ui->widget->xAxis->setTicker(textTicker);
                   ui->widget->xAxis->setTickLabelRotation(60);
                   ui->widget->xAxis->setTickLength(0, 4);
                   ui->widget->xAxis->setRange(0, 4);
                   ui->widget->xAxis->setLabel("type of accident");

                   ui->widget->xAxis->setBasePen(QPen(Qt::white));
                   ui->widget->xAxis->setTickPen(QPen(Qt::white));
                   ui->widget->xAxis->grid()->setVisible(true);
                   ui->widget->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
                   ui->widget->xAxis->setTickLabelColor(Qt::white);
                   ui->widget->xAxis->setLabelColor(Qt::white);

                   // prepare y axis:
                   ui->widget->yAxis->setRange(0,10);
                   ui->widget->yAxis->setPadding(5); // a bit more space to the left border
                   ui->widget->yAxis->setLabel("number");
                   ui->widget->yAxis->setBasePen(QPen(Qt::white));
                   ui->widget->yAxis->setTickPen(QPen(Qt::white));
                   ui->widget->yAxis->setSubTickPen(QPen(Qt::white));
                   ui->widget->yAxis->grid()->setSubGridVisible(true);
                   ui->widget->yAxis->setTickLabelColor(Qt::white);
                   ui->widget->yAxis->setLabelColor(Qt::white);
                   ui->widget->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
                   ui->widget->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

                   // Add data:

                   regen->setData(ticks, regenData);

                   // setup legend:
                   ui->widget->legend->setVisible(true);
                   ui->widget->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
                   ui->widget->legend->setBrush(QColor(255, 255, 255, 100));
                   ui->widget->legend->setBorderPen(Qt::NoPen);
                   QFont legendFont = font();
                   legendFont.setPointSize(10);
                   ui->widget->legend->setFont(legendFont);
                   ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

statistic::~statistic()
{
    delete ui;
}



/*void statistic::on_pushButton_clicked()
{
    hide();
    second *s=new second;
    s->show();

}*/
