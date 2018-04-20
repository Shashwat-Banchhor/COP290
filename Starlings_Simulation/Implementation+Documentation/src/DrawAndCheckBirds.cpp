#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string.h>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"

Birds DrawAndCheckBirds(Birds birds, GLfloat birdXMax ,  GLfloat birdXMin, GLfloat birdYMax , GLfloat birdYMin )
{
	 for (int i = 0; i < birds.birdCount ; i++)
    {
       GLfloat v_x1 = birds.xSpeed.at(i) ;
        GLfloat v_y1 = birds.ySpeed.at(i) ;
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

        GLfloat v_max = 0.05f ;
       
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
      //------------------
        glBegin(GL_LINES);
          glVertex2f(birds.birdX1.at(i),birds.birdY1.at(i));
          glVertex2f(birds.birdX2.at(i),birds.birdY2.at(i));
        glEnd();                    
        glBegin(GL_LINES);
          glVertex2f(birds.birdX2.at(i),birds.birdY2.at(i));
          glVertex2f(birds.birdX3.at(i),birds.birdY3.at(i));
        glEnd();
      //  std::cout<<"\n"<<birdYMin<<"\n";
        if(birds.birdX2.at(i)>birdXMax && birds.xSpeed.at(i)>=0) {

          // birdX2.at(i) = birdXMax;

          birds.xSpeed.at(i) = -birds.xSpeed.at(i);

          
          birds.birdX1.at(i) = (birds.birdX2.at(i) -birds.birdX1.at(i)) + birds.birdX2.at(i);
          birds.birdX2.at(i) = (birds.birdX2.at(i)-birds.birdX2.at(i)) + birds.birdX2.at(i);
          birds.birdX3.at(i) = (birds.birdX2.at(i)-birds.birdX3.at(i)) + birds.birdX2.at(i);

        }
        else if(birds.birdX2.at(i) < birdXMin && birds.xSpeed.at(i)<=0) {
          //birdX2.at(i) = birdXMin;
          birds.xSpeed.at(i) = -birds.xSpeed.at(i);

          birds.birdX1.at(i) = birds.birdX2.at(i) - (birds.birdX1.at(i)-birds.birdX2.at(i));
          birds.birdX2.at(i) = birds.birdX2.at(i) - (birds.birdX2.at(i)-birds.birdX2.at(i));
          birds.birdX3.at(i) = birds.birdX2.at(i) - (birds.birdX3.at(i)-birds.birdX2.at(i));
        }

        if(birds.birdY2.at(i)>birdYMax && birds.ySpeed.at(i)>=0) {
        //  birdY2.at(i) = birdYMax;
          birds.ySpeed.at(i) = -birds.ySpeed.at(i); 

          birds.birdY1.at(i) = (birds.birdY2.at(i)-birds.birdY1.at(i)) + birds.birdY2.at(i);
          birds.birdY2.at(i) = (birds.birdY2.at(i)-birds.birdY2.at(i)) + birds.birdY2.at(i);
          birds.birdY3.at(i) = (birds.birdY2.at(i)-birds.birdY3.at(i)) + birds.birdY2.at(i);
        }
        else if(birds.birdY2.at(i) < birdYMin && birds.ySpeed.at(i)<=0) {
     //     birdY2.at(i) = birdYMin;
          birds.ySpeed.at(i) = -birds.ySpeed.at(i);

          birds.birdY1.at(i) = birds.birdY2.at(i) - (birds.birdY1.at(i)-birds.birdY2.at(i));
          birds.birdY2.at(i) = birds.birdY2.at(i) - (birds.birdY2.at(i)-birds.birdY2.at(i));
          birds.birdY3.at(i) = birds.birdY2.at(i) - (birds.birdY3.at(i)-birds.birdY2.at(i));
        }
////////// CHANGED

        GLfloat p = 0.02f;
        GLfloat b = 0.01f;

        GLfloat v_x = birds.xSpeed.at(i) ;
        GLfloat v_y = birds.ySpeed.at(i) ;
        GLfloat theeta;
        if (v_x !=0) 
        {
            theeta = atan(v_y/v_x);
        }
        else
        {
            theeta = 1.57;
        }
        if (v_y > 0 && v_x >= 0)
        { 
            ;
        }
        else if (v_y > 0 && v_x <= 0 )
        {
          theeta = theeta +3.14;
        }
        else if (v_y < 0 && v_x <= 0 )
        {
          theeta = theeta +3.14;
        }
        else if (v_y < 0 && v_x >= 0 )
        {
          ;
        }


////////// CHANGED END         
        // birdX1.at(i) = birdX1.at(i)+ xSpeed.at(i) ;
         birds.birdX2.at(i) = birds.birdX2.at(i) + birds.xSpeed.at(i) ;
        // birdX3.at(i) = birdX3.at(i) + xSpeed.at(i);
        ///
       
        // birdY1.at(i) = birdY1.at(i) + ySpeed.at(i) ;
         birds.birdY2.at(i) = birds.birdY2.at(i) + birds.ySpeed.at(i) ;
        // birdY3.at(i) = birdY3.at(i) + ySpeed.at(i) ;

////////// CHANGED

        // Direcion of the Bird in tiled velocity
          birds.birdX1.at(i) = birds.birdX2.at(i) - p*cos(theeta) - b*sin(theeta);
          birds.birdY1.at(i) = birds.birdY2.at(i) - p*sin(theeta) + b*cos(theeta) ;

          birds.birdX3.at(i) = birds.birdX2.at(i) - p*cos(theeta) + b*sin(theeta);
          birds.birdY3.at(i) = birds.birdY2.at(i) - p*sin(theeta) - b*cos(theeta);
        //

       
          std::cout << "BIRD "<< i<< "\n xCORD : "<< birds.birdX2.at(i)  <<" yCORD : "<< birds.birdY2.at(i) <<" \n xSpeed :  " << birds.xSpeed.at(i) << "  ySpeed : " << birds.ySpeed.at(i) <<  std::endl ;
        


 ////////// CHANGED END         
    }

    return birds;
}