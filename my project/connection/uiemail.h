#ifndef UIEMAIL_H
#define UIEMAIL_H

#include <QDialog>

namespace Ui {
class uiemail;
}

class uiemail : public QDialog
{
    Q_OBJECT

public:
    explicit uiemail(QWidget *parent = 0);
    ~uiemail();

private slots:
    void sendMail();
    void mailSent(QString status);
    void browse();
    void on_exitBtn_clicked();

private:
    Ui::uiemail *ui;
    QStringList files;
};

#endif // UIEMAIL_H
