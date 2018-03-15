#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>
threed_object translate(threed_object threed)
    {
        int minx=threed.vertex[0][0];
        int miny=threed.vertex[1][1];
        int minz=threed.vertex[0][2];
        for(int i=0;i<threed.vertex.size();i++){
            if(minx>threed.vertex[i][0]){
                minx=threed.vertex[i][0];
            }
            if(miny>threed.vertex[i][1]){
                miny=threed.vertex[i][1];
            }
            if(miny>threed.vertex[i][2]){
                miny=threed.vertex[i][2];
            }
        }
        for(int i=0;i<threed.vertex.size();i++){
            threed.vertex[i][0]=threed.vertex[i][0]-minx;
            threed.vertex[i][1]=threed.vertex[i][1]-miny;
            threed.vertex[i][2]=threed.vertex[i][2]-minz;
        }        
        for(int i=0;i<threed.edge.size();i++){
            threed.edge[i][0]=threed.edge[i][0]-minx;
            threed.edge[i][1]=threed.edge[i][1]-miny;
            threed.edge[i][2]=threed.edge[i][2]-minz;
            threed.edge[i][3]=threed.edge[i][3]-minx;
            threed.edge[i][4]=threed.edge[i][4]-miny;
            threed.edge[i][5]=threed.edge[i][5]-minz;
        }
                return threed;
    }
    threed_object translate(int x,int y,int z,threed_object threed){
        for(int i=0;i<threed.vertex.size();i++){
            threed.vertex[i][0]=threed.vertex[i][0]-x;
            threed.vertex[i][1]=threed.vertex[i][1]-y;
            threed.vertex[i][2]=threed.vertex[i][2]-z;
        }    
        for(int i=0;i<threed.edge.size();i++){
            threed.edge[i][0]=threed.edge[i][0]-x;
            threed.edge[i][1]=threed.edge[i][1]-y;
            threed.edge[i][2]=threed.edge[i][2]-z;
            threed.edge[i][3]=threed.edge[i][3]-x;
            threed.edge[i][4]=threed.edge[i][4]-y;
            threed.edge[i][5]=threed.edge[i][5]-z;
        }
                return threed;
    }