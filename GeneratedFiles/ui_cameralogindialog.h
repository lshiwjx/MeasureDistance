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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraLoginDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *CameraLoginDialog)
    {
        if (CameraLoginDialog->objectName().isEmpty())
            CameraLoginDialog->setObjectName(QStringLiteral("CameraLoginDialog"));
        CameraLoginDialog->resize(400, 300);
        pushButton = new QPushButton(CameraLoginDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 230, 112, 34));
        pushButton_2 = new QPushButton(CameraLoginDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 230, 112, 34));
        horizontalLayoutWidget = new QWidget(CameraLoginDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 90, 261, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        QWidget::setTabOrder(lineEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(CameraLoginDialog);

        QMetaObject::connectSlotsByName(CameraLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraLoginDialog)
    {
        CameraLoginDialog->setWindowTitle(QApplication::translate("CameraLoginDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("CameraLoginDialog", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("CameraLoginDialog", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("CameraLoginDialog", "Camera IP", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraLoginDialog: public Ui_CameraLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERALOGINDIALOG_H
