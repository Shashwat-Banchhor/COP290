#include <iostream>
#include "functions.h"
#include<string.h>  
#include <vector>
using namespace std;

int main(){

//these are global variable
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

	vector<vector<int> > front_vertex;
	vector<vector<int> > top_vertex;
	vector<vector<int> > side_vertex;

	vector<vector<int> > front_edge;
	vector<vector<int> > top_edge;
	vector<vector<int> > side_edge;

	vector<vector<int> > tfront_vertex;
	vector<vector<int> > ttop_vertex;
	vector<vector<int> > tside_vertex;

	vector<vector<int> > tfront_edge;
	vector<vector<int> > ttop_edge;
	vector<vector<int> > tside_edge;

	char n[50];
	cout<< "Choose_one_of_these_two: ";
	cout<< "1_3_d_to_2_d ";
	cout<< "2 2-d to 3-d ";
	cin >>code;
	if (code==1){
		cout<< "Enter_vertices";
		cin>> n;
		int i=0;
		while(n!=-1){
			vertex.push_back(n);
			i=i+1;
			cin>>n;
		}
		no_of_vertex = i;
		cout<<"Enter_the_pair_of_vertex_defining_edge: ";
		i=0; 		cin>>n;
		while(n!="-1"){
			edge.push_back(n);
			cin>>n;
			i=i+1;
		}
		no_of_edge=i;

		MAKE_VIEW(3,0);
		MAKE_VIEW(2,0);
		MAKE_VIEW(1,0);
	} 
	else{
		cout<< "Enter_vertex_in_front_view: ";
		cin>>n;
		int  i=0;
		while(n!=“-1”){
			front_vertex.push_back(n);
			cin>>n;
			i=i+1;
		}
		no_of_vertex_front=i;		
		cout<< "Enter_edge_in_front_view: ";
		cin>>n;
		 i=0;
		while(n!="-1"){
			front_edge.push_back(n);
			cin>>n;
			i=i+1;
		}
		no_of_edge_front=i;


		cout<< "Enter_vertex_in_top_view: ";
		cin>>n;
		 i=0;
		while(n!="-1"){
			top_vertex.push_back(n);
			cin>>n;
			i=i+1;
		}
		no_of_vertex_top=i;	
		cout<< "Enter_edge_in_top_view: ";
		cin>>n;
		int i=0;
		while(n!="-1"){
			top_edge.push_back(n);
			cin>>n;
			i=i+1;
		}
		no_of_edge_top=i;


		cout<< "Enter_vertex_in_side_view: ";
		cin>>n;
		int i=0;
		while(n!="-1"){
			side_vertex.push_back(n);
			cin>>n;
			i=i+1;
		}
		no_of_vertex_side=i;		
		cout<< "Enter_edge_in_side_view: ";
		cin>>n;
		int i=0;
		while(n!="-1"){
			side_edge.push_back(n);
			cin>>n;
			i=i+1;
		}
		no_of_edge_side=i;


		MAKE_COMPLETE_GRAPH();
		MAKE_VIEW();
		bool b= ARE_ALL_3_VIEWS_SAME();
		if(b==true){
			MAKE_VIEW_GRAPH(1);
		}
		DISPLAY();
	}



	return 0;
}
