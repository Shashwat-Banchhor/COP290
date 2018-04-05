#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <global.h>
#include <function.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    QFile file("/Users/himanshurewar/test/my_file1.txt");
    if (!file.open(QFile::ReadOnly| QFile::Text)){
        QMessageBox :: warning(this,"TITLE","file not open");

    }
    QTextStream in (&file);
    QString  text = in.readAll();
    ui -> plainTextEdit->setPlainText(text);
    file.close();
}

//write
void MainWindow::on_pushButton_2_clicked()
{
        QFile file("/Users/himanshurewar/test/my_file1.txt");
        if (!file.open(QFile::WriteOnly| QFile::Text)){
            QMessageBox :: warning(this,"TITLE","file not open");

        }
        QTextStream out (&file);
        QString text = ui->plainTextEdit->toPlainText();
        out << text;

        file.flush();
        file.close();

        QFile file1("/Users/himanshurewar/test/my_file.txt");
        if (!file1.open(QFile::WriteOnly| QFile::Text)){
            QMessageBox :: warning(this,"TITLE","file not open");

        }
        QTextStream out1 (&file1);
        out1 << QString::fromStdString("");

        file1.flush();
        file1.close();

}


// convert to 2d
void MainWindow::on_pushButton_4_clicked()
{
   // std::cout<<"in hereb";
    QFile file("/Users/himanshurewar/test/my_file1.txt");
    if (!file.open(QFile::ReadOnly| QFile::Text)){
        QMessageBox :: warning(this,"TITLE","file not open");

    }
    QTextStream in (&file);
    QString  text = in.readAll();
    file.close();
    std::string utf8_text = text.toUtf8().constData();

    // or this if you're on Windows :-)
    std::string current_locale_text = text.toLocal8Bit().constData();
    //std::cout <<"in gl :"<< current_locale_text;
    //std::cout<<"in here";
    if(current_locale_text.compare("")!=0){
//std::cout<<"in here1";
            std::vector<std::string> vec;

            std::size_t pos;
            while( (pos = current_locale_text.find('\n')) != std::string::npos )
            {
                vec.push_back( current_locale_text.substr(0,pos) );
                current_locale_text = current_locale_text.substr(pos+1);
            }
            vec.push_back(current_locale_text);
            std::vector<std::vector<float>> vecfin;
            std::string tm = vec.at(0);
            int tempsize;
            tempsize=vec.size();
            float typ = stof(tm);
            if(typ==0 && tempsize%6==1 && tempsize!=1){
                QFile file5("/Users/himanshurewar/test/three_d_data.txt");
                if (!file5.open(QFile::WriteOnly| QFile::Text)){
                    QMessageBox :: warning(this,"TITLE","file not open");

                }
                QTextStream out5 (&file5);
                out5 << text;

                file5.flush();
                file5.close();
                int p = vec.size();
                for(int i=1;i<(p-5);i++){
                    std::string temps;
                    std::vector<float> vectemp;
                    float tempi;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);

                    vecfin.push_back(vectemp);
                }
                threed_object threed;
                threed.edge = vecfin;
                fts twod;
                twod=MAKE_VIEW(threed);
                Combine comb;
                comb = Combine_func(twod);




                std::vector<std::vector<float>> vov;
                vov=comb.edge;
                std::string s="";
                s+=std::to_string(1);
                 p=vov.size();
                for(int i=0;i<p;i++){

                    std::vector<float> vec;
                    vec=vov.at(i);
                    float x1,x2,y1,y2;
                    x1=vec.at(0);
                    y1=vec.at(1);
                    x2=vec.at(2);
                    y2=vec.at(3);
                    //std::ostringstream ss;
                   // ss<<x1;
                  std::string s1=  std::to_string( x1);
                    //ss<<y1;
                  std::string s2=  std::to_string( y1);
                  //  ss<<x2;
                   std::string s3= std::to_string( x2);
                 //   ss<<y2;
                   std::string s4= std::to_string( y2);
                    s+="\n"+s1+"\n"+s2+"\n"+s3+"\n"+s4;
                }
          //      std::cout<<"startin2d:"<<p<<"p "<<s<<"end";
           //     std::cin>>p;
               QFile file1("/Users/himanshurewar/test/my_file.txt");
                if (!file1.open(QFile::WriteOnly| QFile::Text)){
                    QMessageBox :: warning(this,"TITLE","file not open");

                }

                QTextStream out (&file1);
                 text = QString::fromStdString(s);
                out << text;

                file1.flush();
                file1.close();



                QFile file3("/Users/himanshurewar/test/two_d_data.txt");
                if (!file3.open(QFile::WriteOnly| QFile::Text)){
                    QMessageBox :: warning(this,"TITLE","file not open");

                }
                QTextStream out3 (&file3);
                std::string sl="";
                sl+="1";
                std::vector<std::vector<float>> fe;
                fe=twod.fedge;
                int se;
                se=fe.size();
                for(int i=0;i<se;i++){

                    std::vector<float> vec;
                    vec=fe.at(i);
                    float x1,x2,y1,y2;
                    x1=vec.at(0);
                    y1=vec.at(1);
                    x2=vec.at(2);
                    y2=vec.at(3);
                    //std::ostringstream ss;
                   // ss<<x1;
                  std::string s1=  std::to_string( x1);
                    //ss<<y1;
                  std::string s2=  std::to_string( y1);
                  //  ss<<x2;
                   std::string s3= std::to_string( x2);
                 //   ss<<y2;
                   std::string s4= std::to_string( y2);
                    sl+="\n"+s1+"\n"+s2+"\n"+s3+"\n"+s4;
                }
                sl+="\n";
                sl+="-1";
                fe=twod.tedge;
                se=fe.size();
                for(int i=0;i<se;i++){

                    std::vector<float> vec;
                    vec=fe.at(i);
                    float x1,x2,y1,y2;
                    x1=vec.at(0);
                    y1=vec.at(1);
                    x2=vec.at(2);
                    y2=vec.at(3);
                    //std::ostringstream ss;
                   // ss<<x1;
                  std::string s1=  std::to_string( x1);
                    //ss<<y1;
                  std::string s2=  std::to_string( y1);
                  //  ss<<x2;
                   std::string s3= std::to_string( x2);
                 //   ss<<y2;
                   std::string s4= std::to_string( y2);
                    sl+="\n"+s1+"\n"+s2+"\n"+s3+"\n"+s4;
                }
                sl+="\n";
                sl+="-1";
                fe=twod.sedge;
                se=fe.size();
                for(int i=0;i<se;i++){

                    std::vector<float> vec;
                    vec=fe.at(i);
                    float x1,x2,y1,y2;
                    x1=vec.at(0);
                    y1=vec.at(1);
                    x2=vec.at(2);
                    y2=vec.at(3);
                    //std::ostringstream ss;
                   // ss<<x1;
                  std::string s1=  std::to_string( x1);
                    //ss<<y1;
                  std::string s2=  std::to_string( y1);
                  //  ss<<x2;
                   std::string s3= std::to_string( x2);
                 //   ss<<y2;
                   std::string s4= std::to_string( y2);
                    sl+="\n"+s1+"\n"+s2+"\n"+s3+"\n"+s4;
                }
                sl+="\n";
                sl+="-1";
                out3 << QString::fromStdString(sl);

                file3.flush();
                file3.close();
            }
            else if(typ==1 && tempsize%4==0 && tempsize!=4){
              //  std::cout<<"in here3";
                std::string temps;
                float tempi;
                int i=1;
                int p = vec.size();
                temps=vec.at(1);
                tempi=stof(temps);
                while(tempi!=-1){
                    std::vector<float> vectemp;


                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);

                    vecfin.push_back(vectemp);
                }
                int flag=0;
                if(vecfin.size()==0){
                    flag=1;
                }


                fts twod;
                twod.fedge=vecfin;
                vecfin.clear();
                i++;

                temps=vec.at(i);
                tempi=stof(temps);
//                int l;
                while(tempi!=-1){
                    std::vector<float> vectemp;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);

                    vecfin.push_back(vectemp);
                }
                if(vecfin.size()==0){
                    flag=1;
                }
                twod.tedge=vecfin;
                vecfin.clear();
                i++;





                temps=vec.at(i);
                tempi=stof(temps);
                while(tempi!=-1){
                    std::vector<float> vectemp;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);

                    vecfin.push_back(vectemp);
                }
                if(vecfin.size()==0){
                    flag=1;
                }
                twod.sedge=vecfin;
                vecfin.clear();
                i++;


                if(flag==0){
                    //std::cout<<"in here4";

                    Combine comb;
                    comb = Combine_func(twod);



                    std::vector<std::vector<float>> vov;
                    vov=comb.edge;
                    std::string s="";
                    s+=std::to_string(1);
                     p=vov.size();
                    for(int i=0;i<p;i++){

                        std::vector<float> vec;
                        vec=vov.at(i);
                        float x1,x2,y1,y2;
                        x1=vec.at(0);
                        y1=vec.at(1);
                        x2=vec.at(2);
                        y2=vec.at(3);
                        //std::ostringstream ss;
                       // ss<<x1;
                      std::string s1=  std::to_string( x1);
                        //ss<<y1;
                      std::string s2=  std::to_string( y1);
                      //  ss<<x2;
                       std::string s3= std::to_string( x2);
                     //   ss<<y2;
                       std::string s4= std::to_string( y2);
                        s+="\n"+s1+"\n"+s2+"\n"+s3+"\n"+s4;
                    }
                   // std::cout<<"startin2d else:"<<s<<"end";
                   QFile file1("/Users/himanshurewar/test/my_file.txt");
                    if (!file1.open(QFile::WriteOnly| QFile::Text)){
                        QMessageBox :: warning(this,"TITLE","file not open");

                    }

                    QTextStream out1 (&file1);
                   QString  text1 = QString::fromStdString(s);
                    out1 << text1;

                    file1.flush();
                    file1.close();



                    QFile file5("/Users/himanshurewar/test/three_d_data.txt");
                    if (!file5.open(QFile::WriteOnly| QFile::Text)){
                        QMessageBox :: warning(this,"TITLE","file not open");

                    }
                    QTextStream out5 (&file5);
                    out5 << text1;

                    file5.flush();
                    file5.close();



                    QFile file6("/Users/himanshurewar/test/two_d_data.txt");
                    if (!file6.open(QFile::WriteOnly| QFile::Text)){
                        QMessageBox :: warning(this,"TITLE","file not open");

                    }
                    QTextStream out6 (&file6);
                    out6 << text;

                    file6.flush();
                    file6.close();
                }

            }


        }


}


