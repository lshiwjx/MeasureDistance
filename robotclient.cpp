#include "robotclient.h"
#include <QMessageBox>

RobotClient::RobotClient()
    :pClient(std::make_shared<ArClientBase>()),
	myHandleLaserFeedbackDataCB(this,&RobotClient::handleLaserFeedbackData)
{
	if (pClient->dataExists("getLaserRelatedPos"))
	{
		pClient->addHandler("getLaserRelatedPos", &myHandleLaserFeedbackDataCB);
		pClient->request("getLaserRelatedPos", 100);
	}
    mRobotIp = "";
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
    QMessageBox box;
    box.setText(QString(connector.myHost));
    box.exec();

    //connect
    bool ret = connector.connectClient(pClient.get());
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
    this->setRadio(this->getRadio()+3);
    sendPacket.byte4ToBuf((ArTypes::Byte4)0.0);
    sendPacket.byte4ToBuf((ArTypes::Byte4)this->mRadio);
    pClient->requestOnce("setMoveInfo", &sendPacket);
}

void RobotClient::turnLeft()
{
    ArNetPacket sendPacket;
    this->setRadio(this->getRadio()-3);
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
	ArNetPacket laserPacket;
	int dist = 0;
	int angle = 0;
	this->pClient->requestOnce("getLaserRelatedPos", &laserPacket);
	short numOfData = laserPacket.bufToByte2();
	if (numOfData > 0)
	{
		for (int i = 0; i < numOfData; i++)
		{
			dist = laserPacket.bufToByte4();
			angle = laserPacket.bufToByte4();
			if (angle / 100 == qangle)
			{
				return dist;
			}
		}
	}
	return 0.0;
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

	myBuffer.clear();

	int myNumCnt = packet->bufToByte2();

	if (myNumCnt > 0)
	{
		for (int i = 0; i < myNumCnt; i++)
		{
			dist = packet->bufToByte4();
			angle = packet->bufToByte4();
			myBuffer[angle] = dist;
		}
	}
}
