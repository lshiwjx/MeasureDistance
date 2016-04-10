#ifndef ROBOTCONTROLDIALOG_H
#define ROBOTCONTROLDIALOG_H
#include <QDialog>
#include <QTimer>
#include <QRect>
#include "robotclient.h"
#include "cameracontrol.h"
#include "cameralogindialog.h"
#include "mylabel.h"



namespace Ui {
class RobotControlDialog;
}

class RobotControlDialog : public QDialog
{
    Q_OBJECT

public:
    RobotControlDialog(QWidget *parent, RobotClient* = NULL, CameraControl* = NULL);
    ~RobotControlDialog();

    QTimer timer;
//    GraphicsView* mpView;
	double getRobotDistance(int);

private slots:
    void on_robotForwardBtn_clicked();

    void on_robotBackBtn_clicked();

    void on_robotLeftBtn_clicked();

    void on_robotRightBtn_clicked();

    void on_robotStopBtn_clicked();

    void on_cameraUpBtn_clicked();

    void on_cameraDownBtn_clicked();

    void on_cameraLeftBtn_clicked();

    void on_cameraRightBtn_clicked();

    void on_cameraHomeBtn_clicked();

    void on_cameraInBtn_clicked();

    void on_cameraOutBtn_clicked();

    void on_cameraOpenBtn_clicked();

    void saveImage();

    void on_cameraStopBtn_clicked();

	void cameraUpBtn_pressed();

	void cameraDownBtn_pressed();

	void cameraLeftBtn_pressed();

	void cameraRightBtn_pressed();

	void setDistance(float distance);

	void setRobotDistance(int angle);
private:
    Ui::RobotControlDialog *ui;
    RobotClient* mpRobotClient;
    CameraControl* mpCamera;
};

#endif // ROBOTCONTROLDIALOG_H
