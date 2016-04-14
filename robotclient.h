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

	double getDistance(int angle);

    bool isInited() const;
    void setInited(bool value);
	int laserDitance[181] = { 0 };
protected:
	ArFunctor1C<RobotClient, ArNetPacket*> myHandleLaserFeedbackDataCB;
	void handleLaserFeedbackData(ArNetPacket* packet);
	//std::map<int, int> myBuffer;

private:
    std::string mRobotIp = "192.168.191.2";
    double mSpeed = 0;
    double mRadio = 0;
    bool Inited = false;
	double mDist = 0;
	int mAngle = 0;
};

#endif // ROBOTCLIENT_H
