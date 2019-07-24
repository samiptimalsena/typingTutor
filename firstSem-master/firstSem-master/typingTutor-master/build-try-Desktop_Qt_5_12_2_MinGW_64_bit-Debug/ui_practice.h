/********************************************************************************
** Form generated from reading UI file 'practice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICE_H
#define UI_PRACTICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_practice
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QLabel *stopwatch;
    QLabel *letters;
    QLabel *label_2;
    QLabel *remark;

    void setupUi(QDialog *practice)
    {
        if (practice->objectName().isEmpty())
            practice->setObjectName(QString::fromUtf8("practice"));
        practice->resize(746, 486);
        label = new QLabel(practice);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(6, 2, 741, 481));
        label->setPixmap(QPixmap(QString::fromUtf8("pictures/practice.png")));
        label->setScaledContents(true);
        textBrowser = new QTextBrowser(practice);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 511, 211));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(20);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QString::fromUtf8("color:rgb(255, 85, 0);\n"
"background-color:transparent;\n"
"\n"
"\n"
"border-color:white;\n"
"border-style:solid;\n"
"border-width:3px;\n"
"border-radius:5px;"));
        lineEdit = new QLineEdit(practice);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 270, 511, 181));
        QFont font1;
        font1.setPointSize(20);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color: rgb(255, 255, 0);\n"
"text-align:center;\n"
"border-color:white;\n"
"border-style:solid;\n"
"border-width:3px;\n"
"border-radius:5px;"));
        stopwatch = new QLabel(practice);
        stopwatch->setObjectName(QString::fromUtf8("stopwatch"));
        stopwatch->setGeometry(QRect(620, 240, 41, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Black"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        stopwatch->setFont(font2);
        stopwatch->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        letters = new QLabel(practice);
        letters->setObjectName(QString::fromUtf8("letters"));
        letters->setGeometry(QRect(590, 110, 121, 51));
        QFont font3;
        font3.setPointSize(15);
        letters->setFont(font3);
        letters->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);"));
        label_2 = new QLabel(practice);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 32, 101, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Monotype Corsiva"));
        font4.setPointSize(22);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);"));
        remark = new QLabel(practice);
        remark->setObjectName(QString::fromUtf8("remark"));
        remark->setGeometry(QRect(570, 362, 161, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("MV Boli"));
        font5.setPointSize(15);
        remark->setFont(font5);
        remark->setStyleSheet(QString::fromUtf8("color:rgb(85, 255, 255)"));

        retranslateUi(practice);

        QMetaObject::connectSlotsByName(practice);
    } // setupUi

    void retranslateUi(QDialog *practice)
    {
        practice->setWindowTitle(QApplication::translate("practice", "Dialog", nullptr));
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("practice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MV Boli'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        lineEdit->setText(QApplication::translate("practice", "Click here and Press CTRL key to Practice.", nullptr));
        stopwatch->setText(QApplication::translate("practice", "120", nullptr));
        letters->setText(QString());
        label_2->setText(QApplication::translate("practice", "WPM :", nullptr));
        remark->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class practice: public Ui_practice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICE_H
