/********************************************************************************
** Form generated from reading UI file 'levelcompletewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELCOMPLETEWINDOW_H
#define UI_LEVELCOMPLETEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LevelCompleteWindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *LevelCompleteWindow)
    {
        if (LevelCompleteWindow->objectName().isEmpty())
            LevelCompleteWindow->setObjectName(QString::fromUtf8("LevelCompleteWindow"));
        LevelCompleteWindow->resize(596, 367);
        label = new QLabel(LevelCompleteWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 501, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font.setPointSize(52);
        label->setFont(font);
        pushButton = new QPushButton(LevelCompleteWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 240, 111, 31));
        pushButton_2 = new QPushButton(LevelCompleteWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 240, 111, 31));
        label_2 = new QLabel(LevelCompleteWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 120, 401, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_3 = new QLabel(LevelCompleteWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 170, 171, 181));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/gameover.png")));

        retranslateUi(LevelCompleteWindow);

        QMetaObject::connectSlotsByName(LevelCompleteWindow);
    } // setupUi

    void retranslateUi(QDialog *LevelCompleteWindow)
    {
        LevelCompleteWindow->setWindowTitle(QApplication::translate("LevelCompleteWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("LevelCompleteWindow", "Level Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("LevelCompleteWindow", "Play Again", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("LevelCompleteWindow", "Yes", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("LevelCompleteWindow", "Quit", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("LevelCompleteWindow", "No", nullptr));
        label_2->setText(QApplication::translate("LevelCompleteWindow", "Would you like to play again?", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LevelCompleteWindow: public Ui_LevelCompleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELCOMPLETEWINDOW_H
