/********************************************************************************
** Form generated from reading UI file 'gameoverwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVERWINDOW_H
#define UI_GAMEOVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOverWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *GameOverWindow)
    {
        if (GameOverWindow->objectName().isEmpty())
            GameOverWindow->setObjectName(QString::fromUtf8("GameOverWindow"));
        GameOverWindow->resize(557, 355);
        label = new QLabel(GameOverWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 421, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font.setPointSize(39);
        label->setFont(font);
        label_2 = new QLabel(GameOverWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 90, 471, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font1.setPointSize(19);
        label_2->setFont(font1);
        pushButton = new QPushButton(GameOverWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 220, 131, 41));
        pushButton_2 = new QPushButton(GameOverWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 220, 131, 41));
        label_3 = new QLabel(GameOverWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 170, 151, 171));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/gameover.png")));

        retranslateUi(GameOverWindow);

        QMetaObject::connectSlotsByName(GameOverWindow);
    } // setupUi

    void retranslateUi(QDialog *GameOverWindow)
    {
        GameOverWindow->setWindowTitle(QApplication::translate("GameOverWindow", "Game Over", nullptr));
        label->setText(QApplication::translate("GameOverWindow", "GAME OVER", nullptr));
        label_2->setText(QApplication::translate("GameOverWindow", "Would you like to play again?", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("GameOverWindow", "Continue", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("GameOverWindow", "Yes", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("GameOverWindow", "Quit", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("GameOverWindow", "No", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameOverWindow: public Ui_GameOverWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVERWINDOW_H
