#ifndef ROBOTCLIENT_H
#define ROBOTCLIENT_H
#include "Aria.h"
#include "ArNetworking.h"
#include <string>
#include <memory>

class RobotClient
{
public:
    RobotClient();
    ~RobotClient();

    std::string getRobotIp(){return mRobotIp;}
    void setRobotIp(std::string qRobotIp){mRobotIp = qRobotIp;}

    std::shared_ptr<ArClientBase> pClient;

    bool clientConnect(int, char**);

    void goForward();
    void goBack();
    void turnRight();
    void turnLeft();
    void stop();

    double getSpeed() const;
    void setSpeed(double speed);

    double getRadio() const;
    void setRadio(double radio);


    bool isInited() const;
    void setInited(bool value);

private:
    std::string mRobotIp = "";
    double mSpeed = 0;
    double mRadio = 0;
    bool Inited = false;
};

#endif // ROBOTCLIENT_H
