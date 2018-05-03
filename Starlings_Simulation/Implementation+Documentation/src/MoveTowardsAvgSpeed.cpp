#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"

Birds MoveTowardsAvgSpeed(Birds birds , BirdsLocal local_birds)
{
	


  GLfloat v_addx =0;
  GLfloat v_addy =0;
    for (int i = 0; i < birds.birdCount; i++)
    {
      

      v_addx = local_birds.birdXAVG.at(i);
      v_addy = local_birds.birdYAVG.at(i);
      
      GLfloat beta ;
        if(v_addx != 0)
        {
          beta = atan(v_addy/v_addx);
        }
        else
        {
          beta = 1.57;
        }
        
        if (v_addy > 0 && v_addx >= 0)
        { 
            ;
        }
        else if (v_addy > 0 && v_addx <= 0 )
        {
          beta = beta +3.14;
        }
        else if (v_addy < 0 && v_addx <= 0 )
        {
          beta = beta +3.14;
        }
        else if (v_addy < 0 && v_addx >= 0 )
        {
          ;
        } 

      
         GLfloat delta;
        GLfloat v_x1 = birds.xSpeed.at(i) ;
        GLfloat v_y1 = birds.ySpeed.at(i) ;

        if(v_x1 != 0)
        {
          delta = atan(v_y1/v_x1);
        }
        else
        {
          delta = 1.57;
        }
        
        if (v_y1 > 0 && v_x1 >= 0)
        { 
            ;
        }
        else if (v_y1 > 0 && v_x1 <= 0 )
        {
          delta = delta +3.14;
        }
        else if (v_y1 < 0 && v_x1 <= 0 )
        {
          delta = delta +3.14;
        }
        else if (v_y1 < 0 && v_x1 >= 0 )
        {
          ;
        } 

        GLfloat v_max = 0.0125f ;

        GLfloat gamma = beta - delta; /// ANGLE b/w the two VELOCITIES; 

        if (gamma >0 && gamma < 1.57)
        {
          ;
        }
        if (gamma >1.57 && gamma < 3.14)
        {
          ;
        }
        if (gamma > 3.14  && gamma < 4.71)
        {
          gamma = -gamma + 6.28;
        }
        if (gamma <0 && gamma > -1.57)
        {
          gamma = -gamma;
        }


      // birds.xSpeed.at(i) = birds.xSpeed.at(i) + v_addx*gamma/250.0f;  // factor 10 choosen appropriately
      // birds.ySpeed.at(i) = birds.ySpeed.at(i) + v_addy*gamma/250.0f;

        birds.xSpeed.at(i) = birds.xSpeed.at(i) + v_addx* birds.xSpeed.at(i)/250.0f;  // factor 10 choosen appropriately
      birds.ySpeed.at(i) = birds.ySpeed.at(i) + v_addy*birds.ySpeed.at(i)/250.0f;

     v_x1 = birds.xSpeed.at(i) ;
      v_y1 = birds.ySpeed.at(i) ;
        GLfloat alpha;

        if(v_x1 != 0)
        {
          alpha = atan(v_y1/v_x1);
        }
        else
        {
          alpha = 1.57;
        }
        
        if (v_y1 > 0 && v_x1 >= 0)
        { 
            ;
        }
        else if (v_y1 > 0 && v_x1 <= 0 )
        {
          alpha = alpha +3.14;
        }
        else if (v_y1 < 0 && v_x1 <= 0 )
        {
          alpha = alpha +3.14;
        }
        else if (v_y1 < 0 && v_x1 >= 0 )
        {
          ;
        } 

       

        
       
       if(birds.xSpeed.at(i) > v_max) 
       {
         birds.xSpeed.at(i) =v_max*cos(alpha);
         birds.ySpeed.at(i) =v_max*sin(alpha);;
       }
       if(birds.xSpeed.at(i) < -v_max) 
       {
         birds.xSpeed.at(i) = -v_max*cos(alpha);;
         birds.ySpeed.at(i) =v_max*sin(alpha);;
       }
       if(birds.ySpeed.at(i) > v_max) 
       {
         birds.xSpeed.at(i) =v_max*cos(alpha); 
         birds.ySpeed.at(i) =v_max*sin(alpha);;
       }
       if(birds.ySpeed.at(i) < -v_max) 
       {
         birds.xSpeed.at(i) =v_max*cos(alpha);
         birds.ySpeed.at(i) = -v_max*sin(alpha);;
       }

    } 
    return birds;
}