#include <iostream>
#include <stdio.h>
#include "functions.h"
//#include "global.h"
#include<string.h>
#include<vector>
using namespace std;
// threed_object threed;
// VIEW front;
// VIEW top ;
// VIEW side;
vector< vector< vector<int> > >  make_view(vector< vector< vector<int> > > v ){
    // Front - 1 ; Top - 2 ; Side -3
    // Edge - 0 Vertex -4
    
    vector<vector<int> > vertex = v[4];
    vector<vector<int> > edge = v[0];
    
    vector<vector<int> > tside_edge ;
    vector<vector<int> >  tfront_edge ;
     vector<vector<int> >  ttop_edge;
    /*int code=0;
    int no_of_vertex=0;
    int no_of_edge=0;
    
    vector<vector<int> > vertex;
    vector<vector<int> > edge;
    
    int no_of_vertex_front=0;
    int no_of_vertex_top=0;
    int no_of_vertex_side=0;
    
    int no_of_edge_front=0;
    int no_of_edge_side=0;
    int no_of_edge_top=0;*/
    
    // std:: vector<vector<int> > front_vertex;
    // std::vector<vector<int> > top_vertex;
    // std::vector<vector<int> > side_vertex;
    
    // std:: vector<vector<int> > front_edge;
    // std:: vector<vector<int> > top_edge;
    // std:: vector<vector<int> > side_edge;
    
    // std:: vector<vector<int> > tfront_vertex;
    // std:: vector<vector<int> > ttop_vertex;
    // std:: vector<vector<int> > tside_vertex;
    
    // std:: vector<vector<int> > tfront_edge;
    // std:: vector<vector<int> > ttop_edge;
    // std:: vector<vector<int> > tside_edge;
//if(temp==0){
		
    
    /*
            was updated from here
     side.vertex.clear();
		for(int i=0;i<threed.vertex.size();i++){
			side.vertex[i].push_back(threed.vertex[i][2]);
			side.vertex[i].push_back(threed.vertex[i][1]);
		}
		for(int i=0;i<threed.edge.size();i++){
			side.edge[i].push_back(threed.edge[i][2]);
			side.edge[i].push_back(threed.edge[i][1]);
			side.edge[i].push_back(threed.edge[i][5]);
			side.edge[i].push_back(threed.edge[i][4]);
		}
		top.vertex.clear();
		for(int i=0;i<threed.vertex.size();i++){
			top.vertex[i].push_back(threed.vertex[i][0]);
			top.vertex[i].push_back(threed.vertex[i][2]);
		}
		for(int i=0;i<threed.edge.size();i++){
			top.edge[i].push_back(threed.edge[i][0]);
			top.edge[i].push_back(threed.edge[i][2]);
			top.edge[i].push_back(threed.edge[i][3]);
			top.edge[i].push_back(threed.edge[i][5]);
		}
		front.vertex.clear();
		for(int i=0;i<threed.vertex.size();i++){
			front.vertex[i].push_back(threed.vertex[i][0]);
			front.vertex[i].push_back(threed.vertex[i][1]);
		}
		for(int i=0;i<threed.edge.size();i++){
			front.edge[i].push_back(threed.edge[i][0]);
			front.edge[i].push_back(threed.edge[i][1]);
			front.edge[i].push_back(threed.edge[i][3]);
			front.edge[i].push_back(threed.edge[i][4]);
		}*/
//}

 		/*tside_vertex.clear();
 		for(int i=0;i<vertex.size();i++){
 			tside_vertex[i].push_back(vertex[i][2]);
 			tside_vertex[i].push_back(vertex[i][1]);
        }*/
		for(int i=0;i<edge.size();i++){
 			tside_edge[i].push_back(edge[i][2]);
 			tside_edge[i].push_back(edge[i][1]);
 			tside_edge[i].push_back(edge[i][5]);
 			tside_edge[i].push_back(edge[i][4]);
 		}
 		/*ttop_vertex.clear();
		for(int i=0;i<vertex.size();i++){
 			ttop_vertex[i].push_back(vertex[i][0]);
 			ttop_vertex[i].push_back(vertex[i][2]);
 		}*/
 		for(int i=0;i<edge.size();i++){
 			ttop_edge[i].push_back(edge[i][0]);
 			ttop_edge[i].push_back(edge[i][2]);
 			ttop_edge[i].push_back(edge[i][3]);
 			ttop_edge[i].push_back(edge[i][5]);
 		}
 		/*tfront_vertex.clear();
 		for(int i=0;i<vertex.size();i++){
 			tfront_vertex[i].push_back(vertex[i][0]);
 			tfront_vertex[i].push_back(vertex[i][1]);
 		}*/
 		for(int i=0;i<edge.size();i++){
 			tfront_edge[i].push_back(edge[i][0]);
 			tfront_edge[i].push_back(edge[i][1]);
 			tfront_edge[i].push_back(edge[i][3]);
 			tfront_edge[i].push_back(edge[i][4]);
 		}
    vector< vector< vector<int> > > to_ret ;
    to_ret.push_back(edge);
    to_ret.push_back(tfront_edge);
    to_ret.push_back(ttop_edge);
    to_ret.push_back(tside_edge);
        return  v
// }
	

}
