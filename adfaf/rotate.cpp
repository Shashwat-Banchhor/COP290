#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>

threed_object rotate(double x,double y,double z,threed_object threed )
    {
        int temp1;
        int temp2;
        for(int i=0;i<threed.vertex.size();i++){
            temp1=threed.vertex[i][1]*(cos (x))+threed.vertex[i][2]*(sin (x));
            temp2=(threed.vertex[i][1])*(-sin (x))+(threed.vertex[i][2])*(cos (x));
            threed.vertex[i][1]=temp1;
            threed.vertex[i][2]=temp2;
            temp1=threed.vertex[i][0]*(cos (x))+threed.vertex[i][2]*(sin (x));
            temp2=(threed.vertex[i][0])*(-sin (x))+(threed.vertex[i][2])*(cos (x));
            threed.vertex[i][2]=temp1;
            threed.vertex[i][0]=temp2;
            temp1=threed.vertex[i][0]*(cos (x))+threed.vertex[i][1]*(sin (x));
            temp2=(threed.vertex[i][0])*(-sin (x))+(threed.vertex[i][1])*(cos (x));
            threed.vertex[i][0]=temp1;
            threed.vertex[i][1]=temp2;            
        }
        for(int i=0;i<threed.edge.size();i++){
            temp1=threed.edge[i][1]*(cos (x))+threed.edge[i][2]*(sin (x));
            temp2=(threed.edge[i][1])*(-sin (x))+(threed.edge[i][2])*(cos (x));
            threed.edge[i][1]=temp1;
            threed.edge[i][2]=temp2;
            temp1=threed.edge[i][2]*(cos (x))+threed.edge[i][0]*(sin (x));
            temp2=(threed.edge[i][2])*(-sin (x))+(threed.edge[i][0])*(cos (x));
            threed.edge[i][2]=temp1;
            threed.edge[i][0]=temp2;
            temp1=threed.edge[i][0]*(cos (x))+threed.edge[i][1]*(sin (x));
            temp2=(threed.edge[i][0])*(-sin (x))+(threed.edge[i][1])*(cos (x));
            threed.edge[i][0]=temp1;
            threed.edge[i][1]=temp2;
            temp1=threed.edge[i][4]*(cos (x))+threed.edge[i][5]*(sin (x));
            temp2=(threed.edge[i][4])*(-sin (x))+(threed.edge[i][5])*(cos (x));
            threed.edge[i][4]=temp1;
            threed.edge[i][5]=temp2;
            temp1=threed.edge[i][5]*(cos (x))+threed.edge[i][3]*(sin (x));
            temp2=(threed.edge[i][5])*(-sin (x))+(threed.edge[i][3])*(cos (x));
            threed.edge[i][5]=temp1;
            threed.edge[i][3]=temp2;
            temp1=threed.edge[i][3]*(cos (x))+threed.edge[i][4]*(sin (x));
            temp2=(threed.edge[i][3])*(-sin (x))+(threed.edge[i][4])*(cos (x));
            threed.edge[i][3]=temp1;
            threed.edge[i][4]=temp2;
        }
        return threed;
    }
    
    