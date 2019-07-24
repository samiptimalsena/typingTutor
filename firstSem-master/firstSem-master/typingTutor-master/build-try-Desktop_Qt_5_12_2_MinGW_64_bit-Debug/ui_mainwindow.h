/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QRadioButton *radioButton;
    QPushButton *pushButton_5;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1432, 1354);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1421, 1301));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../user/Desktop/keyboard.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 240, 161, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"  padding: 4px 16px;\n"
"  text-align: center;\n"
"  font-size: 20px;\n"
"  margin: 4px 2px;\n"
"  background-color: white; \n"
"  color: black; \n"
"  border-width: 2px;\n"
"  border-style: solid;\n"
"  border-color: #f44336;\n"
"  border-radius: 4px;\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"  background-color: #f44336;\n"
"  color: white;\n"
"}\n"
"\n"
"/*background-color: transparent;\n"
"color: rgb(255, 255, 255);*/\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 70, 441, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Mistral"));
        font1.setPointSize(60);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(145, 0, 0);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 330, 161, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2 {\n"
"  padding: 4px 8px;\n"
"  text-align: center;\n"
"  font-size: 20px;\n"
"  margin: 4px 2px;\n"
"  background-color: white; \n"
"  color: black; \n"
"  border-width: 2px;\n"
"  border-style: solid;\n"
"  border-color: #f44336;\n"
"  border-radius: 4px;\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover {\n"
"  background-color: #f44336;\n"
"  color: white;\n"
"}\n"
"\n"
"/*color: rgb(255, 255, 255);\n"
"background-color: transparent;*/"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 410, 161, 61));
        pushButton_3->setFont(font2);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3 {\n"
"  padding: 4px 16px;\n"
"  text-align: center;\n"
"  font-size: 20px;\n"
"  margin: 4px 2px;\n"
"  background-color: white; \n"
"  color: black; \n"
"  border-width: 2px;\n"
"  border-style: solid;\n"
"  border-color: #f44336;\n"
"  border-radius: 4px;\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_3:hover {\n"
"  background-color: #f44336;\n"
"  color: white;\n"
"}\n"
"\n"
"/*color: rgb(255, 255, 255);\n"
"background-color: transparent;*/"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(620, 570, 161, 61));
        pushButton_4->setFont(font2);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_4 {\n"
"  padding: 4px 16px;\n"
"  text-align: center;\n"
"  font-size: 20px;\n"
"  margin: 4px 2px;\n"
"  background-color: white; \n"
"  color: black; \n"
"  border-width: 2px;\n"
"  border-style: solid;\n"
"  border-color: #f44336;\n"
"  border-radius: 4px;\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_4:hover {\n"
"  background-color: #f44336;\n"
"  color: white;\n"
"}\n"
"/*color: rgb(255, 255, 255);\n"
"background-color:transparent;*/"));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(1160, 580, 151, 41));
        QFont font3;
        font3.setPointSize(15);
        radioButton->setFont(font3);
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../download.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton->setIcon(icon);
        radioButton->setIconSize(QSize(30, 30));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(620, 490, 161, 61));
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_5 {\n"
"  padding: 4px 16px;\n"
"  text-align: center;\n"
"  font-size: 20px;\n"
"  margin: 4px 2px;\n"
"  background-color: white; \n"
"  color: black; \n"
"  border-width: 2px;\n"
"  border-style: solid;\n"
"  border-color: #f44336;\n"
"  border-radius: 4px;\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_5:hover {\n"
"  background-color: #f44336;\n"
"  color: white;\n"
"}\n"
"\n"
"/*color: rgb(255, 255, 255);\n"
"background-color: transparent;*/"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1432, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "PLAY!", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TYPING  TUTOR", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "PRACTICE", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "HELP", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "EXIT", nullptr));
        radioButton->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "HIGHSCORE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
