#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;
threedplane three_d_plane;
threedplane convert3dplane(threed_object threed){
	/*three_d_plane.vertex.clear();
	vector<vector <int> > vertices = threed.vertex;
	for(int i=0;i<threed.vertex.size();i++){
		int x=threed.vertex[i][0];
		int y=threed.vertex[i][1];
		int z=threed.vertex[i][2];
		int xnew=z*(cos(30))-x*(cos(30));
		int ynew=z*(sin(30))+x*(sin(30))+y;
		three_d_plane.vertex[i].push_back(xnew);
		three_d_plane.vertex[i].push_back(ynew);
	}*/

	//vector<vector <int> > edges_vec = threed.edge;
	std::vector<std::vector<int> > vivo = threed.edge;
	for(int i=0;i<vivo.size();i++){
		std::vector<int> edges = vivo.at(i);
		int x=edges.at(0);
		int y=edges.at(1);
		int z=edges.at(2);
		int xx=edges.at(3);
		int yy=edges.at(4);
		int zz=edges.at(5);
		int xnew=z*(cos(M_PI/6))-x*(cos(M_PI/6));
		int ynew=z*(sin(M_PI/6))+x*(sin(M_PI/6))+y;
		int xxnew=zz*(cos(M_PI/6))-xx*(cos(M_PI/6));
		int yynew=zz*(sin(M_PI/6))+xx*(sin(M_PI/6))+yy;
		std::vector<int> vec ;
		vec.push_back(xnew);
		vec.push_back(ynew);

		vec.push_back(xxnew);
		vec.push_back(yynew);
		(three_d_plane.edge).push_back(vec);
	}
	return three_d_plane;
}
