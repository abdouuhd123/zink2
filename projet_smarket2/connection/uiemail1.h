#ifndef UIEMAIL1_H
#define UIEMAIL1_H

#include <QDialog>

namespace Ui {
class uiemail1;
}

class uiemail1 : public QDialog
{
    Q_OBJECT

public:
    explicit uiemail1(QWidget *parent = 0);
    ~uiemail1();

private slots:
    void sendMail();
    void mailSent(QString status);
    void browse();
    void on_exitBtn_clicked();

   // void on_browseBtn_clicked();

    void on_sendPB_clicked();

private:
    Ui::uiemail1 *ui;
    QStringList files;
};

#endif // UIEMAIL1_H
