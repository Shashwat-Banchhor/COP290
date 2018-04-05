#include <iostream>
#include <stdio.h>
#include "function.h"
#include "global.h"
#include<string.h>
#include<vector>
using namespace std;


Combine Combine_func(fts two){

    Combine comb;
    Combine temp;
int p;
    std::vector<std::vector<float> > comb_edges =comb.edge;
    std::vector<std::vector<float> > fedges = two.fedge;
    std::vector<std::vector<float> > sedges = two.sedge;
    std::vector<std::vector<float> > tedges = two.tedge;


//    int pts;
//    pts= fedges.size();
//    //std::cout<<"checkingf "<<"\n";
//    for(int i=0;i<pts;i++){
//        std::vector<float> vt;
//        vt=fedges.at(i);
//        std::cout<<"check "<<vt.at(0)<<" "<<vt.at(1)<<" "<<vt.at(2)<<" "<<vt.at(3);
//    }


//    pts= tedges.size();
//    std::cout<<"checkingt "<<"\n";
//    for(int i=0;i<pts;i++){
//        std::vector<float> vt;
//        vt=tedges.at(i);
//        std::cout<<"check "<<vt.at(0)<<" "<<vt.at(1)<<" "<<vt.at(2)<<" "<<vt.at(3);
//    }

//    pts= sedges.size();
//    std::cout<<"checkings "<<"\n";
//    for(int i=0;i<pts;i++){
//        std::vector<float> vt;
//        vt=sedges.at(i);
//        std::cout<<"check "<<vt.at(0)<<" "<<vt.at(1)<<" "<<vt.at(2)<<" "<<vt.at(3);
//    }





    std::vector<std::vector<float> > temp_edges =temp.edge;
//	for (int i =0 ;i<three_edges.size();i++){
//		std::vector<float> reto = three_edges.at(i);
//		temp_edges.push_back(reto);
//	}
    p=fedges.size();
    for (int i =0 ;i<p;i++){
        std::vector<float> reti = fedges.at(i);
        temp_edges.push_back(reti);
    }
    p=sedges.size();
    for (int i =0 ;i<p;i++){
        std::vector<float> ret = sedges.at(i);
        temp_edges.push_back(ret);
    }
    p=tedges.size();
    for (int i =0 ;i<p;i++){
        std::vector<float> ret = tedges.at(i);
        temp_edges.push_back(ret);
    }
    float max = scale_max(temp_edges);

//    int ps;
//    std::cout<<"combine1 works";
//std::cin>>ps;




    //std::vector<std::vector<float> > s_ret1 = scale(max,three_edges);
    std::vector<std::vector<float> > s_ret2 = scale(max,fedges);
    std::vector<std::vector<float> > s_ret3 = scale(max,tedges);
    std::vector<std::vector<float> > s_ret4 = scale(max,sedges);




//    std::cout<<"combine2 works";
//std::cin>>ps;

    //std::vector<std::vector<float> > t_ret1 = translate_seperately(s_ret1);
    std::vector<std::vector<float> > t_ret2 = translate_seperately(s_ret2);
    std::vector<std::vector<float> > t_ret3 = translate_seperately(s_ret3);
    std::vector<std::vector<float> > t_ret4 = translate_seperately(s_ret4);


//    std::cout<<"combine3 works";
//std::cin>>ps;

    //std::vector<std::vector<float> > ret1 = translate(256,256,t_ret1);
    std::vector<std::vector<float> > ret2 = translate(-1,-1,t_ret3);
    std::vector<std::vector<float> > ret3 = translate(-1,0,t_ret2);
    std::vector<std::vector<float> > ret4 = translate(0,-1,t_ret4);



//    std::cout<<"combine4 works";
//std::cin>>ps;
    // comb_edges(ret1);  // three
    // comb_edges(ret2);
    // comb_edges(ret3);
    // comb_edges(ret4);
//	for (int i =0 ;i<ret1.size();i++){
//		std::vector<float> reto = ret1.at(i);
//		comb_edges.push_back(reto);
//	}
    //int p;
    p=ret2.size();
    for (int i =0 ;i<p;i++){
        std::vector<float> reti = ret2.at(i);
        comb_edges.push_back(reti);
    }
    p=ret3.size();
    for (int i =0 ;i<p;i++){
        std::vector<float> ret = ret3.at(i);
        comb_edges.push_back(ret);
    }
    p=ret4.size();
    for (int i =0 ;i<p;i++){
        std::vector<float> ret = ret4.at(i);
        comb_edges.push_back(ret);
    }
    //comb_edges = scale(comb_edges);
//    std::vector<float> vtemp;
//    vtemp.push_back(0);
//    vtemp.push_back(250);
//    vtemp.push_back(230);
//    vtemp.push_back(250);
//    comb_edges.push_back(vtemp);
//    vtemp.clear();
//    vtemp.push_back(250);
//    vtemp.push_back(0);
//    vtemp.push_back(250);
//    vtemp.push_back(230);
//    comb_edges.push_back(vtemp);
//    std::cout<<"combine5 works";
//std::cin>>ps;
    comb.edge = comb_edges;

    return comb;
}
