#include "robotclient.h"
#include <QMessageBox>

RobotClient::RobotClient()
    :pClient(std::make_shared<ArClientBase>())
{
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

bool RobotClient::isInited() const
{
    return Inited;
}

void RobotClient::setInited(bool value)
{
    Inited = value;
}
