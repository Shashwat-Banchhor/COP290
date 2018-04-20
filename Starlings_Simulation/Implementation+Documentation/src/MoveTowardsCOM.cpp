#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"

Birds MoveTowardsCOM( Birds birds , BirdsLocal local_birds)
{
	for (int i = 0; i < birds.birdCount; i++)
    {
       if(local_birds.Distances.at(i).size() != 0)
       { 
          GLfloat x_com = local_birds.birdXCOM.at(i);
          GLfloat y_com = local_birds.birdYCOM.at(i);
          GLfloat x_t  = birds.birdX2.at(i);
          GLfloat y_t  = birds.birdY2.at(i);
          GLfloat v_addx ,v_addy;
          GLfloat Dist_COM = sqrt(pow((x_com-x_t),2)+pow((y_com - y_t ),2));
          
           GLfloat theeta;

          if((x_com - x_t) != 0 )
          {  
             theeta = atan((y_com - y_t)/(x_com - x_t));
          }
          else
          {
              theeta = 1.57;
          }

          if ((y_com - y_t) >0 && (x_com - x_t) >=0)
          {
            ;
          }
          else if ((y_com - y_t) >0 && (x_com - x_t)<= 0)
          {
            theeta = theeta + 3.14;
          }
          else if ((y_com - y_t)<0  && (x_com - x_t) <= 0)
          {
            theeta = theeta + 3.14; 
          }
          else if ((y_com - y_t)<0  && (x_com - x_t) >= 0)
          {
            ;
          }

          v_addx = (1/100.0f)*(Dist_COM/birds.effRadius)*cos(theeta);
          v_addy = (1/100.0f)*(Dist_COM/birds.effRadius)*sin(theeta);

          birds.xSpeed.at(i) = birds.xSpeed.at(i) + v_addx;
          birds.ySpeed.at(i) = birds.ySpeed.at(i) + v_addy;
        }

    }
    return birds;

}