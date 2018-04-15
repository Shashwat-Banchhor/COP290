#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>
// std::vector<std::vector<int> > translate(threed_object threed)
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

std::vector<std::vector<int> > translate_seperately(std::vector<std::vector<int> > edges)
    {
        
		 int n ;
        std::vector<int> vecto = edges.at(0); 
                std::vector<std::vector<int> >  to_ret;

        int min_x = vecto.at(2) ;
        int min_y = vecto.at(3) ;
        //int max_x = vecto.at(0) ;
        for (int i = 0; i < edges.size(); ++i)
        {
            std::vector<int> vec = edges.at(i);
            
            if (min_x>fmin(vec.at(2),vec.at(0))){
                min_x = fmin(vec.at(2),vec.at(0));
            }
           
            if (min_y>fmin(vec.at(3),vec.at(1))){
                min_y = fmin(vec.at(3),vec.at(1));
            }

        }

		for(int i=0;i<edges.size();i++){
                std::vector<int> v = edges.at(i);
                int x1,x2,y1,y2;
                x1 = v.at(0)-min_x;
                y1 = v.at(1)-min_y;
                x2 = v.at(2)-min_x;
                y2 = v.at(3)-min_y;
                std::vector<int> inter;
                inter.push_back(x1);
                inter.push_back(y1);
                inter.push_back(x2);
                inter.push_back(y2);
                to_ret.push_back(inter);

            }

                return to_ret;
    }


std::vector<std::vector<int> > translate(int x,int y,std::vector<std::vector<int> > edges){
        std::vector<std::vector<int> >  to_ret;
        for(int i=0;i<edges.size();i++){
        	std::vector<int> v = edges.at(i);
        	int x1,x2,y1,y2;
        	x1 = v.at(0)+x;
        	y1 = v.at(1)+y;
        	x2 = v.at(2)+x;
        	y2 = v.at(3)+y;
        	std::vector<int> inter;
        	inter.push_back(x1);
        	inter.push_back(y1);
        	inter.push_back(x2);
        	inter.push_back(y2);
        	to_ret.push_back(inter);
        }
                return to_ret;
    }