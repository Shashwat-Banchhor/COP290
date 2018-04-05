#include "glwidget.h"
#include <string.h>
#include <iostream>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>


GLWidget::GLWidget(QWidget *parent):
    QGLWidget(parent)
{
    connect(&timer, SIGNAL(timeout()),this, SLOT(updateGL()));
    timer.start(16);
}
void GLWidget::initializeGL(){
    glClearColor(0.8f,0.8f,0.8f,0);
}

void GLWidget::paintGL(){
    QFile file("/Users/himanshurewar/test/my_file.txt");
    if (!file.open(QFile::ReadOnly| QFile::Text)){
        QMessageBox :: warning(this,"TITLE","file not open");

    }
    QTextStream in (&file);
    QString  text = in.readAll();
    file.close();
    std::string utf8_text = text.toUtf8().constData();

    // or this if you're on Windows :-)
    std::string current_locale_text = text.toLocal8Bit().constData();
   // std::cout <<"in gl :"<< current_locale_text<<"end gl"<<"\n";
    std::string stp = "";
    if(stp.compare(current_locale_text)!=0){
            std::vector<std::string> vec;

            std::size_t pos;
            while( (pos = current_locale_text.find('\n')) != std::string::npos )
            {
                vec.push_back( current_locale_text.substr(0,pos) );
                current_locale_text = current_locale_text.substr(pos+1);
            }
            vec.push_back(current_locale_text);
////                        std::cout<<"start of";
////            for(int j=0;j<vec.size();j++){
////                std::cout<<vec.at(j);
////            }
////            std::cout<<"end of";
            std::vector<std::vector<float>> vecfin;
            std::string tm = vec.at(0);

            float typ = stof(tm);
            int p = vec.size();
             //   std::cout<<"\n"<<typ<<"intype"<<"\n";
            if(typ==0&&p%6==1){
               // std::cout<<"if";
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
                glClear(GL_COLOR_BUFFER_BIT);
            //    glPushMatrix();
            //    glTranslatef(center.getX(),center.getY(),0.0f);

                if(typ==0){
                    glRotatef(.5,0.4,0.6,1.0);
                }
                else{
                    glRotatef(0,0,0,0);

                }
                glColor3f(1,0,0);
                glBegin(GL_LINES);

                 p = vecfin.size();
               // std::cout<<"IN GL";
                for(int i=0;i<p;i++){
                    std::vector<float> temp = vecfin.at(i);

                    float x1= temp.at(0);
                    float y1= temp.at(1);
                    float z1= temp.at(2);
                    float x2= temp.at(3);
                    float y2= temp.at(4);
                    float z2= temp.at(5);
                    glVertex3f(x1,y1,z1);
                    glVertex3f(x2,y2,z2);
                    glColor3f(1,0,0);
                    glColor3f(1,0,0);
            //        std::cout<<x1<<" "<<y1<<" "<<z1<<" "<<x2<<" "<<y2<<" "<<z2<<"\n";

                }
                glEnd();

            }
            else if (typ==1&& p%4==1){
                glLoadIdentity();
              // std::cout<<"enter in else of gl:";
                int p = vec.size();
                for(int i=1;i<p;i++){
                    std::string temps;
                    std::vector<float> vectemp;
                    float tempi;

                    temps=vec.at(i);
                    tempi=stof(temps);
                   // if(tempi !=-1){
                        vectemp.push_back(tempi);
                        i++;

                        temps=vec.at(i);
                        tempi=stof(temps);
                        vectemp.push_back(tempi);
                        i++;

//                        tempi=0;
//                        vectemp.push_back(tempi);

                        temps=vec.at(i);
                        tempi=stof(temps);
                        vectemp.push_back(tempi);
                        i++;

                        temps=vec.at(i);
                        tempi=stof(temps);
                        vectemp.push_back(tempi);

//                        tempi=0;
//                        vectemp.push_back(tempi);

                        vecfin.push_back(vectemp);
                    //}
                     //   std::cout<<"end in for:"<<i<<"\n";

                }
                glClear(GL_COLOR_BUFFER_BIT);
            //    glPushMatrix();
            //    glTranslatef(center.getX(),center.getY(),0.0f);


                glColor3f(1,0,0);
                glBegin(GL_LINES);

                 p = vecfin.size();
               // std::cout<<"IN GL";
                for(int i=0;i<p;i++){
                    std::vector<float> temp = vecfin.at(i);

                    float x1= temp.at(0);
                    float y1= temp.at(1);
                //    float z1= temp.at(2);
                    float x2= temp.at(2);
                    float y2= temp.at(3);
                //    float z2= temp.at(5);
                    glVertex2f(x1,y1/*,z1*/);
                    glVertex2f(x2,y2/*,z2*/);
                    glColor3f(1,0,0);
                    glColor3f(1,0,0);
            //        std::cout<<x1<<" "<<y1<<" "<<z1<<" "<<x2<<" "<<y2<<" "<<z2<<"\n";

                }
                glEnd();


            }


    }
    else{
        glClear(GL_COLOR_BUFFER_BIT);
         glBegin(GL_LINES);
          glEnd();
    }





}
void GLWidget::resizeGL(int w,int h){

}
