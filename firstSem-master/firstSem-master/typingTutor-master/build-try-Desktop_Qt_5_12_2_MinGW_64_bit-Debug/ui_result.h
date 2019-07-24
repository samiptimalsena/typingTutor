/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_result
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *result)
    {
        if (result->objectName().isEmpty())
            result->setObjectName(QString::fromUtf8("result"));
        result->resize(400, 300);
        textBrowser = new QTextBrowser(result);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(130, 110, 81, 71));
        label = new QLabel(result);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 47, 13));

        retranslateUi(result);
        QObject::connect(result, SIGNAL(windowTitleChanged(QString)), result, SLOT(setResult()));

        QMetaObject::connectSlotsByName(result);
    } // setupUi

    void retranslateUi(QDialog *result)
    {
        result->setWindowTitle(QApplication::translate("result", "Dialog", nullptr));
        label->setText(QApplication::translate("result", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class result: public Ui_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
