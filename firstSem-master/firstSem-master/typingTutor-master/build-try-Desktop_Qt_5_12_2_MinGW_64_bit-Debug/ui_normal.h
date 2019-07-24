/********************************************************************************
** Form generated from reading UI file 'normal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMAL_H
#define UI_NORMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_normal
{
public:
    QLabel *label;
    QLabel *score;
    QLineEdit *lineEdit;
    QLabel *stopwatch;
    QTextBrowser *textBrowser_false;
    QTextBrowser *textBrowser;
    QLabel *life;

    void setupUi(QDialog *normal)
    {
        if (normal->objectName().isEmpty())
            normal->setObjectName(QString::fromUtf8("normal"));
        normal->resize(761, 411);
        label = new QLabel(normal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 761, 411));
        label->setPixmap(QPixmap(QString::fromUtf8("../../photoshop/medium.jpg")));
        label->setScaledContents(true);
        score = new QLabel(normal);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(660, 320, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Buxton Sketch"));
        font.setPointSize(18);
        score->setFont(font);
        score->setStyleSheet(QString::fromUtf8("color:rgb(171, 255, 162)\n"
""));
        lineEdit = new QLineEdit(normal);
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
        lineEdit->setClearButtonEnabled(false);
        stopwatch = new QLabel(normal);
        stopwatch->setObjectName(QString::fromUtf8("stopwatch"));
        stopwatch->setGeometry(QRect(660, 60, 31, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Buxton Sketch"));
        font2.setPointSize(20);
        stopwatch->setFont(font2);
        stopwatch->setStyleSheet(QString::fromUtf8("color: rgb(255, 251, 114);"));
        textBrowser_false = new QTextBrowser(normal);
        textBrowser_false->setObjectName(QString::fromUtf8("textBrowser_false"));
        textBrowser_false->setGeometry(QRect(20, 20, 561, 191));
        textBrowser_false->setFont(font1);
        textBrowser_false->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,255,.1);\n"
"text-align:center;\n"
""));
        textBrowser = new QTextBrowser(normal);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 541, 101));
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-style:none;\n"
"color:rgb(153, 254, 255)"));
        life = new QLabel(normal);
        life->setObjectName(QString::fromUtf8("life"));
        life->setGeometry(QRect(660, 210, 41, 31));
        life->setFont(font);
        life->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 73);\n"
""));

        retranslateUi(normal);

        QMetaObject::connectSlotsByName(normal);
    } // setupUi

    void retranslateUi(QDialog *normal)
    {
        normal->setWindowTitle(QApplication::translate("normal", "Dialog", nullptr));
        label->setText(QString());
        score->setText(QApplication::translate("normal", "0", nullptr));
        lineEdit->setText(QApplication::translate("normal", "Press CTRL key to START.", nullptr));
        lineEdit->setPlaceholderText(QString());
        stopwatch->setText(QApplication::translate("normal", "0", nullptr));
        textBrowser->setHtml(QApplication::translate("normal", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        life->setText(QApplication::translate("normal", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class normal: public Ui_normal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMAL_H
