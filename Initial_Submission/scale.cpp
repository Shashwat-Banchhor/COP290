#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>
// threed_object scale(threed_object threed)
//     {
//         int maxlimit =100;
//         int minx=threed.vertex[0][0];
//         int miny=threed.vertex[1][1];
//         int minz=threed.vertex[0][2];
        // for(int i=0;i<threed.vertex.size();i++){
        //     if(minx>threed.vertex[i][0]){
        //         minx=threed.vertex[i][0];
        //     }
        //     if(miny>threed.vertex[i][1]){
        //         miny=threed.vertex[i][1];
        //     }
        //     if(miny>threed.vertex[i][2]){
        //         miny=threed.vertex[i][2];
        //     }
        // }
//         int maxx=threed.vertex[0][0];
//         int maxy=threed.vertex[1][1];
//         int maxz=threed.vertex[0][2];
//         for(int i=0;i<threed.vertex.size();i++){
//             if(maxx<threed.vertex[i][0]){
//                 maxx=threed.vertex[i][0];
//             }
//             if(maxy<threed.vertex[i][1]){
//                 maxy=threed.vertex[i][1];
//             }
//             if(maxy<threed.vertex[i][2]){
//                 maxy=threed.vertex[i][2];
//             }
//         }
//         int rnx=maxx-minx;
//         int rnz=maxz-minz;
//         int rny=maxy-miny;
//         int sc;
//         if(rnx<rny&&rnz<rny){
//             sc=rny/maxlimit+1;
//         }
//         if(rny<rnx&&rnz<rnx){
//             sc=rnx/maxlimit+1;
//         }
//         if(rnx<rnz&&rny<rnz){
//             sc=rnx/maxlimit+1;
//         }
//         for(int i=0;i<threed.vertex.size();i++){
//             threed.vertex[i][0]=threed.vertex[i][0]/sc;
//             threed.vertex[i][1]=threed.vertex[i][1]/sc;
//             threed.vertex[i][2]=threed.vertex[i][2]/sc;
//         }
//         for(int i=0;i<threed.edge.size();i++){
//             threed.edge[i][0]=threed.edge[i][0]/sc;
//             threed.edge[i][1]=threed.edge[i][1]/sc;
//             threed.edge[i][2]=threed.edge[i][2]/sc;
//             threed.edge[i][3]=threed.edge[i][3]/sc;
//             threed.edge[i][4]=threed.edge[i][4]/sc;
//             threed.edge[i][5]=threed.edge[i][5]/sc;
//         }
//     }
int scale_max(std::vector<std::vector<int> >  edges){
        int n ;
        std::vector<int> vecto = edges.at(0); 
        int max_x = vecto.at(2) ;
        int max_y = vecto.at(3) ;
        int min_x = vecto.at(2) ;
        int min_y = vecto.at(3) ;
        //int max_x = vecto.at(0) ;
        for (int i = 0; i < edges.size(); ++i)
        {
            std::vector<int> vec = edges.at(i);
            if (max_x<fmax(vec.at(2),vec.at(0))){
                max_x = fmax(vec.at(2),vec.at(0));
            }
            if (min_x>fmin(vec.at(2),vec.at(0))){
                min_x = fmin(vec.at(2),vec.at(0));
            }
            if (max_y<fmax(vec.at(3),vec.at(1))){
                max_y = fmax(vec.at(3),vec.at(1));
            }
            if (min_y>fmin(vec.at(3),vec.at(1))){
                min_y = fmin(vec.at(3),vec.at(1));
            }

        }
        
        return fmax((max_x - min_x),(max_y - min_y));

}



   std::vector<std::vector<int> >  scale(int max_x,std::vector<std::vector<int> >  edges){

        
        // Now we Haave max_x and redundant max_y
        int n;
        std::vector<std::vector<int> >  to_ret;
        if (max_x<250){
            n= 250/max_x ;
           // std::vector<std::vector<int> >  to_ret;
            for(int i=0;i<edges.size();i++){
                std::vector<int> v = edges.at(i);
                int x1,x2,y1,y2;
                x1 = v.at(0)*n;
                y1 = v.at(1)*n;
                x2 = v.at(2)*n;
                y2 = v.at(3)*n;
                std::vector<int> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(x2);
                inter.push_back(y2);
                to_ret.push_back(inter);

            }
        }
        else{
            n= max_x/250+1;
        

            //std::vector<std::vector<int> >  to_ret;
            for(int i=0;i<edges.size();i++){
                std::vector<int> v = edges.at(i);
                int x1,x2,y1,y2;
                x1 = v.at(0)/n;
                y1 = v.at(1)/n;
                x2 = v.at(2)/n;
                y2 = v.at(3)/n;
                std::vector<int> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(x2);
                inter.push_back(y2);
                to_ret.push_back(inter);

            }
        }
          
                return to_ret;
    }