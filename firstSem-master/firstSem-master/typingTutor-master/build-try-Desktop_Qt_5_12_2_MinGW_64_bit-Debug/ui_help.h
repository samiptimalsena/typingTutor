/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName(QString::fromUtf8("help"));
        help->resize(751, 378);
        label = new QLabel(help);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 581, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);"));
        label_2 = new QLabel(help);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 651, 41));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        label_3 = new QLabel(help);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 160, 651, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(help);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 210, 651, 41));
        label_4->setFont(font1);
        label_5 = new QLabel(help);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 260, 651, 41));
        label_5->setFont(font1);
        label_6 = new QLabel(help);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 300, 651, 41));
        label_6->setFont(font1);

        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QDialog *help)
    {
        help->setWindowTitle(QApplication::translate("help", "Dialog", nullptr));
        label->setText(QApplication::translate("help", "  Typing Tutor", nullptr));
        label_2->setText(QApplication::translate("help", "Play mode consists of 3 levels of difficulty: Easy, Medium and Hard.", nullptr));
        label_3->setText(QApplication::translate("help", "Press CTRL button to START/PAUSE the game.", nullptr));
        label_4->setText(QApplication::translate("help", "Press ESC button to end the game.", nullptr));
        label_5->setText(QApplication::translate("help", "Press ENTER button after you complete typing", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
