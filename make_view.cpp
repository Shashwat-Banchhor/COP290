#include <iostream.io>
#include <stdio.h>
#include "functions.h"
#include<string.h>
#include<vector>
using namespace std;

vector<vector< vector<int> > >  MAKE_VIEW(int k,int temp){
    
    int code=0;
    int no_of_vertex=0;
    int no_of_edge=0;
    
    vector<vector<int> > vertex;
    vector<vector<int> > edge;
    
    int no_of_vertex_front=0;
    int no_of_vertex_top=0;
    int no_of_vertex_side=0;
    
    int no_of_edge_front=0;
    int no_of_edge_side=0;
    int no_of_edge_top=0;
    
    std:: vector<vector<int> > front_vertex;
    std::vector<vector<int> > top_vertex;
    std::vector<vector<int> > side_vertex;
    
    std:: vector<vector<int> > front_edge;
    std:: vector<vector<int> > top_edge;
    std:: vector<vector<int> > side_edge;
    
    std:: vector<vector<int> > tfront_vertex;
    std:: vector<vector<int> > ttop_vertex;
    std:: vector<vector<int> > tside_vertex;
    
    std:: vector<vector<int> > tfront_edge;
    std:: vector<vector<int> > ttop_edge;
    std:: vector<vector<int> > tside_edge;
if(temp==0){
	if(k==1){
		side_vertex.clear();
		for(int i=0;i<vertex.size();i++){
			side_vertex[i].push_back(vertex[i][2]);
			side_vertex[i].push_back(vertex[i][1]);
		}
		for(int i=0;i<edge.size();i++){
			side_edge[i].push_back(vertex[i][2]);
			side_edge[i].push_back(vertex[i][1]);
			side_edge[i].push_back(vertex[i][5]);
			side_edge[i].push_back(vertex[i][4]);
		}
	}
	else if(k==2){
		top_vertex.clear();
		for(int i=0;i<vertex.size();i++){
			top_vertex[i].push_back(vertex[i][0]);
			top_vertex[i].push_back(vertex[i][2]);
		}
		for(int i=0;i<edge.size();i++){
			top_edge[i].push_back(vertex[i][0]);
			top_edge[i].push_back(vertex[i][2]);
			top_edge[i].push_back(vertex[i][3]);
			top_edge[i].push_back(vertex[i][5]);
		}
	}
	else{
		front_vertex.clear();
		for(int i=0;i<vertex.size();i++){
			front_vertex[i].push_back(vertex[i][0]);
			front_vertex[i].push_back(vertex[i][1]);
		}
		for(int i=0;i<edge.size();i++){
			front_edge[i].push_back(vertex[i][0]);
			front_edge[i].push_back(vertex[i][1]);
			front_edge[i].push_back(vertex[i][3]);
			front_edge[i].push_back(vertex[i][4]);
		}
	}
}
else{
	if(k==1){
		tside_vertex.clear();
		for(int i=0;i<vertex.size();i++){
			tside_vertex[i].push_back(vertex[i][2]);
			tside_vertex[i].push_back(vertex[i][1]);
		}
		for(int i=0;i<edge.size();i++){
			tside_edge[i].push_back(vertex[i][2]);
			tside_edge[i].push_back(vertex[i][1]);
			tside_edge[i].push_back(vertex[i][5]);
			tside_edge[i].push_back(vertex[i][4]);
		}
	}
	else if(k==2){
		ttop_vertex.clear();
		for(int i=0;i<vertex.size();i++){
			ttop_vertex[i].push_back(vertex[i][0]);
			ttop_vertex[i].push_back(vertex[i][2]);
		}
		for(int i=0;i<edge.size();i++){
			ttop_edge[i].push_back(vertex[i][0]);
			ttop_edge[i].push_back(vertex[i][2]);
			ttop_edge[i].push_back(vertex[i][3]);
			ttop_edge[i].push_back(vertex[i][5]);
		}
	}
	else{
		tfront_vertex.clear();
		for(int i=0;i<vertex.size();i++){
			tfront_vertex[i].push_back(vertex[i][0]);
			tfront_vertex[i].push_back(vertex[i][1]);
		}
		for(int i=0;i<edge.size();i++){
			tfront_edge[i].push_back(vertex[i][0]);
			tfront_edge[i].push_back(vertex[i][1]);
			tfront_edge[i].push_back(vertex[i][3]);
			tfront_edge[i].push_back(vertex[i][4]);
		}
	}
}
	

}
