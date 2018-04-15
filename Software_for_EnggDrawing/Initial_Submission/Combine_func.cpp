#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include<string.h>
#include<vector>
using namespace std;


Combine Combine_func(fts two,threedplane three){

	Combine comb;
	Combine temp;

	std::vector<std::vector<int> > comb_edges =comb.edge;
	std::vector<std::vector<int> > three_edges = three.edge;
	std::vector<std::vector<int> > fedges = two.fedge;
	std::vector<std::vector<int> > sedges = two.sedge;
	std::vector<std::vector<int> > tedges = two.tedge;

	std::vector<std::vector<int> > temp_edges =temp.edge;
	for (int i =0 ;i<three_edges.size();i++){
		std::vector<int> reto = three_edges.at(i);
		temp_edges.push_back(reto);
	}
	for (int i =0 ;i<fedges.size();i++){
		std::vector<int> reti = fedges.at(i);
		temp_edges.push_back(reti);
	}
	for (int i =0 ;i<sedges.size();i++){
		std::vector<int> ret = sedges.at(i);
		temp_edges.push_back(ret);
	}
	for (int i =0 ;i<tedges.size();i++){
		std::vector<int> ret = tedges.at(i);
		temp_edges.push_back(ret);
	}
	int max = scale_max(temp_edges);






	std::vector<std::vector<int> > s_ret1 = scale(max,three_edges);
	std::vector<std::vector<int> > s_ret2 = scale(max,fedges);
	std::vector<std::vector<int> > s_ret3 = scale(max,tedges);
	std::vector<std::vector<int> > s_ret4 = scale(max,sedges);

	std::vector<std::vector<int> > t_ret1 = translate_seperately(s_ret1);
	std::vector<std::vector<int> > t_ret2 = translate_seperately(s_ret2);
	std::vector<std::vector<int> > t_ret3 = translate_seperately(s_ret3);
	std::vector<std::vector<int> > t_ret4 = translate_seperately(s_ret4);




	std::vector<std::vector<int> > ret1 = translate(256,256,t_ret1);
	std::vector<std::vector<int> > ret2 = translate(6,256,t_ret3);
	std::vector<std::vector<int> > ret3 = translate(6,6,t_ret2);
	std::vector<std::vector<int> > ret4 = translate(256,6,t_ret4);
	// comb_edges(ret1);  // three
	// comb_edges(ret2);
	// comb_edges(ret3);
	// comb_edges(ret4);
	for (int i =0 ;i<ret1.size();i++){
		std::vector<int> reto = ret1.at(i);
		comb_edges.push_back(reto);
	}
	for (int i =0 ;i<ret2.size();i++){
		std::vector<int> reti = ret2.at(i);
		comb_edges.push_back(reti);
	}
	for (int i =0 ;i<ret3.size();i++){
		std::vector<int> ret = ret3.at(i);
		comb_edges.push_back(ret);
	}
	for (int i =0 ;i<ret4.size();i++){
		std::vector<int> ret = ret4.at(i);
		comb_edges.push_back(ret);
	}
	//comb_edges = scale(comb_edges);
	std::vector<int> vtemp;
	vtemp.push_back(0);
	vtemp.push_back(250);
	vtemp.push_back(230);
	vtemp.push_back(250);
	comb_edges.push_back(vtemp);
	vtemp.clear();
	vtemp.push_back(250);
	vtemp.push_back(0);
	vtemp.push_back(250);
	vtemp.push_back(230);
	comb_edges.push_back(vtemp);	

	comb.edge = comb_edges;

	return comb;
}