/********************************************************************************
** Form generated from reading UI file 'highscore.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHSCORE_H
#define UI_HIGHSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_highscore
{
public:
    QTabWidget *tabWidget;
    QWidget *easy;
    QLabel *label_0;
    QLabel *label_easy;
    QWidget *normal;
    QLabel *label_1;
    QLabel *label_medium;
    QWidget *hard;
    QLabel *label_2;
    QLabel *label_hard;

    void setupUi(QDialog *highscore)
    {
        if (highscore->objectName().isEmpty())
            highscore->setObjectName(QString::fromUtf8("highscore"));
        highscore->resize(292, 182);
        tabWidget = new QTabWidget(highscore);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 291, 181));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setIconSize(QSize(16, 16));
        easy = new QWidget();
        easy->setObjectName(QString::fromUtf8("easy"));
        label_0 = new QLabel(easy);
        label_0->setObjectName(QString::fromUtf8("label_0"));
        label_0->setGeometry(QRect(-4, 2, 301, 151));
        label_0->setScaledContents(true);
        label_easy = new QLabel(easy);
        label_easy->setObjectName(QString::fromUtf8("label_easy"));
        label_easy->setGeometry(QRect(120, 49, 61, 41));
        tabWidget->addTab(easy, QString());
        normal = new QWidget();
        normal->setObjectName(QString::fromUtf8("normal"));
        label_1 = new QLabel(normal);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(-4, 2, 301, 151));
        label_1->setScaledContents(true);
        label_medium = new QLabel(normal);
        label_medium->setObjectName(QString::fromUtf8("label_medium"));
        label_medium->setGeometry(QRect(116, 50, 51, 31));
        tabWidget->addTab(normal, QString());
        hard = new QWidget();
        hard->setObjectName(QString::fromUtf8("hard"));
        label_2 = new QLabel(hard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-4, 2, 291, 151));
        label_2->setScaledContents(true);
        label_hard = new QLabel(hard);
        label_hard->setObjectName(QString::fromUtf8("label_hard"));
        label_hard->setGeometry(QRect(120, 52, 47, 31));
        tabWidget->addTab(hard, QString());

        retranslateUi(highscore);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(highscore);
    } // setupUi

    void retranslateUi(QDialog *highscore)
    {
        highscore->setWindowTitle(QApplication::translate("highscore", "Dialog", nullptr));
        label_0->setText(QString());
        label_easy->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(easy), QApplication::translate("highscore", "       Easy         ", nullptr));
        label_1->setText(QString());
        label_medium->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(normal), QApplication::translate("highscore", "      Medium        ", nullptr));
        label_2->setText(QString());
        label_hard->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(hard), QApplication::translate("highscore", "      Hard         ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class highscore: public Ui_highscore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHSCORE_H
