#ifndef MY_GLOBALS_H
#define MY_GLOBALS_H
#include <vector>
#include <cmath>
#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string.h>
#include <vector>
#include <math.h>
#include <vector>


class Birds{
    public:
        // Data Members
    std::vector<GLfloat> birdX1 ;
    std::vector<GLfloat> birdX2 ;
    std::vector<GLfloat> birdX3 ;

    std::vector<GLfloat> birdY1 ;
    std::vector<GLfloat> birdY2 ;
    std::vector<GLfloat> birdY3 ;

    std::vector<GLfloat> xSpeed ;
    std::vector<GLfloat> ySpeed ;

    GLfloat birdCount;
    GLfloat birdradius = 0.0f;
    GLfloat effRadius = 0.40f;
};



class BirdsLocal{
    public:
    std::vector<GLfloat> birdXAVG ;
    std::vector<GLfloat> birdYAVG ;

    std::vector<GLfloat> birdXCOM ;
    std::vector<GLfloat> birdYCOM ;

    std::vector<GLfloat> nearest_bird;
    std::vector<std::vector<GLfloat> > Distances;
};

class PhysicalProperties{
    public:
    std::vector<GLfloat> Energy ;
    std::vector<GLfloat> AngularMomentumAboutLocalCOM ;
    std::vector<GLfloat> Force ;
  
    GLfloat TotalEnergy;  
    GLfloat AvgAngularMomentumAboutLocalCOM;
    GLfloat AvgForce;
};


 // threedplane thplane;
 //  threed_object threed;
 //  VIEW front;
 //  VIEW top;
 //  VIEW side;
#endif
