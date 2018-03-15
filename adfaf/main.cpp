#include <iostream>
#include "functions.h"
#include <string.h>  
#include <vector>
#include "global.h"
using namespace std;

// class VIEW
// {
//     // Access specifier
//     public:
 
//     // Data Members
//     vector<vector<int> > vertex;
//     vector<vector<int> > edge;

 
//     // Member Functions()
//     void rotate()
//     {
//     }
//     void scale()
//     {
//     }
//     void translate()
//     {
//     }
// };

// class threed_object{
// 	public:
// 	    // Data Members
//     vector<vector<int> > vertex;
//     vector<vector<int> > edge;
//     void rotate()
//     {
//     }
//     void scale()
//     {
//     }
//     void translate()
//     {
//     }
// };


// threed_object threed;
// VIEW front;
// VIEW top ;
// VIEW side;
int main(){
fts twod;
 threedplane thplane;
  threed_object threed;
  // VIEW front;
  // VIEW top;
  // VIEW side;

//these are global variable
	int code=0;
	int no_of_vertex=0;
	int no_of_edge=0;

	// vector<vector<int> > vertex;
	// vector<vector<int> > edge;

	int no_of_vertex_front=0;
	int no_of_vertex_top=0;
	int no_of_vertex_side=0;
	
	int no_of_edge_front=0;
	int no_of_edge_side=0;
	int no_of_edge_top=0;

	// vector<vector<int> > front_vertex;
	// vector<vector<int> > top_vertex;
	// vector<vector<int> > side_vertex;

	// vector<vector<int> > front_edge;
	// vector<vector<int> > top_edge;
	// vector<vector<int> > side_edge;

	vector <vector<int> > tfront_vertex;
	vector<vector<int> > ttop_vertex;
	vector<vector<int> > tside_vertex;

	vector<vector<int> > tfront_edge;
	vector<vector<int> > ttop_edge;
	vector<vector<int> > tside_edge;

	int n;
	cout<< "Choose_one_of_these_two: ";
	cout<< "1. 3_d_to_2_d ";
	cout<< "2. 2-d to 3-d ";
	cin >>code;
	if (code==1){
		cout<< "Enter_vertices";
		cin>> n;
		int i=0;
		while(n!=-1){
			threed.vertex[i].push_back(n);
			cin>>n;
			threed.vertex[i].push_back(n);
			cin>>n;
			threed.vertex[i].push_back(n);

			i=i+1;
			cin>>n;
		}
		no_of_vertex = i;
		cout<<"Enter_the_pair_of_vertex_defining_edge: ";
		cin>>n;
		i=0;
		while(n!=-1){
			threed.edge[i].push_back(n);
			cin>>n;
			threed.edge[i].push_back(n);
			cin>>n;
			threed.edge[i].push_back(n);
			cin>>n;
			threed.edge[i].push_back(n);
			cin>>n;
			threed.edge[i].push_back(n);
			cin>>n;
			threed.edge[i].push_back(n);
			i=i+1;
			cin>>n;
		}
		no_of_edge=i;
		    twod=MAKE_VIEW(threed);
		// MAKE_VIEW(3,0);
		// MAKE_VIEW(2,0);
		// MAKE_VIEW(1,0);
	} 
	else{
		cout<< "Enter_vertex_in_front_view: ";
		cin>> n;
		int i=0;
		while(n!=-1){
			twod.fvertex[i].push_back(n);
			cin>>n;
			twod.fvertex[i].push_back(n);
			i=i+1;
			cin>>n;
		}
		no_of_vertex_front = i;
		cout<<"Enter_the_pair_of_vertex_defining_edge: ";
		cin>>n;
		i=0;
		while(n!=-1){
			twod.fedge[i].push_back(n);
			cin>>n;
			twod.fedge[i].push_back(n);
			cin>>n;
			twod.fedge[i].push_back(n);
			cin>>n;
			twod.fedge[i].push_back(n);
			i=i+1;
			cin>>n;
		}
		no_of_edge_front=i;


				cout<< "Enter_vertex_in_top_view: ";
		cin>> n;
		i=0;
		while(n!=-1){
			twod.tvertex[i].push_back(n);
			cin>>n;
			twod.tvertex[i].push_back(n);
			i=i+1;
			cin>>n;
		}
		no_of_vertex_top = i;
		cout<<"Enter_the_pair_of_vertex_defining_edge: ";
		cin>>n;
		i=0;
		while(n!=-1){
			twod.tedge[i].push_back(n);
			cin>>n;
			twod.tedge[i].push_back(n);
			cin>>n;
			twod.tedge[i].push_back(n);
			cin>>n;
			twod.tedge[i].push_back(n);
			i=i+1;
			cin>>n;
		}
		no_of_edge_top=i;


				cout<< "Enter_vertex_in_side_view: ";
		cin>> n;
		i=0;
		while(n!=-1){
			twod.svertex[i].push_back(n);
			cin>>n;
			twod.svertex[i].push_back(n);
			i=i+1;
			cin>>n;
		}
		no_of_vertex_side = i;
		cout<<"Enter_the_pair_of_vertex_defining_edge: ";
		cin>>n;
		i=0;
		while(n!=-1){
			twod.sedge[i].push_back(n);
			cin>>n;
			twod.sedge[i].push_back(n);
			cin>>n;
			twod.sedge[i].push_back(n);
			cin>>n;
			twod.sedge[i].push_back(n);
			i=i+1;
			cin>>n;
		}
		no_of_edge_side=i;


		// MAKE_COMPLETE_GRAPH();
		// MAKE_VIEW();
		// bool b= ARE_ALL_3_VIEWS_SAME();
		// if(b==true){
		// 	MAKE_VIEW_GRAPH(1);
		// }
		// DISPLAY();
	}
	// convert3dplane();



	return 0;
}
