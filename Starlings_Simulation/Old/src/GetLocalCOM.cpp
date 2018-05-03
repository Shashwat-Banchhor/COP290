#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"


BirdsLocal GetLocalCOM( Birds birds, BirdsLocal local_birds ) 
{

  local_birds.birdXCOM.clear();
  local_birds.birdYCOM.clear();

  for (int i = 0; i < birds.birdCount; i++)
  {
    
    std::vector<GLfloat> Dist_from_close_birds = local_birds.Distances.at(i) ;
    GLfloat birds_in_rad = Dist_from_close_birds.size();
    GLfloat xCOM,yCOM;
    xCOM=0;
    yCOM=0;
    if(birds_in_rad != 0 )
    {  
      for (int j = 0; j < birds_in_rad ; j++)
      {
        GLfloat bird_no=Dist_from_close_birds.at(j);
        xCOM += birds.birdX2.at(bird_no);
        yCOM += birds.birdY2.at(bird_no);
      }
      local_birds.birdXCOM.push_back(xCOM/birds_in_rad);
      local_birds.birdYCOM.push_back(yCOM/birds_in_rad);
    }
    else
    {      
      local_birds.birdXCOM.push_back(birds.birdX2.at(i));
      local_birds.birdYCOM.push_back(birds.birdY2.at(i));
    }
  }

  return local_birds;

}