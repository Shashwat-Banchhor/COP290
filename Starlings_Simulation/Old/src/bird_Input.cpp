#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"


Birds bird_Input(GLfloat X1,GLfloat Y1,GLfloat X2,GLfloat Y2,GLfloat X3,GLfloat Y3,GLfloat xS, Birds birds){

     GLfloat to_update=1;
     for (int i = 0; i < birds.birdCount ; i++)
     {
          if( birds.birdX1.at(i)==X1 && birds.birdX2.at(i)==X2 && birds.birdX3.at(i)==X3 && birds.birdY1.at(i)==Y1 && birds.birdY2.at(i)==Y2 && birds.birdY3.at(i)==Y3 )
          {
               to_update = 0;
               break;
          }
     }
     

     if(to_update == 1)
     {
          birds.xSpeed.push_back(-xS) ;
          birds.ySpeed.push_back(xS*(X1-X3)/(Y3-Y1)) ;

          birds.birdX1.push_back(X1) ;
          birds.birdX2.push_back(X2) ;
          birds.birdX3.push_back(X3) ;

          birds.birdY1.push_back(Y1) ;
          birds.birdY2.push_back(Y2) ;
          birds.birdY3.push_back(Y3) ;
     }

     //  xSpeed.push_back(0.02f) ;
     // ySpeed.push_back(0.02f*(-0.2f)/(0.2f)) ;

     // birdX1.push_back(0.1f) ;
     // birdX2.push_back(0.2f) ;
     // birdX3.push_back(0.3f) ;

     // birdY1.push_back(0.4f) ;
     // birdY2.push_back(0.5f) ;
     // birdY3.push_back(0.6f) ;
     birds.birdCount ++;
     return birds;

}