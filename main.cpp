#include <QApplication>
#include "logindialog.h"
#include "robotclient.h"
#include "robotcontroldialog.h"
#include "cameracontrol.h"
#include "Aria.h"
#include "ArNetworking.h"
#include <QMessageBox>
#include <ActiveQt\QAxWidget>
//shutdown -f Administraor 123456
//352*240   352*288   192.168.1.169  704*480  704*576

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    RobotClient mRobotClient;
    CameraControl mCamera;
    LoginDialog login(0, &mRobotClient);
    RobotControlDialog control(0, &mRobotClient, &mCamera);


    while(!mRobotClient.isInited())
    {
        login.show();
		if (login.exec() == login.Accepted)
        {
            if(true)//mRobotClient.clientConnect(argc, argv))
            {
                //mRobotClient.pClient->runAsync();
                control.show();
                mRobotClient.setInited(true);
            }
            else
            {
                QMessageBox msgBox;
                msgBox.setText("Robot IP is wrong.");
                msgBox.exec();
            }

        }
        else
            exit(0);

    }

        return a.exec();
}
