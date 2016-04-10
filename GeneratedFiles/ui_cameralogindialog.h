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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CameraLoginDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditUserName;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QDialog *CameraLoginDialog)
    {
        if (CameraLoginDialog->objectName().isEmpty())
            CameraLoginDialog->setObjectName(QStringLiteral("CameraLoginDialog"));
        CameraLoginDialog->resize(632, 392);
        gridLayout = new QGridLayout(CameraLoginDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_2 = new QPushButton(CameraLoginDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 3, 1, 1);

        lineEdit = new QLineEdit(CameraLoginDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 2);

        lineEditPassword = new QLineEdit(CameraLoginDialog);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));

        gridLayout->addWidget(lineEditPassword, 2, 2, 1, 2);

        lineEditUserName = new QLineEdit(CameraLoginDialog);
        lineEditUserName->setObjectName(QStringLiteral("lineEditUserName"));

        gridLayout->addWidget(lineEditUserName, 1, 2, 1, 2);

        label_3 = new QLabel(CameraLoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_2 = new QLabel(CameraLoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(CameraLoginDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        pushButton = new QPushButton(CameraLoginDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        QWidget::setTabOrder(lineEdit, pushButton);
        QWidget::setTabOrder(pushButton, lineEditUserName);
        QWidget::setTabOrder(lineEditUserName, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, pushButton_2);

        retranslateUi(CameraLoginDialog);

        QMetaObject::connectSlotsByName(CameraLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraLoginDialog)
    {
        CameraLoginDialog->setWindowTitle(QApplication::translate("CameraLoginDialog", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("CameraLoginDialog", "\345\217\226\346\266\210", 0));
        label_3->setText(QApplication::translate("CameraLoginDialog", "Password", 0));
        label_2->setText(QApplication::translate("CameraLoginDialog", "User Name", 0));
        label->setText(QApplication::translate("CameraLoginDialog", "Camera IP", 0));
        pushButton->setText(QApplication::translate("CameraLoginDialog", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraLoginDialog: public Ui_CameraLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERALOGINDIALOG_H
