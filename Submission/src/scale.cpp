#include <iostream>
#include <stdio.h>
#include "function.h"
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
float scale_max(std::vector<std::vector<float> >  edges){
        std::vector<float> vecto = edges.at(0);
        float max_x = vecto.at(2) ;
        float max_y = vecto.at(3) ;
        float min_x = vecto.at(2) ;
        float min_y = vecto.at(3) ;
        //int max_x = vecto.at(0) ;
        int p;
        p=edges.size();
        for (int i = 0; i < p; ++i)
        {
            std::vector<float> vec = edges.at(i);
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

float scale_max_threed(std::vector<std::vector<float> >  edges){
        std::vector<float> vecto = edges.at(0);
        float max_x = vecto.at(0) ;
        float max_y = vecto.at(1) ;
        float max_z = vecto.at(2) ;
        float min_x = vecto.at(0) ;
        float min_y = vecto.at(1) ;
        float min_z = vecto.at(2) ;
        //int max_x = vecto.at(0) ;
        int p;
        p=edges.size();
        for (int i = 0; i < p; ++i)
        {
            std::vector<float> vec = edges.at(i);
            if (max_x<fmax(vec.at(3),vec.at(0))){
                max_x = fmax(vec.at(3),vec.at(0));
            }
            if (min_x>fmin(vec.at(3),vec.at(0))){
                min_x = fmin(vec.at(3),vec.at(0));
            }
            if (max_y<fmax(vec.at(4),vec.at(1))){
                max_y = fmax(vec.at(4),vec.at(1));
            }
            if (min_y>fmin(vec.at(4),vec.at(1))){
                min_y = fmin(vec.at(4),vec.at(1));
            }
            if (max_z<fmax(vec.at(5),vec.at(2))){
                max_z = fmax(vec.at(5),vec.at(2));
            }
            if (min_z>fmin(vec.at(5),vec.at(2))){
                min_z = fmin(vec.at(5),vec.at(2));
            }

        }

        return fmax((max_x - min_x),(max_y - min_y));

}



std::vector<std::vector<float> >  scale_threed(float max_x,std::vector<std::vector<float> >  edges){


     // Now we Haave max_x and redundant max_y
     float n;
     std::vector<std::vector<float> >  to_ret;
     if (max_x<0.6){
         n= 0.6/max_x ;
        // std::vector<std::vector<float> >  to_ret;
         int p=edges.size();
         for(int i=0;i<p;i++){
             std::vector<float> v = edges.at(i);
             float x1,x2,y1,y2,z1,z2;
             x1 = v.at(0)*n;
             y1 = v.at(1)*n;
             z1 = v.at(2)*n;
             x2 = v.at(3)*n;
             y2 = v.at(4)*n;
             z1 = v.at(5)*n;
             std::vector<float> inter;
             inter.push_back(x1);
             inter.push_back(y1);
             inter.push_back(z1);
             inter.push_back(x2);
             inter.push_back(y2);
             inter.push_back(z2);
             to_ret.push_back(inter);

         }
     }
     else{
         n= max_x/0.6+1;


         //std::vector<std::vector<float> >  to_ret;
         int  p=edges.size();
      //   std::cout<<"vertices of 3d:"<<"\n";
         for(int i=0;i<p;i++){
             std::vector<float> v = edges.at(i);
             float x1,x2,y1,y2,z1,z2;
             x1 = v.at(0)/n;
             y1 = v.at(1)/n;
             z1 = v.at(2)/n;
             x2 = v.at(3)/n;
             y2 = v.at(4)/n;
             z2 = v.at(5)/n;
             std::vector<float> inter;
             inter.push_back(x1);
             inter.push_back(y1);
             inter.push_back(z1);
             inter.push_back(x2);
             inter.push_back(y2);
             inter.push_back(z2);
            // std::cout<<x1<<" "<<y1<<" "<<z1<<" "<<x2<<" "<<y2<<" "<<z2;
             to_ret.push_back(inter);

         }
     }

             return to_ret;
 }





   std::vector<std::vector<float> >  scale(float max_x,std::vector<std::vector<float> >  edges){


        // Now we Haave max_x and redundant max_y
        float n;
        std::vector<std::vector<float> >  to_ret;
        if (max_x<1.0){
            n= 1.0/max_x ;
           // std::vector<std::vector<float> >  to_ret;
            int p=edges.size();
            for(int i=0;i<p;i++){
                std::vector<float> v = edges.at(i);
                float x1,x2,y1,y2;
                x1 = v.at(0)*n;
                y1 = v.at(1)*n;
                x2 = v.at(2)*n;
                y2 = v.at(3)*n;
                std::vector<float> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(x2);
                inter.push_back(y2);
                to_ret.push_back(inter);

            }
        }
        else{
            n= max_x/1.0+1;


            //std::vector<std::vector<float> >  to_ret;
            int  p=edges.size();
            for(int i=0;i<p;i++){
                std::vector<float> v = edges.at(i);
                float x1,x2,y1,y2;
                x1 = v.at(0)/n;
                y1 = v.at(1)/n;
                x2 = v.at(2)/n;
                y2 = v.at(3)/n;
                std::vector<float> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(x2);
                inter.push_back(y2);
                to_ret.push_back(inter);

            }
        }

                return to_ret;
    }
