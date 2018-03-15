#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>
threed_object scale(threed_object threed)
    {
        int maxlimit =100;
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
        int maxx=threed.vertex[0][0];
        int maxy=threed.vertex[1][1];
        int maxz=threed.vertex[0][2];
        for(int i=0;i<threed.vertex.size();i++){
            if(maxx<threed.vertex[i][0]){
                maxx=threed.vertex[i][0];
            }
            if(maxy<threed.vertex[i][1]){
                maxy=threed.vertex[i][1];
            }
            if(maxy<threed.vertex[i][2]){
                maxy=threed.vertex[i][2];
            }
        }
        int rnx=maxx-minx;
        int rnz=maxz-minz;
        int rny=maxy-miny;
        int sc;
        if(rnx<rny&&rnz<rny){
            sc=rny/maxlimit+1;
        }
        if(rny<rnx&&rnz<rnx){
            sc=rnx/maxlimit+1;
        }
        if(rnx<rnz&&rny<rnz){
            sc=rnx/maxlimit+1;
        }
        for(int i=0;i<threed.vertex.size();i++){
            threed.vertex[i][0]=threed.vertex[i][0]/sc;
            threed.vertex[i][1]=threed.vertex[i][1]/sc;
            threed.vertex[i][2]=threed.vertex[i][2]/sc;
        }
        for(int i=0;i<threed.edge.size();i++){
            threed.edge[i][0]=threed.edge[i][0]/sc;
            threed.edge[i][1]=threed.edge[i][1]/sc;
            threed.edge[i][2]=threed.edge[i][2]/sc;
            threed.edge[i][3]=threed.edge[i][3]/sc;
            threed.edge[i][4]=threed.edge[i][4]/sc;
            threed.edge[i][5]=threed.edge[i][5]/sc;
        }
    }
    threed_object scale(int n,threed_object threed){
        for(int i=0;i<threed.vertex.size();i++){
            threed.vertex[i][0]=threed.vertex[i][0]/n;
            threed.vertex[i][1]=threed.vertex[i][1]/n;
            threed.vertex[i][2]=threed.vertex[i][2]/n;
        }
        for(int i=0;i<threed.edge.size();i++){
            threed.edge[i][0]=threed.edge[i][0]/n;
            threed.edge[i][1]=threed.edge[i][1]/n;
            threed.edge[i][2]=threed.edge[i][2]/n;
            threed.edge[i][3]=threed.edge[i][3]/n;
            threed.edge[i][4]=threed.edge[i][4]/n;
            threed.edge[i][5]=threed.edge[i][5]/n;
        }
                return threed;
    }