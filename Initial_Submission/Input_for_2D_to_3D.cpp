# include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string.h>
#include <vector>
#include "functions.h"
#include "global.h"

using namespace std;


//vector<vector<int> > thplane.edge ;
void render();
void reshape(int x, int y);

void keyboard(unsigned char c , int x ,int y  void mouse(int button,int state,int x,int y);

//threedplane thplane;
fts temp_twod;
Combine comb;

int main(int argc , char** argv){
   	int n ;
	cout << "Choose_one_of_these_two: \n";
	///cout << "1. 3_d_to_2_d\n ";
	cout << "2. 2-d to 3-d\n ";
	cin  >> code;
	
	if (code==2){
		
		cout<<"PLease Enter_the_pair_of_vertices_defining_edge: \n";
		cin>>n;
		int i=0;

		std::vector<std::vector<int> > veco ;
			
		while(n!=-1){
             std::vector<int> edge_vertices ;
			edge_vertices.push_back(n);
			cin>>n;
			edge_vertices.push_back(n);
			cin>>n;
			edge_vertices.push_back(n);
			cin>>n;
			edge_vertices.push_back(n);
			cin>>n;
			edge_vertices.push_back(n);
			cin>>n;
			edge_vertices.push_back(n);
			veco.push_back(edge_vertices);
			i=i+1;
			 cin>>n;
		}