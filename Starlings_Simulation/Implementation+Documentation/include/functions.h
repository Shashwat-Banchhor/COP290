#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string.h>
#include <vector>
#include <math.h>
#include <vector>


#include "global.h"

Birds bird_Input(GLfloat X1,GLfloat Y1,GLfloat X2,GLfloat Y2,GLfloat X3,GLfloat Y3,GLfloat xS, Birds birds);
BirdsLocal GetLocalCOM( Birds birds, BirdsLocal local_birds ) ;
BirdsLocal GetLocalDistances(  Birds birds);
Birds DrawAndCheckBirds(Birds birds, GLfloat birdXMax ,  GLfloat birdXMin, GLfloat birdYMax , GLfloat birdYMin );
Birds MoveTowardsCOM( Birds birds , BirdsLocal local_birds);
Birds MoveAwayNearest(Birds birds , BirdsLocal local_birds);
Birds MoveTowardsAvgSpeed(Birds birds , BirdsLocal local_birds);
