#include "logindialog.h"
#include "ui_logindialog.h"


LoginDialog::LoginDialog(QWidget *parent, RobotClient *qRobotClient) :
    QDialog(parent),
    ui(new Ui::LoginDialog),
    mRobotClient(qRobotClient)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_clicked()
{
    this->mRobotClient->setInited(true);
    this->reject();
    this->close();
}

void LoginDialog::on_pushButton_2_clicked()
{
    mRobotClient->setRobotIp(ui->lineEdit->text().toStdString());
    accept();
}
