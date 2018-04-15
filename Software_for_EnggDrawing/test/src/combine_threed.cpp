#include <iostream>
#include <stdio.h>
#include "function.h"
#include "global.h"
#include<string.h>
#include<vector>
using namespace std;


    threed_object Combine_threed(threed_object three){

    threed_object comb;
    threed_object temp;

    std::vector<std::vector<float> > comb_edges =comb.edge;
    std::vector<std::vector<float> > temp_edges = three.edge;
    int max = scale_max_threed(temp_edges);
    std::vector<std::vector<float> > s_ret1 = scale_threed(max,temp_edges);
    std::vector<std::vector<float> > t_ret1 = translate_seperately_threed(s_ret1);
    comb_edges = translate_threed(0,0,0,t_ret1);
//    std::vector<std::vector<float> > tempf;
//    std::cout<<"comb:";
//    for(int i=0;i<tempf.size();i++){
//        std::vector<float> tm;
//        tm = tempf.at(i);
//        std::cout<<tm.at(0)<<" "<<tm.at(1)<<" "<<tm.at(2)<<" "<<tm.at(3)<<" "<<tm.at(4)<<" "<<tm.at(5)<<" ";
//    }
    comb.edge = comb_edges;

    return comb;
}
