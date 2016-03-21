#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include <QMessageBox>
#include <QDialog>
#include "robotclient.h"
#include <memory>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    LoginDialog(QWidget *parent = 0, RobotClient* = NULL);
    ~LoginDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::LoginDialog *ui;
    RobotClient* mRobotClient;

};

#endif // LOGINDIALOG_H
