/********************************************************************************
** Form generated from reading UI file 'robotcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTCONTROLDIALOG_H
#define UI_ROBOTCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <myplotlabel.h>
#include "mylabel.h"
#include "mymaplabel.h"

QT_BEGIN_NAMESPACE

class Ui_RobotControlDialog
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGridLayout *SonarLayout;
    MyMapLabel *MapLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *CompareLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *DistanceLabel;
    QLabel *DistanceValueLabel;
    QLabel *RealDistanceLable;
    QLabel *RealDistanceValueLabel;
    MyPlotLabel *PlotLabel;
    QGridLayout *figureLayout;
    QSpacerItem *verticalSpacerBottom;
    QSpacerItem *verticalSpacerTop;
    MyLabel *figureLabel;
    QSpacerItem *horizontalSpacerRight;
    QSpacerItem *horizontalSpacerLeft;
    QGridLayout *controlLayout;
    QLabel *cameraControlLabel;
    QGridLayout *robotControlLayout;
    QPushButton *robotBackBtn;
    QPushButton *robotForwardBtn;
    QPushButton *robotStopBtn;
    QPushButton *robotRightBtn;
    QPushButton *robotLeftBtn;
    QLabel *robotControlLabel;
    QGridLayout *cameraControlLayout;
    QPushButton *cameraLeftBtn;
    QPushButton *cameraInBtn;
    QPushButton *cameraHomeBtn;
    QPushButton *cameraUpBtn;
    QPushButton *cameraRightBtn;
    QPushButton *cameraDownBtn;
    QPushButton *cameraOutBtn;
    QPushButton *cameraOpenBtn;
    QPushButton *cameraStopBtn;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonMinimize;
    QPushButton *pushButtonClose;
    QLabel *label;

    void setupUi(QDialog *RobotControlDialog)
    {
        if (RobotControlDialog->objectName().isEmpty())
            RobotControlDialog->setObjectName(QStringLiteral("RobotControlDialog"));
        RobotControlDialog->setEnabled(true);
        RobotControlDialog->resize(1091, 828);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RobotControlDialog->sizePolicy().hasHeightForWidth());
        RobotControlDialog->setSizePolicy(sizePolicy);
        RobotControlDialog->setMinimumSize(QSize(0, 800));
        RobotControlDialog->setWindowOpacity(1);
        RobotControlDialog->setAutoFillBackground(true);
        RobotControlDialog->setSizeGripEnabled(true);
        gridLayout_2 = new QGridLayout(RobotControlDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(RobotControlDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("#frame{\n"
"\n"
"border-image:url(E:/ShiLei/code/qtForVS/pic/3.jpg);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton{\n"
"	font: 75 italic 9pt \"Arial\";\n"
"    border:1px solid rgb(228,243,255);\n"
"    background:rgba(255,255,255,0);\n"
"	color: rgb(228, 243, 255);\n"
"}\n"
"QPushButton:hover                                               \n"
"{\n"
"    background: rgba(30,144,255,0.7);                         \n"
"}\n"
"QLabel#DistanceLabel,QLabel#RealDistanceLable,QLabel#robotControlLabel,QLabel#cameraControlLabel,QLabel#label\n"
"{\n"
"    font: 75 italic 9pt \"Arial\";\n"
"    color: rgb(228, 243, 255);\n"
"}\n"
"QLabel#DistanceValueLabel\n"
"{\n"
"   font: 75 italic 9pt \"Arial\";\n"
"   color: rgb(255,255, 0);\n"
"}\n"
"QLabel#RealDistanceValueLabel\n"
"{\n"
"   font: 75 italic 9pt \"Arial\";\n"
"   color: rgb(255, 0, 0);\n"
"}\n"
"QPushButton#pushButtonClose,QPushButton#pushButtonMinimize{\n"
"	font: 75 14pt \"Arial\";\n"
"    border:0px;\n"
"    background:rgba(255,255,255,0);\n"
"	color: rgb(228, 243"
                        ", 255);\n"
"}\n"
"QPushButton#pushButtonClose:hover,QPushButton#pushButtonMinimize:hover                                               \n"
"{\n"
"    background: rgba(210,10,10,0.7);                         \n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        SonarLayout = new QGridLayout();
        SonarLayout->setObjectName(QStringLiteral("SonarLayout"));
        MapLabel = new MyMapLabel(frame);
        MapLabel->setObjectName(QStringLiteral("MapLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MapLabel->sizePolicy().hasHeightForWidth());
        MapLabel->setSizePolicy(sizePolicy1);
        MapLabel->setMinimumSize(QSize(400, 400));
        MapLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        SonarLayout->addWidget(MapLabel, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        SonarLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        SonarLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SonarLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SonarLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout->addLayout(SonarLayout, 1, 2, 1, 1);

        CompareLayout = new QVBoxLayout();
        CompareLayout->setSpacing(0);
        CompareLayout->setObjectName(QStringLiteral("CompareLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        DistanceLabel = new QLabel(frame);
        DistanceLabel->setObjectName(QStringLiteral("DistanceLabel"));
        sizePolicy.setHeightForWidth(DistanceLabel->sizePolicy().hasHeightForWidth());
        DistanceLabel->setSizePolicy(sizePolicy);
        DistanceLabel->setMinimumSize(QSize(0, 15));
        DistanceLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(DistanceLabel);

        DistanceValueLabel = new QLabel(frame);
        DistanceValueLabel->setObjectName(QStringLiteral("DistanceValueLabel"));

        horizontalLayout->addWidget(DistanceValueLabel);

        RealDistanceLable = new QLabel(frame);
        RealDistanceLable->setObjectName(QStringLiteral("RealDistanceLable"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(RealDistanceLable->sizePolicy().hasHeightForWidth());
        RealDistanceLable->setSizePolicy(sizePolicy2);
        RealDistanceLable->setMinimumSize(QSize(0, 15));
        RealDistanceLable->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(RealDistanceLable);

        RealDistanceValueLabel = new QLabel(frame);
        RealDistanceValueLabel->setObjectName(QStringLiteral("RealDistanceValueLabel"));

        horizontalLayout->addWidget(RealDistanceValueLabel);


        CompareLayout->addLayout(horizontalLayout);

        PlotLabel = new MyPlotLabel(frame);
        PlotLabel->setObjectName(QStringLiteral("PlotLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(PlotLabel->sizePolicy().hasHeightForWidth());
        PlotLabel->setSizePolicy(sizePolicy3);
        PlotLabel->setMinimumSize(QSize(400, 130));
        PlotLabel->setBaseSize(QSize(400, 400));
        PlotLabel->setLineWidth(0);

        CompareLayout->addWidget(PlotLabel);


        gridLayout->addLayout(CompareLayout, 2, 2, 1, 1);

        figureLayout = new QGridLayout();
        figureLayout->setSpacing(0);
        figureLayout->setObjectName(QStringLiteral("figureLayout"));
        figureLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        figureLayout->setContentsMargins(0, -1, -1, -1);
        verticalSpacerBottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        figureLayout->addItem(verticalSpacerBottom, 3, 1, 1, 1);

        verticalSpacerTop = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        figureLayout->addItem(verticalSpacerTop, 0, 1, 1, 1);

        figureLabel = new MyLabel(frame);
        figureLabel->setObjectName(QStringLiteral("figureLabel"));
        sizePolicy3.setHeightForWidth(figureLabel->sizePolicy().hasHeightForWidth());
        figureLabel->setSizePolicy(sizePolicy3);
        figureLabel->setMinimumSize(QSize(100, 100));
        figureLabel->setBaseSize(QSize(352, 240));
        figureLabel->setMouseTracking(true);
        figureLabel->setFrameShape(QFrame::Box);
        figureLabel->setLineWidth(0);
        figureLabel->setTextFormat(Qt::AutoText);
        figureLabel->setAlignment(Qt::AlignCenter);

        figureLayout->addWidget(figureLabel, 2, 1, 1, 1);

        horizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        figureLayout->addItem(horizontalSpacerRight, 2, 2, 1, 1);

        horizontalSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        figureLayout->addItem(horizontalSpacerLeft, 2, 0, 1, 1);


        gridLayout->addLayout(figureLayout, 1, 0, 1, 1);

        controlLayout = new QGridLayout();
        controlLayout->setObjectName(QStringLiteral("controlLayout"));
        cameraControlLabel = new QLabel(frame);
        cameraControlLabel->setObjectName(QStringLiteral("cameraControlLabel"));
        cameraControlLabel->setAlignment(Qt::AlignCenter);

        controlLayout->addWidget(cameraControlLabel, 0, 1, 1, 1);

        robotControlLayout = new QGridLayout();
        robotControlLayout->setSpacing(9);
        robotControlLayout->setObjectName(QStringLiteral("robotControlLayout"));
        robotControlLayout->setContentsMargins(-1, 0, -1, 0);
        robotBackBtn = new QPushButton(frame);
        robotBackBtn->setObjectName(QStringLiteral("robotBackBtn"));

        robotControlLayout->addWidget(robotBackBtn, 2, 1, 1, 1);

        robotForwardBtn = new QPushButton(frame);
        robotForwardBtn->setObjectName(QStringLiteral("robotForwardBtn"));
        robotForwardBtn->setStyleSheet(QStringLiteral(""));

        robotControlLayout->addWidget(robotForwardBtn, 0, 1, 1, 1);

        robotStopBtn = new QPushButton(frame);
        robotStopBtn->setObjectName(QStringLiteral("robotStopBtn"));

        robotControlLayout->addWidget(robotStopBtn, 1, 1, 1, 1);

        robotRightBtn = new QPushButton(frame);
        robotRightBtn->setObjectName(QStringLiteral("robotRightBtn"));

        robotControlLayout->addWidget(robotRightBtn, 1, 2, 1, 1);

        robotLeftBtn = new QPushButton(frame);
        robotLeftBtn->setObjectName(QStringLiteral("robotLeftBtn"));

        robotControlLayout->addWidget(robotLeftBtn, 1, 0, 1, 1);


        controlLayout->addLayout(robotControlLayout, 1, 0, 1, 1);

        robotControlLabel = new QLabel(frame);
        robotControlLabel->setObjectName(QStringLiteral("robotControlLabel"));
        robotControlLabel->setMaximumSize(QSize(16777215, 15));
        robotControlLabel->setAlignment(Qt::AlignCenter);

        controlLayout->addWidget(robotControlLabel, 0, 0, 1, 1);

        cameraControlLayout = new QGridLayout();
        cameraControlLayout->setObjectName(QStringLiteral("cameraControlLayout"));
        cameraLeftBtn = new QPushButton(frame);
        cameraLeftBtn->setObjectName(QStringLiteral("cameraLeftBtn"));

        cameraControlLayout->addWidget(cameraLeftBtn, 2, 0, 1, 1);

        cameraInBtn = new QPushButton(frame);
        cameraInBtn->setObjectName(QStringLiteral("cameraInBtn"));

        cameraControlLayout->addWidget(cameraInBtn, 3, 0, 1, 1);

        cameraHomeBtn = new QPushButton(frame);
        cameraHomeBtn->setObjectName(QStringLiteral("cameraHomeBtn"));

        cameraControlLayout->addWidget(cameraHomeBtn, 2, 1, 1, 1);

        cameraUpBtn = new QPushButton(frame);
        cameraUpBtn->setObjectName(QStringLiteral("cameraUpBtn"));

        cameraControlLayout->addWidget(cameraUpBtn, 0, 1, 1, 1);

        cameraRightBtn = new QPushButton(frame);
        cameraRightBtn->setObjectName(QStringLiteral("cameraRightBtn"));

        cameraControlLayout->addWidget(cameraRightBtn, 2, 2, 1, 1);

        cameraDownBtn = new QPushButton(frame);
        cameraDownBtn->setObjectName(QStringLiteral("cameraDownBtn"));

        cameraControlLayout->addWidget(cameraDownBtn, 3, 1, 1, 1);

        cameraOutBtn = new QPushButton(frame);
        cameraOutBtn->setObjectName(QStringLiteral("cameraOutBtn"));

        cameraControlLayout->addWidget(cameraOutBtn, 3, 2, 1, 1);

        cameraOpenBtn = new QPushButton(frame);
        cameraOpenBtn->setObjectName(QStringLiteral("cameraOpenBtn"));

        cameraControlLayout->addWidget(cameraOpenBtn, 0, 0, 1, 1);

        cameraStopBtn = new QPushButton(frame);
        cameraStopBtn->setObjectName(QStringLiteral("cameraStopBtn"));

        cameraControlLayout->addWidget(cameraStopBtn, 0, 2, 1, 1);


        controlLayout->addLayout(cameraControlLayout, 1, 1, 1, 1);


        gridLayout->addLayout(controlLayout, 2, 0, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonMinimize = new QPushButton(frame);
        pushButtonMinimize->setObjectName(QStringLiteral("pushButtonMinimize"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(pushButtonMinimize->sizePolicy().hasHeightForWidth());
        pushButtonMinimize->setSizePolicy(sizePolicy4);
        pushButtonMinimize->setMinimumSize(QSize(20, 0));

        horizontalLayout_2->addWidget(pushButtonMinimize);

        pushButtonClose = new QPushButton(frame);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        sizePolicy.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy);
        pushButtonClose->setMinimumSize(QSize(20, 0));

        horizontalLayout_2->addWidget(pushButtonClose);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMouseTracking(false);
        label->setAcceptDrops(false);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(RobotControlDialog);

        QMetaObject::connectSlotsByName(RobotControlDialog);
    } // setupUi

    void retranslateUi(QDialog *RobotControlDialog)
    {
        MapLabel->setText(QString());
        DistanceLabel->setText(QApplication::translate("RobotControlDialog", "Distance", 0));
        DistanceValueLabel->setText(QString());
        RealDistanceLable->setText(QApplication::translate("RobotControlDialog", "Real Distance", 0));
        RealDistanceValueLabel->setText(QString());
        PlotLabel->setText(QString());
        figureLabel->setText(QString());
        cameraControlLabel->setText(QApplication::translate("RobotControlDialog", "Camera Contral", 0));
        robotBackBtn->setText(QApplication::translate("RobotControlDialog", "Go Back", 0));
        robotForwardBtn->setText(QApplication::translate("RobotControlDialog", "Go Forward", 0));
        robotStopBtn->setText(QApplication::translate("RobotControlDialog", "Stop", 0));
        robotRightBtn->setText(QApplication::translate("RobotControlDialog", "Turn Right", 0));
        robotLeftBtn->setText(QApplication::translate("RobotControlDialog", "Turn Left", 0));
        robotControlLabel->setText(QApplication::translate("RobotControlDialog", "Robot Control", 0));
        cameraLeftBtn->setText(QApplication::translate("RobotControlDialog", "Left", 0));
        cameraInBtn->setText(QApplication::translate("RobotControlDialog", "Zoom In", 0));
        cameraHomeBtn->setText(QApplication::translate("RobotControlDialog", "Home", 0));
        cameraUpBtn->setText(QApplication::translate("RobotControlDialog", "Up", 0));
        cameraRightBtn->setText(QApplication::translate("RobotControlDialog", "Right", 0));
        cameraDownBtn->setText(QApplication::translate("RobotControlDialog", "Down", 0));
        cameraOutBtn->setText(QApplication::translate("RobotControlDialog", "Zoom Out", 0));
        cameraOpenBtn->setText(QApplication::translate("RobotControlDialog", "Open", 0));
        cameraStopBtn->setText(QApplication::translate("RobotControlDialog", "Close", 0));
        pushButtonMinimize->setText(QApplication::translate("RobotControlDialog", "\342\200\224", 0));
        pushButtonClose->setText(QApplication::translate("RobotControlDialog", "X", 0));
        label->setText(QApplication::translate("RobotControlDialog", "Shi Lei - Central South University", 0));
        Q_UNUSED(RobotControlDialog);
    } // retranslateUi

};

namespace Ui {
    class RobotControlDialog: public Ui_RobotControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTCONTROLDIALOG_H
