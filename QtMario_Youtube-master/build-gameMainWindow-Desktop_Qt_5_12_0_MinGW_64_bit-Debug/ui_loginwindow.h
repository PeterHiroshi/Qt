/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QPushButton *pushButton;
    QLineEdit *USERNAME;
    QLineEdit *PASSWORD;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioButton;
    QLabel *label_4;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(425, 296);
        pushButton = new QPushButton(LoginWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 190, 81, 23));
        USERNAME = new QLineEdit(LoginWindow);
        USERNAME->setObjectName(QString::fromUtf8("USERNAME"));
        USERNAME->setGeometry(QRect(110, 110, 171, 20));
        USERNAME->setEchoMode(QLineEdit::Normal);
        PASSWORD = new QLineEdit(LoginWindow);
        PASSWORD->setObjectName(QString::fromUtf8("PASSWORD"));
        PASSWORD->setGeometry(QRect(110, 150, 171, 20));
        PASSWORD->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(LoginWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 190, 81, 23));
        label = new QLabel(LoginWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 271, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font.setPointSize(21);
        label->setFont(font);
        label_2 = new QLabel(LoginWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(36, 110, 61, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(LoginWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(36, 150, 61, 20));
        label_3->setFont(font1);
        radioButton = new QRadioButton(LoginWindow);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(300, 150, 121, 21));
        radioButton->setFont(font1);
        label_4 = new QLabel(LoginWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 170, 111, 121));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/loginlogo.png")));

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Register New User", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("LoginWindow", "Submit info", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("LoginWindow", "Submit", nullptr));
#ifndef QT_NO_TOOLTIP
        USERNAME->setToolTip(QApplication::translate("LoginWindow", "Enter an email address", nullptr));
#endif // QT_NO_TOOLTIP
        USERNAME->setInputMask(QString());
#ifndef QT_NO_TOOLTIP
        PASSWORD->setToolTip(QApplication::translate("LoginWindow", "Password may contain A-Z upper or lowercase, 0-9, _underscore, and -hyphen. Max length is 20. Minimum length is 7", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("LoginWindow", "Cancel registration", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("LoginWindow", "Cancel", nullptr));
        label->setText(QApplication::translate("LoginWindow", "Register New User", nullptr));
        label_2->setText(QApplication::translate("LoginWindow", "Username", nullptr));
        label_3->setText(QApplication::translate("LoginWindow", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButton->setToolTip(QApplication::translate("LoginWindow", "Click to show password text", nullptr));
#endif // QT_NO_TOOLTIP
        radioButton->setText(QApplication::translate("LoginWindow", "Show Password", nullptr));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("LoginWindow", "You can do it!", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
