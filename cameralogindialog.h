#ifndef CAMERALOGINDIALOG_H
#define CAMERALOGINDIALOG_H

#include <QDialog>
#include "cameracontrol.h"

namespace Ui {
class CameraLoginDialog;
}

class CameraLoginDialog : public QDialog
{
    Q_OBJECT

public:
    CameraLoginDialog(QWidget *parent = 0, CameraControl *qmpCamera = NULL);
    ~CameraLoginDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CameraLoginDialog *ui;
    CameraControl *mpCamera;
};

#endif // CAMERALOGINDIALOG_H
