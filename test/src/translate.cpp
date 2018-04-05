#include <iostream>
#include <stdio.h>
#include "function.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>
// std::vector<std::vector<float> > translate(threed_object threed)
//     {
//         int minx=threed.vertex[0][0];
//         int miny=threed.vertex[1][1];
//         int minz=threed.vertex[0][2];
//         for(int i=0;i<threed.vertex.size();i++){
//             if(minx>threed.vertex[i][0]){
//                 minx=threed.vertex[i][0];
//             }
//             if(miny>threed.vertex[i][1]){
//                 miny=threed.vertex[i][1];
//             }
//             if(miny>threed.vertex[i][2]){
//                 miny=threed.vertex[i][2];
//             }
//         }
//         for(int i=0;i<threed.vertex.size();i++){
//             threed.vertex[i][0]=threed.vertex[i][0]-minx;
//             threed.vertex[i][1]=threed.vertex[i][1]-miny;
//             threed.vertex[i][2]=threed.vertex[i][2]-minz;
//         }
//         for(int i=0;i<threed.edge.size();i++){
//             threed.edge[i][0]=threed.edge[i][0]-minx;
//             threed.edge[i][1]=threed.edge[i][1]-miny;
//             threed.edge[i][2]=threed.edge[i][2]-minz;
//             threed.edge[i][3]=threed.edge[i][3]-minx;
//             threed.edge[i][4]=threed.edge[i][4]-miny;
//             threed.edge[i][5]=threed.edge[i][5]-minz;
//         }
//                 return threed;
//     }

std::vector<std::vector<float> > translate_seperately(std::vector<std::vector<float> > edges)
    {

                 //float n ;
        std::vector<float> vecto = edges.at(0);
                std::vector<std::vector<float> >  to_ret;

        float min_x = vecto.at(2) ;
        float min_y = vecto.at(3) ;
        //int max_x = vecto.at(0) ;
        int p=edges.size();
        for (int i = 0; i < p; ++i)
        {
            std::vector<float> vec = edges.at(i);

            if (min_x>fmin(vec.at(2),vec.at(0))){
                min_x = fmin(vec.at(2),vec.at(0));
            }

            if (min_y>fmin(vec.at(3),vec.at(1))){
                min_y = fmin(vec.at(3),vec.at(1));
            }
        }


        for(int i=0;i<p;i++){
                std::vector<float> v = edges.at(i);
                float x1,x2,y1,y2;
                x1 = v.at(0)-min_x;
                y1 = v.at(1)-min_y;
                x2 = v.at(2)-min_x;
                y2 = v.at(3)-min_y;
                std::vector<float> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(x2);
                inter.push_back(y2);
                to_ret.push_back(inter);

            }

                return to_ret;
    }




std::vector<std::vector<float> > translate_seperately_threed(std::vector<std::vector<float> > edges)
    {

                 //float n ;
        std::vector<float> vecto = edges.at(0);
                std::vector<std::vector<float> >  to_ret;

        float min_x = vecto.at(0) ;
        float min_y = vecto.at(1) ;
        float min_z = vecto.at(2) ;
        //int max_x = vecto.at(0) ;
        int p=edges.size();
        for (int i = 0; i < p; ++i)
        {
            std::vector<float> vec = edges.at(i);

            if (min_x>fmin(vec.at(3),vec.at(0))){
                min_x = fmin(vec.at(3),vec.at(0));
            }

            if (min_y>fmin(vec.at(4),vec.at(1))){
                min_y = fmin(vec.at(4),vec.at(1));
            }
            if (min_y>fmin(vec.at(5),vec.at(2))){
                min_y = fmin(vec.at(5),vec.at(2));
            }
        }


        for(int i=0;i<p;i++){
                std::vector<float> v = edges.at(i);
                float x1,x2,y1,y2,z1,z2;
                x1 = v.at(0)-min_x;
                y1 = v.at(1)-min_y;
                z1 = v.at(2)-min_z;
                x2 = v.at(3)-min_x;
                y2 = v.at(4)-min_y;
                z2 = v.at(5)-min_z;
                std::vector<float> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(z1);
                inter.push_back(x2);
                inter.push_back(y2);
                inter.push_back(z2);
                to_ret.push_back(inter);

            }

                return to_ret;
    }





std::vector<std::vector<float> > translate(float x,float y,std::vector<std::vector<float> > edges){
        std::vector<std::vector<float> >  to_ret;
        int p=edges.size();
        for(int i=0;i<p;i++){
                std::vector<float> v = edges.at(i);
                float x1,x2,y1,y2;
                x1 = v.at(0)+x;
                y1 = v.at(1)+y;
                x2 = v.at(2)+x;
                y2 = v.at(3)+y;
                std::vector<float> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(x2);
                inter.push_back(y2);
                to_ret.push_back(inter);
        }
                return to_ret;
    }

std::vector<std::vector<float> > translate_threed(float x,float y,float z,std::vector<std::vector<float> > edges){
        std::vector<std::vector<float> >  to_ret;
        int p=edges.size();
        for(int i=0;i<p;i++){
                std::vector<float> v = edges.at(i);
                float x1,x2,y1,y2,z1,z2;
                x1 = v.at(0)+x;
                y1 = v.at(1)+y;
                z1 = v.at(2)+z;
                x2 = v.at(3)+x;
                y2 = v.at(4)+y;
                z2 = v.at(5)+z;
                std::vector<float> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(z1);
                inter.push_back(x2);
                inter.push_back(y2);
                inter.push_back(z2);
                to_ret.push_back(inter);
        }
                return to_ret;
    }
