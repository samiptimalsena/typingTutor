/********************************************************************************
** Form generated from reading UI file 'hard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARD_H
#define UI_HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_hard
{
public:
    QLabel *label;
    QLabel *score;
    QLineEdit *lineEdit;
    QLabel *stopwatch;
    QTextBrowser *textBrowser_false;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QLabel *life;

    void setupUi(QDialog *hard)
    {
        if (hard->objectName().isEmpty())
            hard->setObjectName(QString::fromUtf8("hard"));
        hard->resize(761, 412);
        label = new QLabel(hard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 761, 411));
        label->setPixmap(QPixmap(QString::fromUtf8("../../photoshop/bgjpeg.jpg")));
        label->setScaledContents(true);
        score = new QLabel(hard);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(670, 320, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Buxton Sketch"));
        font.setPointSize(18);
        score->setFont(font);
        score->setStyleSheet(QString::fromUtf8("color:rgb(171, 255, 162)\n"
""));
        lineEdit = new QLineEdit(hard);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 240, 561, 151));
        QFont font1;
        font1.setPointSize(20);
        lineEdit->setFont(font1);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,255,.1);\n"
"color:white;\n"
"text-align:center;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        stopwatch = new QLabel(hard);
        stopwatch->setObjectName(QString::fromUtf8("stopwatch"));
        stopwatch->setGeometry(QRect(660, 50, 31, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Buxton Sketch"));
        font2.setPointSize(20);
        stopwatch->setFont(font2);
        stopwatch->setStyleSheet(QString::fromUtf8("color: rgb(255, 251, 114);"));
        textBrowser_false = new QTextBrowser(hard);
        textBrowser_false->setObjectName(QString::fromUtf8("textBrowser_false"));
        textBrowser_false->setGeometry(QRect(20, 20, 561, 191));
        textBrowser_false->setFont(font1);
        textBrowser_false->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,255,.1);\n"
"text-align:center;\n"
""));
        textBrowser = new QTextBrowser(hard);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 50, 501, 121));
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:none;\n"
"color:rgb(153, 254, 255)"));
        label_2 = new QLabel(hard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(640, 20, 111, 31));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 251, 114);"));
        life = new QLabel(hard);
        life->setObjectName(QString::fromUtf8("life"));
        life->setGeometry(QRect(670, 220, 41, 31));
        life->setFont(font);
        life->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 73);\n"
""));

        retranslateUi(hard);

        QMetaObject::connectSlotsByName(hard);
    } // setupUi

    void retranslateUi(QDialog *hard)
    {
        hard->setWindowTitle(QApplication::translate("hard", "Dialog", nullptr));
        label->setText(QString());
        score->setText(QApplication::translate("hard", "0", nullptr));
        lineEdit->setText(QApplication::translate("hard", "Press CTRL key to START.", nullptr));
        stopwatch->setText(QApplication::translate("hard", "0", nullptr));
        textBrowser->setHtml(QApplication::translate("hard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("hard", "TIMER:", nullptr));
        life->setText(QApplication::translate("hard", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hard: public Ui_hard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARD_H
