/********************************************************************************
** Form generated from reading UI file 'robotcontroldialogHp6100.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ROBOTCONTROLDIALOGHP6100_H
#define ROBOTCONTROLDIALOGHP6100_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
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
    QGridLayout *gridLayout;
    QGridLayout *SonarLayout;
    MyMapLabel *MapLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *CompareLayout;
    QHBoxLayout *horizontalLayout_2;
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
    QLabel *robotControlLabel;
    QGridLayout *robotControlLayout;
    QPushButton *robotBackBtn;
    QPushButton *robotForwardBtn;
    QPushButton *robotStopBtn;
    QPushButton *robotRightBtn;
    QPushButton *robotLeftBtn;

    void setupUi(QDialog *RobotControlDialog)
    {
        if (RobotControlDialog->objectName().isEmpty())
            RobotControlDialog->setObjectName(QStringLiteral("RobotControlDialog"));
        RobotControlDialog->setEnabled(true);
        RobotControlDialog->resize(1278, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RobotControlDialog->sizePolicy().hasHeightForWidth());
        RobotControlDialog->setSizePolicy(sizePolicy);
        RobotControlDialog->setMinimumSize(QSize(0, 800));
        RobotControlDialog->setWindowOpacity(1);
        RobotControlDialog->setAutoFillBackground(true);
        RobotControlDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(RobotControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        SonarLayout = new QGridLayout();
        SonarLayout->setObjectName(QStringLiteral("SonarLayout"));
        MapLabel = new MyMapLabel(RobotControlDialog);
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


        gridLayout->addLayout(SonarLayout, 0, 3, 1, 1);

        CompareLayout = new QVBoxLayout();
        CompareLayout->setSpacing(0);
        CompareLayout->setObjectName(QStringLiteral("CompareLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        DistanceLabel = new QLabel(RobotControlDialog);
        DistanceLabel->setObjectName(QStringLiteral("DistanceLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(DistanceLabel->sizePolicy().hasHeightForWidth());
        DistanceLabel->setSizePolicy(sizePolicy2);
        DistanceLabel->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(DistanceLabel);

        DistanceValueLabel = new QLabel(RobotControlDialog);
        DistanceValueLabel->setObjectName(QStringLiteral("DistanceValueLabel"));

        horizontalLayout_2->addWidget(DistanceValueLabel);

        RealDistanceLable = new QLabel(RobotControlDialog);
        RealDistanceLable->setObjectName(QStringLiteral("RealDistanceLable"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(RealDistanceLable->sizePolicy().hasHeightForWidth());
        RealDistanceLable->setSizePolicy(sizePolicy3);
        RealDistanceLable->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(RealDistanceLable);

        RealDistanceValueLabel = new QLabel(RobotControlDialog);
        RealDistanceValueLabel->setObjectName(QStringLiteral("RealDistanceValueLabel"));

        horizontalLayout_2->addWidget(RealDistanceValueLabel);


        CompareLayout->addLayout(horizontalLayout_2);

        PlotLabel = new MyPlotLabel(RobotControlDialog);
        PlotLabel->setObjectName(QStringLiteral("PlotLabel"));
        sizePolicy1.setHeightForWidth(PlotLabel->sizePolicy().hasHeightForWidth());
        PlotLabel->setSizePolicy(sizePolicy1);
        PlotLabel->setMinimumSize(QSize(400, 130));
        PlotLabel->setBaseSize(QSize(400, 400));

        CompareLayout->addWidget(PlotLabel);


        gridLayout->addLayout(CompareLayout, 2, 3, 1, 1);

        figureLayout = new QGridLayout();
        figureLayout->setObjectName(QStringLiteral("figureLayout"));
        figureLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        figureLayout->setContentsMargins(0, -1, -1, -1);
        verticalSpacerBottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        figureLayout->addItem(verticalSpacerBottom, 3, 1, 1, 1);

        verticalSpacerTop = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        figureLayout->addItem(verticalSpacerTop, 0, 1, 1, 1);

        figureLabel = new MyLabel(RobotControlDialog);
        figureLabel->setObjectName(QStringLiteral("figureLabel"));
        sizePolicy2.setHeightForWidth(figureLabel->sizePolicy().hasHeightForWidth());
        figureLabel->setSizePolicy(sizePolicy2);
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


        gridLayout->addLayout(figureLayout, 0, 0, 1, 1);

        controlLayout = new QGridLayout();
        controlLayout->setObjectName(QStringLiteral("controlLayout"));
        cameraControlLabel = new QLabel(RobotControlDialog);
        cameraControlLabel->setObjectName(QStringLiteral("cameraControlLabel"));

        controlLayout->addWidget(cameraControlLabel, 0, 1, 1, 1);

        cameraControlLayout = new QGridLayout();
        cameraControlLayout->setObjectName(QStringLiteral("cameraControlLayout"));
        cameraLeftBtn = new QPushButton(RobotControlDialog);
        cameraLeftBtn->setObjectName(QStringLiteral("cameraLeftBtn"));

        cameraControlLayout->addWidget(cameraLeftBtn, 2, 0, 1, 1);

        cameraInBtn = new QPushButton(RobotControlDialog);
        cameraInBtn->setObjectName(QStringLiteral("cameraInBtn"));

        cameraControlLayout->addWidget(cameraInBtn, 3, 0, 1, 1);

        cameraHomeBtn = new QPushButton(RobotControlDialog);
        cameraHomeBtn->setObjectName(QStringLiteral("cameraHomeBtn"));

        cameraControlLayout->addWidget(cameraHomeBtn, 2, 1, 1, 1);

        cameraUpBtn = new QPushButton(RobotControlDialog);
        cameraUpBtn->setObjectName(QStringLiteral("cameraUpBtn"));

        cameraControlLayout->addWidget(cameraUpBtn, 0, 1, 1, 1);

        cameraRightBtn = new QPushButton(RobotControlDialog);
        cameraRightBtn->setObjectName(QStringLiteral("cameraRightBtn"));

        cameraControlLayout->addWidget(cameraRightBtn, 2, 2, 1, 1);

        cameraDownBtn = new QPushButton(RobotControlDialog);
        cameraDownBtn->setObjectName(QStringLiteral("cameraDownBtn"));

        cameraControlLayout->addWidget(cameraDownBtn, 3, 1, 1, 1);

        cameraOutBtn = new QPushButton(RobotControlDialog);
        cameraOutBtn->setObjectName(QStringLiteral("cameraOutBtn"));

        cameraControlLayout->addWidget(cameraOutBtn, 3, 2, 1, 1);

        cameraOpenBtn = new QPushButton(RobotControlDialog);
        cameraOpenBtn->setObjectName(QStringLiteral("cameraOpenBtn"));

        cameraControlLayout->addWidget(cameraOpenBtn, 0, 0, 1, 1);

        cameraStopBtn = new QPushButton(RobotControlDialog);
        cameraStopBtn->setObjectName(QStringLiteral("cameraStopBtn"));

        cameraControlLayout->addWidget(cameraStopBtn, 0, 2, 1, 1);


        controlLayout->addLayout(cameraControlLayout, 1, 1, 1, 1);

        robotControlLabel = new QLabel(RobotControlDialog);
        robotControlLabel->setObjectName(QStringLiteral("robotControlLabel"));

        controlLayout->addWidget(robotControlLabel, 0, 0, 1, 1);

        robotControlLayout = new QGridLayout();
        robotControlLayout->setObjectName(QStringLiteral("robotControlLayout"));
        robotBackBtn = new QPushButton(RobotControlDialog);
        robotBackBtn->setObjectName(QStringLiteral("robotBackBtn"));

        robotControlLayout->addWidget(robotBackBtn, 2, 1, 1, 1);

        robotForwardBtn = new QPushButton(RobotControlDialog);
        robotForwardBtn->setObjectName(QStringLiteral("robotForwardBtn"));

        robotControlLayout->addWidget(robotForwardBtn, 0, 1, 1, 1);

        robotStopBtn = new QPushButton(RobotControlDialog);
        robotStopBtn->setObjectName(QStringLiteral("robotStopBtn"));

        robotControlLayout->addWidget(robotStopBtn, 1, 1, 1, 1);

        robotRightBtn = new QPushButton(RobotControlDialog);
        robotRightBtn->setObjectName(QStringLiteral("robotRightBtn"));

        robotControlLayout->addWidget(robotRightBtn, 1, 2, 1, 1);

        robotLeftBtn = new QPushButton(RobotControlDialog);
        robotLeftBtn->setObjectName(QStringLiteral("robotLeftBtn"));

        robotControlLayout->addWidget(robotLeftBtn, 1, 0, 1, 1);


        controlLayout->addLayout(robotControlLayout, 1, 0, 1, 1);


        gridLayout->addLayout(controlLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(cameraOpenBtn, cameraStopBtn);
        QWidget::setTabOrder(cameraStopBtn, cameraUpBtn);
        QWidget::setTabOrder(cameraUpBtn, cameraLeftBtn);
        QWidget::setTabOrder(cameraLeftBtn, cameraDownBtn);
        QWidget::setTabOrder(cameraDownBtn, cameraRightBtn);
        QWidget::setTabOrder(cameraRightBtn, cameraHomeBtn);
        QWidget::setTabOrder(cameraHomeBtn, cameraInBtn);
        QWidget::setTabOrder(cameraInBtn, cameraOutBtn);
        QWidget::setTabOrder(cameraOutBtn, robotLeftBtn);
        QWidget::setTabOrder(robotLeftBtn, robotRightBtn);
        QWidget::setTabOrder(robotRightBtn, robotForwardBtn);
        QWidget::setTabOrder(robotForwardBtn, robotBackBtn);
        QWidget::setTabOrder(robotBackBtn, robotStopBtn);

        retranslateUi(RobotControlDialog);

        QMetaObject::connectSlotsByName(RobotControlDialog);
    } // setupUi

    void retranslateUi(QDialog *RobotControlDialog)
    {
        MapLabel->setText(QString());
        DistanceLabel->setText(QApplication::translate("RobotControlDialog", "\350\267\235\347\246\273", 0));
        DistanceValueLabel->setText(QString());
        RealDistanceLable->setText(QApplication::translate("RobotControlDialog", "\345\256\236\351\231\205\350\267\235\347\246\273", 0));
        RealDistanceValueLabel->setText(QString());
        PlotLabel->setText(QString());
        figureLabel->setText(QString());
        cameraControlLabel->setText(QApplication::translate("RobotControlDialog", "\346\221\204\345\203\217\345\244\264\346\216\247\345\210\266", 0));
        cameraLeftBtn->setText(QApplication::translate("RobotControlDialog", "\345\267\246\347\247\273", 0));
        cameraInBtn->setText(QApplication::translate("RobotControlDialog", "\347\274\251\345\260\217", 0));
        cameraHomeBtn->setText(QApplication::translate("RobotControlDialog", "Home", 0));
        cameraUpBtn->setText(QApplication::translate("RobotControlDialog", "\344\270\212\347\247\273", 0));
        cameraRightBtn->setText(QApplication::translate("RobotControlDialog", "\345\217\263\347\247\273", 0));
        cameraDownBtn->setText(QApplication::translate("RobotControlDialog", "\344\270\213\347\247\273", 0));
        cameraOutBtn->setText(QApplication::translate("RobotControlDialog", "\346\224\276\345\244\247", 0));
        cameraOpenBtn->setText(QApplication::translate("RobotControlDialog", "\346\211\223\345\274\200", 0));
        cameraStopBtn->setText(QApplication::translate("RobotControlDialog", "\345\205\263\351\227\255", 0));
        robotControlLabel->setText(QApplication::translate("RobotControlDialog", "\350\275\246\350\276\206\346\216\247\345\210\266", 0));
        robotBackBtn->setText(QApplication::translate("RobotControlDialog", "\345\220\216\351\200\200", 0));
        robotForwardBtn->setText(QApplication::translate("RobotControlDialog", "\345\211\215\350\277\233", 0));
        robotStopBtn->setText(QApplication::translate("RobotControlDialog", "\345\201\234\346\255\242", 0));
        robotRightBtn->setText(QApplication::translate("RobotControlDialog", "\345\217\263\350\275\254", 0));
        robotLeftBtn->setText(QApplication::translate("RobotControlDialog", "\345\267\246\350\275\254", 0));
        Q_UNUSED(RobotControlDialog);
    } // retranslateUi

};

namespace Ui {
    class RobotControlDialog: public Ui_RobotControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ROBOTCONTROLDIALOGHP6100_H
