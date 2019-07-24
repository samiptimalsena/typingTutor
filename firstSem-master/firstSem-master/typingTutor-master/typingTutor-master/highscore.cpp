#include "highscore.h"
#include "ui_highscore.h"
#include"QLabel"
#include "QTextStream"
#include"QMessageBox"

highscore::highscore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::highscore)
{
    ui->setupUi(this);
    setWindowTitle("HIGHSCORE");
    QFile file1("E:/youtube/project/final/firstSem-master/firstSem-master/typingTutor-master/typingTutor-master/highscore/medium_highscore.txt");
    if(!file1.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::warning(this,"Error","File not open");

     QTextStream  in1(&file1);
     while(!in1.atEnd()){
        m_hscore=in1.readLine();
     }
   ui->label_medium->setText(m_hscore);
   file1.close();

   QPixmap pix_easy("E:/youtube/project/final/firstSem-master/firstSem-master/typingTutor-master/typingTutor-master/pictures/easy_hscore.jpg");
   QPixmap pix_medium("E:/youtube/project/final/firstSem-master/firstSem-master/typingTutor-master/typingTutor-master/pictures/medium_hscore.jpg");
   QPixmap pix_hard("E:/youtube/project/final/firstSem-master/firstSem-master/typingTutor-master/typingTutor-master/pictures/hard_hscore.jpg");
   ui->label_0->setPixmap(pix_easy);
   ui->label_1->setPixmap(pix_medium);
   ui->label_2->setPixmap(pix_hard);

}

highscore::~highscore()
{
    delete ui;
}


void highscore::on_tabWidget_tabBarClicked(int index)
{
    if(index==0){
        QFile file("E:/youtube/project/final/firstSem-master/firstSem-master/typingTutor-master/typingTutor-master/highscore/easy_highscore.txt");
        if(!file.open(QFile::ReadOnly | QFile::Text))
            QMessageBox::warning(this,"Error","File not open");

         QTextStream  in(&file);
         while(!in.atEnd()){
             e_hscore=in.readLine();
         }
        ui->label_easy->setText(e_hscore);
        file.close();
    }
    if(index==1){
        QFile file("E:/youtube/project/final/firstSem-master/firstSem-master/typingTutor-master/typingTutor-master/highscore/medium_highscore.txt");
        if(!file.open(QFile::ReadOnly | QFile::Text))
            QMessageBox::warning(this,"Error","File not open");

         QTextStream  in(&file);
         while(!in.atEnd()){
            m_hscore=in.readLine();
         }
       ui->label_medium->setText(m_hscore);
       file.close();
    }
    if(index==2){
        QFile file("E:/youtube/project/final/firstSem-master/firstSem-master/typingTutor-master/typingTutor-master/highscore/hard_highscore.txt");
        if(!file.open(QFile::ReadOnly | QFile::Text))
            QMessageBox::warning(this,"Error","File not open");

         QTextStream  in(&file);
         while(!in.atEnd()){
            h_hscore=in.readLine();
         }
       ui->label_hard->setText(h_hscore);
        file.close();
    }
}
