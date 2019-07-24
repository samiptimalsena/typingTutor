/********************************************************************************
** Form generated from reading UI file 'easy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASY_H
#define UI_EASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_easy
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser_false;
    QLabel *score;
    QLabel *stopwatch;
    QLabel *life;

    void setupUi(QDialog *easy)
    {
        if (easy->objectName().isEmpty())
            easy->setObjectName(QString::fromUtf8("easy"));
        easy->resize(760, 412);
        label = new QLabel(easy);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 761, 411));
        label->setPixmap(QPixmap(QString::fromUtf8("../../photoshop/easy.jpg")));
        label->setScaledContents(true);
        textBrowser = new QTextBrowser(easy);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 50, 501, 121));
        QFont font;
        font.setPointSize(20);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:none;\n"
"color:rgb(153, 254, 255)"));
        lineEdit = new QLineEdit(easy);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 240, 561, 151));
        lineEdit->setFont(font);
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,255,.1);\n"
"color:white;\n"
"text-align:center;"));
        lineEdit->setCursorPosition(39);
        lineEdit->setAlignment(Qt::AlignCenter);
        textBrowser_false = new QTextBrowser(easy);
        textBrowser_false->setObjectName(QString::fromUtf8("textBrowser_false"));
        textBrowser_false->setGeometry(QRect(20, 20, 561, 191));
        textBrowser_false->setFont(font);
        textBrowser_false->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,255,.1);\n"
"text-align:center;\n"
""));
        score = new QLabel(easy);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(670, 320, 41, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Buxton Sketch"));
        font1.setPointSize(18);
        score->setFont(font1);
        score->setStyleSheet(QString::fromUtf8("color:rgb(171, 255, 162)\n"
""));
        stopwatch = new QLabel(easy);
        stopwatch->setObjectName(QString::fromUtf8("stopwatch"));
        stopwatch->setGeometry(QRect(670, 60, 31, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Buxton Sketch"));
        font2.setPointSize(20);
        stopwatch->setFont(font2);
        stopwatch->setStyleSheet(QString::fromUtf8("color: rgb(255, 251, 114);"));
        life = new QLabel(easy);
        life->setObjectName(QString::fromUtf8("life"));
        life->setGeometry(QRect(670, 210, 41, 31));
        life->setFont(font1);
        life->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 73);\n"
""));

        retranslateUi(easy);

        QMetaObject::connectSlotsByName(easy);
    } // setupUi

    void retranslateUi(QDialog *easy)
    {
        easy->setWindowTitle(QApplication::translate("easy", "Dialog", nullptr));
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("easy", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        lineEdit->setText(QApplication::translate("easy", "Click here and Press CTRL key to Start.", nullptr));
        score->setText(QApplication::translate("easy", "0", nullptr));
        stopwatch->setText(QApplication::translate("easy", "0", nullptr));
        life->setText(QApplication::translate("easy", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class easy: public Ui_easy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASY_H
