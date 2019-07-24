/********************************************************************************
** Form generated from reading UI file 'play.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_H
#define UI_PLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_play
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_easy;
    QPushButton *pushButton_normal;
    QPushButton *pushButton_hard;

    void setupUi(QDialog *play)
    {
        if (play->objectName().isEmpty())
            play->setObjectName(QString::fromUtf8("play"));
        play->resize(741, 463);
        label = new QLabel(play);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -10, 247, 471));
        label->setScaledContents(true);
        label_2 = new QLabel(play);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(247, 0, 247, 461));
        label_2->setPixmap(QPixmap(QString::fromUtf8("picture/medium_final.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(play);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(494, 0, 247, 461));
        label_3->setPixmap(QPixmap(QString::fromUtf8("picture/hard_final.jpg")));
        label_3->setScaledContents(true);
        pushButton_easy = new QPushButton(play);
        pushButton_easy->setObjectName(QString::fromUtf8("pushButton_easy"));
        pushButton_easy->setGeometry(QRect(0, 0, 247, 461));
        pushButton_easy->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_easy{\n"
"	background-color:transparent;\n"
"	}\n"
"QPushButton#pushButton_easy:hover{\n"
"	/*background-color: rgba(0,255,255,0.2);*/\n"
"    background-color:rgba(189, 0, 0, 0.2);\n"
"	border-width: 3px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"	border-radius:4px;\n"
"}"));
        pushButton_normal = new QPushButton(play);
        pushButton_normal->setObjectName(QString::fromUtf8("pushButton_normal"));
        pushButton_normal->setGeometry(QRect(247, 0, 247, 461));
        pushButton_normal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:transparent;\n"
"	}\n"
"QPushButton:hover{\n"
"	/*background-color: rgba(0,255,255,0.2);*/\n"
"	background-color: rgba(255, 128, 1, 0.2);	\n"
"	border-width: 3px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"	border-radius:4px;\n"
"}"));
        pushButton_hard = new QPushButton(play);
        pushButton_hard->setObjectName(QString::fromUtf8("pushButton_hard"));
        pushButton_hard->setGeometry(QRect(494, 0, 247, 461));
        pushButton_hard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:transparent;\n"
"	}\n"
"QPushButton:hover{\n"
"	background-color: rgba(0,255,255,0.2);\n"
"	border-width: 3px;\n"
"	border-style:solid;\n"
"	border-color:white;\n"
"	border-radius:4px;\n"
"}"));

        retranslateUi(play);

        QMetaObject::connectSlotsByName(play);
    } // setupUi

    void retranslateUi(QDialog *play)
    {
        play->setWindowTitle(QApplication::translate("play", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton_easy->setText(QString());
        pushButton_normal->setText(QString());
        pushButton_hard->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class play: public Ui_play {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_H
