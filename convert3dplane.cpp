#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>
using namespace std;

void convert3dplane(){
	thplane.vertex.clear();
	for(int i=0;i<threed.vertex.size();i++){
		int x=threed.vertex[i][0];
		int y=threed.vertex[i][1];
		int z=threed.vertex[i][2];
		int xnew=z*(cos(30))-x*(cos(30));
		int ynew=z*(sin(30))+x*(sin(30))+y;
		thplane.vertex[i].push_back(xnew);
		thplane.vertex[i].push_back(ynew);
	}
	for(int i=0;i<threed.edge.size();i++){
		int x=threed.edge[i][0];
		int y=threed.edge[i][1];
		int z=threed.edge[i][2];
		int xx=threed.edge[i][3];
		int yy=threed.edge[i][4];
		int zz=threed.edge[i][5];
		int xnew=z*(cos(30))-x*(cos(30));
		int ynew=z*(sin(30))+x*(sin(30))+y;
		int xxnew=zz*(cos(30))-xx*(cos(30));
		int yynew=zz*(sin(30))+xx*(sin(30))+yy;
		thplane.edge[i].push_back(xnew);
		thplane.edge[i].push_back(ynew);

		thplane.edge[i].push_back(xxnew);
		thplane.edge[i].push_back(yynew);
	}
}