#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"

Birds birds;
BirdsLocal local_birds;

GLfloat birdXMax,birdXMin,birdYMax,birdYMin;

int refreshMillis = 50;




 
//------------------------------  reshapeFunc  ---------------------------------

GLdouble clipAreaXLeft,clipAreaXRight, clipAreaYTop,clipAreaYBotton;
 
void reshape (GLsizei width, GLsizei height)
{
    
    if(height==0) height = 1;
    int aspect = (int)width/(int)height;

  
    
 
    gluPerspective (10.0, (GLdouble)width / (GLdouble)height, 0.5, 20.0);
      
    glViewport     (0, 0, width, height);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();

    if (width>height){
      clipAreaXRight = 1.0 * aspect;
      clipAreaXLeft = -1.0 * aspect;
      clipAreaYBotton = -1.0;
      clipAreaYTop = 1.0; 
    }
    else{
      clipAreaXRight = 1.0 ;
      clipAreaXLeft = -1.0 ;
      clipAreaYBotton = -1.0/aspect;
      clipAreaYTop = 1.0/aspect; 
    }
    gluOrtho2D(clipAreaXLeft,clipAreaXRight,clipAreaYBotton,clipAreaYTop);
    birdXMin = clipAreaXLeft + birds.birdradius;
    birdXMax = clipAreaXRight -birds.birdradius;
    birdYMax = clipAreaYTop - birds.birdradius;
    birdYMin = clipAreaYBotton +birds.birdradius;
}


//------------------------------  Rendering   -------------------------------
 
void display (void)
{
    glClear        (GL_COLOR_BUFFER_BIT);
    glMatrixMode   (GL_MODELVIEW);
    glLoadIdentity ();
    glTranslatef    (0.0f, 0.0f, 0.0f);
   
/// OperateBird was called here
   
   
    //birds = bird_Input(birds);
	birds = DrawAndCheckBirds( birds,birdXMax,birdXMin,birdYMax,birdYMin);
    local_birds =  GetLocalDistances(birds);
    local_birds = GetLocalCOM(birds,local_birds);
   	birds = MoveTowardsCOM(birds,local_birds);
   	birds = MoveAwayNearest(birds,local_birds);
    birds = MoveTowardsAvgSpeed(birds,local_birds);



    glutSwapBuffers();
 

}

//--------------------------------  Timer  ----------------------------------
 void Timer(int value){
    glutPostRedisplay();
    glutTimerFunc(refreshMillis,Timer,0);
 }

//----------------------------------  main  ------------------------------------
 
int windowWidth = 800;
int windowHeight = 800;
int windowPosX = 50;
int windowPosY = 50;

void initGL(){
  glClearColor(0.0f,0.0f,0.0f,1.0f);
}


void keyboard(unsigned char c , int x ,int y){
    
    if (c == 27){
        exit(0);
    }
    
}
void mouse(int button,int state,int x,int y){
    if (button == GLUT_RIGHT_BUTTON){
        exit(0);

    }
    else if (button == GLUT_LEFT_BUTTON)
    {
            birds = bird_Input(0.0f,0.0f,0.1f,0.1f,-0.05f,0.05f,0.015f,birds);

    }
}

int main (int argc, char **argv)
{
    birds = bird_Input(0.0f,0.0f,0.1f,0.1f,-0.05f,0.05f,0.015f,birds);
    
   
    glutInit               (&argc, argv);
    glutInitDisplayMode    (GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize     (windowWidth, windowHeight );
    glutInitWindowPosition (windowPosX, windowPosY);
    glutCreateWindow       ("Flocking");
    glutDisplayFunc (display);
    glutReshapeFunc (reshape);
    glutTimerFunc(0,Timer,0);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    initGL();
    glutMainLoop();
    
    return 0;
    
}
