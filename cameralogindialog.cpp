#include "cameralogindialog.h"
#include "ui_cameralogindialog.h"

CameraLoginDialog::CameraLoginDialog(QWidget *parent, CameraControl *qmpCamera) :
    QDialog(parent),
    mpCamera(qmpCamera),
    ui(new Ui::CameraLoginDialog)
{
    ui->setupUi(this);
}

CameraLoginDialog::~CameraLoginDialog()
{
    delete ui;
}

void CameraLoginDialog::on_pushButton_clicked()
{
    mpCamera->setCameraIp(this->ui->lineEdit->text());
    this->accept();
}

void CameraLoginDialog::on_pushButton_2_clicked()
{
    this->reject();
    this->close();
}
