#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"

void GetEnergy( Birds birds ,std::vector<GLfloat> xS ,std::vector<GLfloat> yS )
{

   
    for (int i = 0; i < birds.birdCount ; i++)
    {
      GLfloat m = 1.0f;
      GLfloat x = birds.xSpeed.at(i);
      GLfloat y = birds.ySpeed.at(i);
      GLfloat energy = 0.5f*m*(x*x + y*y) ; 
       
      GLfloat v_x  = xS.at(i);
      GLfloat v_y = yS.at(i);


        GLfloat t_i;
        if (v_x !=0) 
        {
            t_i = atan(v_y/v_x);
        }
        else
        {
            t_i = 1.57;
        }
        if (v_y > 0 && v_x >= 0)
        { 
            ;
        }
        else if (v_y > 0 && v_x <= 0 )
        {
          t_i = t_i +3.14;
        }
        else if (v_y < 0 && v_x <= 0 )
        {
          t_i = t_i +3.14;
        }
        else if (v_y < 0 && v_x >= 0 )
        {
          ;
        } 

        v_x = birds.xSpeed.at(i) ;
        v_y = birds.ySpeed.at(i) ;
        GLfloat t_f;
        if (v_x !=0) 
        {
            t_f = atan(v_y/v_x);
        }
        else
        {
            t_f = 1.57;
        }
        if (v_y > 0 && v_x >= 0)
        { 
            ;
        }
        else if (v_y > 0 && v_x <= 0 )
        {
          t_f = t_f +3.14;
        }
        else if (v_y < 0 && v_x <= 0 )
        {
          t_f = t_f +3.14;
        }
        else if (v_y < 0 && v_x >= 0 )
        {
          ;
        }

        GLfloat v_xi = xS.at(i);
        GLfloat v_yi = yS.at(i); 

        GLfloat del_t =  t_f -t_i ;
        GLfloat lakh = pow(10.0,5);
        GLfloat ang_mom = lakh*del_t/0.05f;

        GLfloat v_i = sqrt(v_xi*v_xi + v_yi*v_yi);
        GLfloat v_f = sqrt(v_x*v_x + v_y*v_y);

        GLfloat force  = m * sqrt( pow(v_i,2) + pow(v_f,2) + v_i*v_f*cos(del_t)  )/0.05f;



       std::cout << "BIRD "<< i<< "\n xCORD : "<< birds.birdX2.at(i)  <<" yCORD : "<< birds.birdY2.at(i) <<" \n Energy :  " << energy << "\n"  <<" AngMom :  " << ang_mom << "\n" << " Force :  " << force << "\n" <<std::endl ;



    }
    

}