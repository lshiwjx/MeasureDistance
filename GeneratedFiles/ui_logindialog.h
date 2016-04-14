/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        LoginDialog->setCursor(QCursor(Qt::ArrowCursor));
        LoginDialog->setContextMenuPolicy(Qt::NoContextMenu);
        LoginDialog->setWindowOpacity(1);
        LoginDialog->setAutoFillBackground(true);
        LoginDialog->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(LoginDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(LoginDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("#frame{\n"
"\n"
"border-image:url(E:/ShiLei/code/qtForVS/pic/1.jpg);\n"
"border-radius: 40px;\n"
"}\n"
"QPushButton#pushButton,QPushButton#pushButton_2{\n"
"	font: 75 italic 9pt \"Arial\";\n"
"    border:0px;\n"
"    background:rgba(255,255,255,0);\n"
"	color: rgb(228, 243, 255);\n"
"}\n"
"QPushButton#pushButton:hover ,QPushButton#pushButton_2:hover                                               \n"
"{\n"
"    background: rgba(30,144,255,0.7);                         \n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 1, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 75 italic 9pt \"Arial\";\n"
"color:rgb(224, 240, 255)"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        gridLayout->addWidget(label, 1, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 1, 1, 1);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("LoginDialog", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("LoginDialog", "OK", 0));
        label->setText(QApplication::translate("LoginDialog", "Robot IP", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
