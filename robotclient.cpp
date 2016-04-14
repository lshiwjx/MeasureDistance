#include "robotclient.h"
#include <QMessageBox>

RobotClient::RobotClient()
    :pClient(std::make_shared<ArClientBase>()),
	myHandleLaserFeedbackDataCB(this,&RobotClient::handleLaserFeedbackData)
{
    //bool ret = pClient->addHandler("getLaserRelatedPos", &myHandleLaserFeedbackDataCB);
	//pClient->request("getLaserRelatedPos", 100);
}

RobotClient::~RobotClient()
{
    pClient->disconnect();
    Aria::shutdown();
}

bool RobotClient::clientConnect(int qargc, char** qargv)
{
    Aria::init();
    //Aria::setDirectory(".\\RobotConfig.txt");
    std::string configIp = "ARIAARGS= -host " + mRobotIp + " ";
    putenv(configIp.c_str());
    //putenv("ARIAARGS=-host 192.168.191.5");
    std::string p=getenv("ARIAARGS");
    ArArgumentParser parser(&qargc, qargv);
    ArClientSimpleConnector connector(&parser);
    parser.loadDefaultArguments();
    connector.parseArgs(&parser);

    //config robot ip
    //char charIP[20]={'\0'};
    //mRobotIp.copy(charIP,mRobotIp.length(),0);
    //connector.myHost=charIP;
    //pConnector->myHost = charIP;
    //QMessageBox box;
    //box.setText(QString(connector.myHost));
    //box.exec();

    //connect
    bool ret = connector.connectClient(pClient.get());

	bool ret1 = pClient->addHandler("getLaserRelatedPos", &myHandleLaserFeedbackDataCB);

    return (ret);
}

void RobotClient::goForward()
{
    ArNetPacket sendPacket;
    this->setSpeed(this->getSpeed()+100);
    sendPacket.byte4ToBuf((ArTypes::Byte4)this->mSpeed);
    sendPacket.byte4ToBuf((ArTypes::Byte4)0.0);
    pClient->requestOnce("setMoveInfo", &sendPacket);
}

void RobotClient::goBack()
{
    ArNetPacket sendPacket;
    this->setSpeed(this->getSpeed()-100);
    sendPacket.byte4ToBuf((ArTypes::Byte4)this->mSpeed);
    sendPacket.byte4ToBuf((ArTypes::Byte4)0.0);
    pClient->requestOnce("setMoveInfo", &sendPacket);
}

void RobotClient::turnRight()
{
    ArNetPacket sendPacket;
    this->setRadio(this->getRadio()-3);
    sendPacket.byte4ToBuf((ArTypes::Byte4)0.0);
    sendPacket.byte4ToBuf((ArTypes::Byte4)this->mRadio);
    pClient->requestOnce("setMoveInfo", &sendPacket);
}

void RobotClient::turnLeft()
{
    ArNetPacket sendPacket;
    this->setRadio(this->getRadio()+3);
    sendPacket.byte4ToBuf((ArTypes::Byte4)0.0);
    sendPacket.byte4ToBuf((ArTypes::Byte4)this->mRadio);
    pClient->requestOnce("setMoveInfo", &sendPacket);
}

void RobotClient::stop()
{
    ArNetPacket sendPacket;
    this->setRadio(0);
    this->setSpeed(0);
    sendPacket.byte4ToBuf((ArTypes::Byte4)this->mSpeed);
    sendPacket.byte4ToBuf((ArTypes::Byte4)this->mRadio);
    pClient->requestOnce("setMoveInfo", &sendPacket);
}

double RobotClient::getSpeed() const
{
    return mSpeed;
}

void RobotClient::setSpeed(double speed)
{
    mSpeed = speed;
}

double RobotClient::getRadio() const
{
    return mRadio;
}

void RobotClient::setRadio(double radio)
{
    mRadio = radio;
}

double RobotClient::getDistance(int qangle)
{
	//int sort[3],j=0;
	ArNetPacket laserPacket;
	this->pClient->requestOnce("getLaserRelatedPos");//, &laserPacket);
	mAngle = qangle;
	/*for (int i = 0; i < 10 && j < 3;i++)
	{
		if (myBuffer[qangle*100])
		{
			sort[j++] = myBuffer[qangle*100];
		}
	}*/
	return mDist;
}

bool RobotClient::isInited() const
{
    return Inited;
}

void RobotClient::setInited(bool value)
{
    Inited = value;
}

void RobotClient::handleLaserFeedbackData(ArNetPacket * packet)
{
	int dist = 0;
	int angle = 0;
	int num = 0;
	int distSum = 0;
	//myBuffer.clear();

	short numOfData = packet->bufToByte2();
	if (numOfData > 0)
	{
		for (int i = 0; i < numOfData; i++)
		{
			dist = packet->bufToByte4();
			angle = packet->bufToByte4()/100;
			//myBuffer[angle/100] = dist;
			laserDitance[angle+90] = dist/25;
			if (angle == mAngle)
			{
				distSum += dist;
				num++;
			}
			//if (angle > mAngle)
			//	break;
		}
		if (num)
			mDist = distSum / num;
	}
	else
		mDist = 0;

}
