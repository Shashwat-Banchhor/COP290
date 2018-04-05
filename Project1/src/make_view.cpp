#include <iostream>
#include <stdio.h>
#include "function.h"
#include "global.h"
#include<string.h>
#include<vector>
using namespace std;
// VIEW front;
// VIEW top ;
// VIEW side;
fts  MAKE_VIEW(threed_object threed){
    // threed_object threed;
   // cout << "INSIDE_make";
   // fts twoedge;
    //int code=0;
//    int no_of_vertex=0;
//    int no_of_edge=0;
    fts twoedge;

    // std::vector<std::std::vector<float>  > vertex;
    // std::vector<std::std::vector<float>  > edge;

//    int no_of_vertex_front=0;
//    int no_of_vertex_top=0;
//    int no_of_vertex_side=0;

//    int no_of_edge_front=0;
//    int no_of_edge_side=0;
//    int no_of_edge_top=0;

 //    cout << "Input_Print";
 //    std::vector<std::vector<float>  > ber = threed.edge;
    // for(int b=0;b<ber.size();b++){
    // 	std::vector<float> bi = ber.at(b);
    // 	for (int a=0 ; a<bi.size();a++){
    // 		cout << bi.at(a);
    // 	}
    // }

 //    cout << "Printed_right";

    // std:: std::vector<std::std::vector<float>  > front_vertex;
    // std::std::vector<std::std::vector<float>  > top_vertex;
    // std::std::vector<std::std::vector<float>  > side_vertex;

    // std:: std::vector<std::std::vector<float>  > front_edge;
    // std:: std::vector<std::std::vector<float>  > top_edge;
    // std:: std::vector<std::std::vector<float>  > side_edge;

    // std:: std::vector<std::std::vector<float>  > tfront_vertex;
    // std:: std::vector<std::std::vector<float>  > ttop_vertex;
    // std:: std::vector<std::std::vector<float>  > tside_vertex;

    // std:: std::vector<std::std::vector<float>  > tfront_edge;
    // std:: std::vector<std::std::vector<float>  > ttop_edge;
    // std:: std::vector<std::std::vector<float>  > tside_edge;
//if(temp==0){
        // side.vertex.clear();
        // for(int i=0;i<threed.vertex.size();i++){
        // 	side.vertex[i].push_back(threed.vertex[i][2]);
        // 	side.vertex[i].push_back(threed.vertex[i][1]);
        // }
    int p = threed.edge.size();
        for(int i=0;i<p;i++){
            std::vector<float>  side_edges ;
            std::vector<float>  s_edge_of_3d = (threed.edge).at(i);
            side_edges.push_back(s_edge_of_3d.at(2));
            side_edges.push_back(s_edge_of_3d.at(1));
            side_edges.push_back(s_edge_of_3d.at(5));
            side_edges.push_back(s_edge_of_3d.at(4));
            twoedge.sedge.push_back(side_edges);
        }
        // top.vertex.clear();
        // for(int i=0;i<threed.vertex.size();i++){
        // 	top.vertex[i].push_back(threed.vertex[i][0]);
        // 	top.vertex[i].push_back(threed.vertex[i][2]);
        // }
        for(int i=0;i<p;i++){
            std::vector<float>  top_edges ;
            std::vector<float>  t_edge_of_3d = (threed.edge).at(i);
            top_edges.push_back(t_edge_of_3d.at(0));
            top_edges.push_back(t_edge_of_3d.at(2));
            top_edges.push_back(t_edge_of_3d.at(3));
            top_edges.push_back(t_edge_of_3d.at(5));
            twoedge.tedge.push_back(top_edges);
        }
        // front.vertex.clear();
        // for(int i=0;i<threed.vertex.size();i++){
        // 	front.vertex[i].push_back(threed.vertex[i][0]);
        // 	front.vertex[i].push_back(threed.vertex[i][1]);
        // }
        for(int i=0;i<p;i++){
            std::vector<float>  front_edges ;
            std::vector<float>  f_edge_of_3d = (threed.edge).at(i);
            front_edges.push_back(f_edge_of_3d.at(0));
            front_edges.push_back(f_edge_of_3d.at(1));
            front_edges.push_back(f_edge_of_3d.at(3));
            front_edges.push_back(f_edge_of_3d.at(4));
            //cout << f_edge_of_3d.at(4);
            twoedge.fedge.push_back(front_edges);
        }
        //cout << "DEPARTING_make";
        return twoedge;
//}
// else{
// 		tside_vertex.clear();
// 		for(int i=0;i<vertex.size();i++){
// 			tside_vertex[i].push_back(vertex[i][2]);
// 			tside_vertex[i].push_back(vertex[i][1]);
// 		}
// 		for(int i=0;i<edge.size();i++){
// 			tside_edge[i].push_back(edge[i][2]);
// 			tside_edge[i].push_back(edge[i][1]);
// 			tside_edge[i].push_back(edge[i][5]);
// 			tside_edge[i].push_back(edge[i][4]);
// 		}
// 		ttop_vertex.clear();
// 		for(int i=0;i<vertex.size();i++){
// 			ttop_vertex[i].push_back(vertex[i][0]);
// 			ttop_vertex[i].push_back(vertex[i][2]);
// 		}
// 		for(int i=0;i<edge.size();i++){
// 			ttop_edge[i].push_back(edge[i][0]);
// 			ttop_edge[i].push_back(edge[i][2]);
// 			ttop_edge[i].push_back(edge[i][3]);
// 			ttop_edge[i].push_back(edge[i][5]);
// 		}
// 		tfront_vertex.clear();
// 		for(int i=0;i<vertex.size();i++){
// 			tfront_vertex[i].push_back(vertex[i][0]);
// 			tfront_vertex[i].push_back(vertex[i][1]);
// 		}
// 		for(int i=0;i<edge.size();i++){
// 			tfront_edge[i].push_back(vertex[i][0]);
// 			tfront_edge[i].push_back(vertex[i][1]);
// 			tfront_edge[i].push_back(vertex[i][3]);
// 			tfront_edge[i].push_back(vertex[i][4]);
// 		}
// }


}
