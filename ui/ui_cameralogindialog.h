/********************************************************************************
** Form generated from reading UI file 'cameralogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERALOGINDIALOG_H
#define UI_CAMERALOGINDIALOG_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CameraLoginDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEditUserName;
    QLabel *label_3;
    QLineEdit *lineEditPassword;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CameraLoginDialog)
    {
        if (CameraLoginDialog->objectName().isEmpty())
            CameraLoginDialog->setObjectName(QStringLiteral("CameraLoginDialog"));
        CameraLoginDialog->resize(500, 400);
        gridLayout = new QGridLayout(CameraLoginDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(CameraLoginDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("#frame\n"
"{\n"
"   border-image:url(E:/ShiLei/code/qtForVS/pic/1.jpg);\n"
"   border-radius:70px;\n"
"   padding:50px\n"
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
"}\n"
"QLineEdit\n"
"{\n"
"    border-radius:10px;\n"
"    border:2px;\n"
"    background:rgba(255,255,255,0.1);\n"
"\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"    background:rgba(255,255,255,1);\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 75 italic 9pt \"Arial\";\n"
"color:rgb(224, 240, 255)"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setContextMenuPolicy(Qt::NoContextMenu);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit{\n"
"font: 75 italic 9pt \"Arial\";\n"
"color:rgb(224, 240, 255);\n"
"}\n"
"QLineEdit:focus{\n"
"color:rgb(0,0,0);\n"
"}"));
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 75 italic 9pt \"Arial\";\n"
"color:rgb(224, 240, 255)"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEditUserName = new QLineEdit(frame);
        lineEditUserName->setObjectName(QStringLiteral("lineEditUserName"));
        lineEditUserName->setStyleSheet(QLatin1String("QLineEdit{\n"
"font: 75 italic 9pt \"Arial\";\n"
"color:rgb(224, 240, 255);\n"
"}\n"
"QLineEdit:focus{\n"
"color:rgb(0,0,0);\n"
"}"));
        lineEditUserName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEditUserName);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 75 italic 9pt \"Arial\";\n"
"color:rgb(224, 240, 255)"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        lineEditPassword = new QLineEdit(frame);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setStyleSheet(QLatin1String("QLineEdit{\n"
"font: 75 italic 9pt \"Arial\";\n"
"color:rgb(224, 240, 255);\n"
"}\n"
"QLineEdit:focus{\n"
"color:rgb(0,0,0);\n"
"}"));
        lineEditPassword->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEditPassword);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(pushButton_2, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEditUserName);
        QWidget::setTabOrder(lineEditUserName, lineEditPassword);

        retranslateUi(CameraLoginDialog);

        QMetaObject::connectSlotsByName(CameraLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraLoginDialog)
    {
        CameraLoginDialog->setWindowTitle(QApplication::translate("CameraLoginDialog", "Dialog", 0));
        label->setText(QApplication::translate("CameraLoginDialog", "Camera IP", 0));
        lineEdit->setText(QApplication::translate("CameraLoginDialog", "169.254.0.99", 0));
        label_2->setText(QApplication::translate("CameraLoginDialog", "User Name", 0));
        lineEditUserName->setText(QApplication::translate("CameraLoginDialog", "root", 0));
        label_3->setText(QApplication::translate("CameraLoginDialog", "Password", 0));
        lineEditPassword->setText(QApplication::translate("CameraLoginDialog", "123456", 0));
        pushButton->setText(QApplication::translate("CameraLoginDialog", "OK", 0));
        pushButton_2->setText(QApplication::translate("CameraLoginDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraLoginDialog: public Ui_CameraLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERALOGINDIALOG_H