//convert to 3d
void MainWindow::on_pushButton_5_clicked()
{
   // std::cout<<"in 3d:";
    QFile file("/Users/himanshurewar/test/my_file1.txt");
    if (!file.open(QFile::ReadOnly| QFile::Text)){
        QMessageBox :: warning(this,"TITLE","file not open");

    }
    QTextStream in (&file);
    QString  text = in.readAll();
    file.close();
    std::string utf8_text = text.toUtf8().constData();

    // or this if you're on Windows :-)
    std::string current_locale_text = text.toLocal8Bit().constData();
    if(current_locale_text.compare("")!=0){
    //std::cout <<"in gl :"<< current_locale_text;

            std::vector<std::string> vec;

            std::size_t pos;
            while( (pos = current_locale_text.find('\n')) != std::string::npos )
            {
                vec.push_back( current_locale_text.substr(0,pos) );
                current_locale_text = current_locale_text.substr(pos+1);
            }
            vec.push_back(current_locale_text);
//                        std::cout<<"start of";
//            for(int j=0;j<vec.size();j++){
//                std::cout<<vec.at(j);
//            }
//            std::cout<<"end of";
            std::vector<std::vector<float>> vecfin;
            std::string tm = vec.at(0);

            float typ = stof(tm);
            int psize=vec.size();
             //   std::cout<<"\n"<<typ<<"intype"<<"\n";
            if(typ==1  && psize%4==0 && psize!=4){
           //     std::cout<<"enter in type1:";
                std::string temps;
                float tempi;
                int i=1;
                int p = vec.size();
                temps=vec.at(1);
                tempi=stof(temps);
                while(tempi!=-1){
                    std::vector<float> vectemp;


                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);

                    vecfin.push_back(vectemp);
                }
                int flag=0;
                if(vecfin.size()==0){
                    flag=1;
                }


                fts twod;
                twod.fedge=vecfin;
                vecfin.clear();
                i++;

                temps=vec.at(i);
                tempi=stof(temps);
                int l;
                while(tempi!=-1){
                    std::vector<float> vectemp;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);

                    vecfin.push_back(vectemp);
                }
                if(vecfin.size()==0){
                    flag=1;
                }
                twod.tedge=vecfin;
                vecfin.clear();
                i++;




                temps=vec.at(i);
                tempi=stof(temps);
                while(tempi!=-1){
                    std::vector<float> vectemp;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;


                    temps=vec.at(i);
                    tempi=stof(temps);

                    vecfin.push_back(vectemp);
                }
                if(vecfin.size()==0){
                    flag=1;
                }
                twod.sedge=vecfin;
                vecfin.clear();
                i++;

                if(flag==0){
    //                std::cout<<"enterflag0:";
                    threed_object threed;

                    temp_threed_object temp_3D ;
                    temp_3D = form_vertex(twod);
                    Combine comb;

                    std::vector<std::vector<float> > vte;
                    vte= removing_edge(temp_3D,twod);
                    threed.edge = vte;
                    threed = Combine_threed(threed);
                    vte=threed.edge;

                    std::vector<std::vector<float>> vov;
                    vov=vte;
                    std::string s="";
                    s+=std::to_string(0);
                     p=vov.size();
                    for(int i=0;i<p;i++){

                        std::vector<float> vec;
                        vec=vov.at(i);
                        float x1,x2,y1,y2,z1,z2;
                        x1=vec.at(0);
                        y1=vec.at(1);
                        z1=vec.at(2);
                        x2=vec.at(3);
                        y2=vec.at(4);
                        z2=vec.at(5);
                        //std::ostringstream ss;
                       // ss<<x1;
                      std::string s1=  std::to_string( x1);
                        //ss<<y1;
                      std::string s2=  std::to_string( y1);
                      //  ss<<x2;
                       std::string s3= std::to_string(z1);
                     //   ss<<y2;
                       std::string s4= std::to_string( x2);
                       std::string s5= std::to_string( y2);

                       std::string s6= std::to_string( z2);

                        s+="\n"+s1+"\n"+s2+"\n"+s3+"\n"+s4+"\n"+s5+"\n"+s6;
                    }
                    //std::cout<<"startin2d:"<<s<<"end";
                   QFile file1("/Users/himanshurewar/test/my_file.txt");
                    if (!file1.open(QFile::WriteOnly| QFile::Text)){
                        QMessageBox :: warning(this,"TITLE","file not open");

                    }

                    QTextStream out (&file1);
                     text = QString::fromStdString(s);
                    out << text;

                    file1.flush();
                    file1.close();
            }
            }
            else if (typ==0  && psize%6==1 && psize!=1){

                int p = vec.size();
                for(int i=1;i<(p-5);i++){
                    std::string temps;
                    std::vector<float> vectemp;
                    float tempi;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);
                    i++;

                    temps=vec.at(i);
                    tempi=stof(temps);
                    vectemp.push_back(tempi);

                    vecfin.push_back(vectemp);
                }
                threed_object threed;
                threed.edge = vecfin;
                threed = Combine_threed(threed);
                std::vector<std::vector<float> > vte;
                vte=threed.edge;
                std::vector<std::vector<float>> vov;
                vov=vte;
                std::string s="";
                s+=std::to_string(0);
                 p=vov.size();
                for(int i=0;i<p;i++){

                    std::vector<float> vec;
                    vec=vov.at(i);
                    float x1,x2,y1,y2,z1,z2;
                    x1=vec.at(0);
                    y1=vec.at(1);
                    z1=vec.at(2);
                    x2=vec.at(3);
                    y2=vec.at(4);
                    z2=vec.at(5);
                    //std::ostringstream ss;
                   // ss<<x1;
                  std::string s1=  std::to_string( x1);
                    //ss<<y1;
                  std::string s2=  std::to_string( y1);
                  //  ss<<x2;
                   std::string s3= std::to_string(z1);
                 //   ss<<y2;
                   std::string s4= std::to_string( x2);
                   std::string s5= std::to_string( y2);

                   std::string s6= std::to_string( z2);

                    s+="\n"+s1+"\n"+s2+"\n"+s3+"\n"+s4+"\n"+s5+"\n"+s6;
                }
                //std::cout<<"startin2d:"<<s<<"end";
               QFile file1("/Users/himanshurewar/test/my_file.txt");
                if (!file1.open(QFile::WriteOnly| QFile::Text)){
                    QMessageBox :: warning(this,"TITLE","file not open");

                }

                QTextStream out (&file1);
                 text = QString::fromStdString(s);
                out << text;

                file1.flush();
                file1.close();

            }

    }

}
