#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"



Birds MoveAwayNearest(Birds birds , BirdsLocal local_birds)
{
	for (int i = 0; i < birds.birdCount; i++)
    {
      if( local_birds.nearest_bird.at(i) != i)
      {  
        GLfloat bird_index = local_birds.nearest_bird.at(i);
        GLfloat x_nearest = birds.birdX2.at(bird_index);
        GLfloat y_nearest = birds.birdY2.at(bird_index);
        GLfloat x_t  = birds.birdX2.at(i);
        GLfloat y_t  = birds.birdY2.at(i);
        GLfloat v_addx ,v_addy;
        GLfloat Dist_nearest = sqrt(pow((-x_nearest+x_t),2)+pow((-y_nearest + y_t ),2));
        
        GLfloat theeta ;

        if (( - x_nearest +x_t) != 0)
        {
           theeta = atan((-y_nearest + y_t)/( - x_nearest +x_t));
        }
        else
        { 
          theeta = 1.57;
        }
        if ((y_nearest - y_t) < 0 && (x_nearest - x_t)  < 0)  // 1st quadrant 
        {
          ;
        }
        else if ((y_nearest - y_t) < 0 && (x_nearest - x_t) > 0) // 2nd
        {
          theeta = theeta + 3.14;
        }
        else if ((y_nearest - y_t) >0  && (x_nearest - x_t) >0) // 3rd 
        {
          theeta = theeta + 3.14; 
        }
        else if ((y_nearest - y_t) > 0  && (x_nearest - x_t)  < 0)
        {
          ;
        }

        v_addx = (1/5000.0f)*((birds.effRadius/Dist_nearest)  -1 )*cos(theeta);
        v_addy = (1/5000.0f)*((birds.effRadius/Dist_nearest)  -1 )*sin(theeta);

        birds.xSpeed.at(i) = birds.xSpeed.at(i) + v_addx;
        birds.ySpeed.at(i) = birds.ySpeed.at(i) + v_addy;
      }

    }
    return birds;
}