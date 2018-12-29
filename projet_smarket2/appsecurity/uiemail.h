#ifndef UIEMAIL_H
#define UIEMAIL_H
#include <QtMultimedia/QMediaPlayer>

#include <QDialog>

namespace Ui {
class uiemail;
}

class uiemail : public QDialog
{
    Q_OBJECT

public:
    explicit uiemail(QWidget *parent = nullptr);
    ~uiemail();

private slots:
    void sendMail();
    void mailSent(QString status);
    void browse();
    void on_exitBtn_clicked();

    //void on_browseBtn_clicked();

    void on_sendPB_clicked();

    void on_pushButton_34_clicked();





    void on_pushButton_16_clicked();

private:
    Ui::uiemail *ui;
    QStringList files;
    QMediaPlayer *sound;
    QMediaPlayer *sound1;
    int n=1;
};

#endif // UIEMAIL_H
