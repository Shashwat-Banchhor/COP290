#include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string>
#include <vector>
#include <math.h>
#include <vector>
#include "functions.h"
#include "global.h"

BirdsLocal GetLocalDistances( Birds birds)
{

	BirdsLocal local_birds;
    for (int i = 0; i < birds.birdCount ; i++)
    {
      std::vector<GLfloat> v;
      GLfloat temp_near=birds.effRadius;
      GLfloat temp_near_bird=i;
      GLfloat temp_xSpeed=0;
      GLfloat temp_ySpeed=0;
      for (int j = 0; j < birds.birdCount; j++)
      {
        if(i!=j)
        {
          GLfloat dist=0;
          dist =  sqrt(pow((birds.birdX2.at(j)-birds.birdX2.at(i)),2)+ pow((birds.birdY2.at(j)-birds.birdY2.at(i)),2));
          if (dist < birds.effRadius)
          { 
              v.push_back(j);
              temp_xSpeed += birds.xSpeed.at(j);
              temp_ySpeed += birds.ySpeed.at(j);
              if(dist<temp_near){
                temp_near=dist;
                temp_near_bird=j;
              }
          }

        }
      }
      local_birds.nearest_bird.push_back(temp_near_bird);  // The index of the nearest bird;
      local_birds.Distances.push_back(v);
      if(v.size() != 0)
      {  
        local_birds.birdXAVG.push_back(temp_xSpeed/v.size());
        local_birds.birdYAVG.push_back(temp_ySpeed/v.size());
      }
      else
      {
        local_birds.birdXAVG.push_back(0);
        local_birds.birdYAVG.push_back(0);
      }
    }
    return local_birds;

}