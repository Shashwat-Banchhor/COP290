#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>
std::vector<std::vector<int> > removing_edge(temp_threed_object temp_threed,fts twod){
	threed_object corrected_threed;
	std::vector<std::vector<int> >  corrected_edges;
	std::vector<std::vector<int> > temp_threed_edge ;

	temp_threed_edge =temp_threed.edge;  // all possible edges of  3D;
	
	std::vector<std::vector<int> > f_edge=twod.fedge;
	std::vector<std::vector<int> > t_edge=twod.tedge;
	std::vector<std::vector<int> > s_edge=twod.sedge;

	int x1,y1,x2,y2;


	// for (int g=0 ;g< s_edge.size();g++){
	// 			std::vector<int> vec= s_edge.at(g);
	// 			for (int b=0;b<vec.size();b++){
	// 				std::cout << vec.at(b);
	// 			}
	// 			std::cout << "\n";

	// 		}
			
	// 	std::cout<< "end of check_f\n";
	

	for(int i=0;i<temp_threed_edge.size();i++){
		std::vector<std::vector<int> > temp;
		
		// std::vector<std::vector<int> > tempo;
		// tempo = temp_threed.edge;
		

		std::vector<int> temp_edge;
		temp_edge=temp_threed_edge.at(i);
		temp.push_back(temp_edge);
		

		fts new_twod ;
		threed_object new_threed;


		new_threed.edge = temp;
		new_twod=MAKE_VIEW(new_threed);




		//check in topview
		std::vector<std::vector<int> > check_t; 
		check_t= new_twod.tedge;

		

		std::vector<int> check_t_v;
		check_t_v=check_t.at(0);
		int flagt=0;
		for(int j=0;j<t_edge.size();j++){
			std::vector<int> ttemp;
			ttemp=t_edge.at(j);
			if(((ttemp.at(0)==check_t_v.at(0))&&(ttemp.at(1)==check_t_v.at(1))&&(ttemp.at(2)==check_t_v.at(2))&&(ttemp.at(3)==check_t_v.at(3)))||((ttemp.at(0)==check_t_v.at(2))&&(ttemp.at(1)==check_t_v.at(3))&&(ttemp.at(2)==check_t_v.at(0))&&(ttemp.at(3)==check_t_v.at(1)))){
				flagt=1;
				break;
			}
					x1=check_t_v.at(0);
		y1=check_t_v.at(1);
		x2=check_t_v.at(2);
		y2=check_t_v.at(3);
			if(check_t_v.at(0)==check_t_v.at(2)&&check_t_v.at(1)==check_t_v.at(3)){
				flagt=1;
				break;
			}
		}


		// std::cout<<"check_t _ in ";
		//  for (int g=0 ;g< check_t.size();g++){
		// 		std::vector<int> vec= check_t.at(g);
		// 		for (int b=0;b<vec.size();b++){
		// 			std::cout << vec.at(b);
		// 		}
		// 		std::cout << "\n";

		// 	}
		// 	int n;
		// std::cout<< "end of check_t\n"<< flagt;

		// 	std::cin>>n;



		//check in frontview
		std::vector<std::vector<int> > check_f;
		 check_f= new_twod.fedge;
		std::vector<int> check_f_v ; 
		check_f_v =check_f.at(0);
		int flagf=0;
		for(int j=0;j<f_edge.size();j++){
			std::vector<int> ftemp;
			ftemp=f_edge.at(j);
			if(((ftemp.at(0)==check_f_v.at(0))&&(ftemp.at(1)==check_f_v.at(1))&&(ftemp.at(2)==check_f_v.at(2))&&(ftemp.at(3)==check_f_v.at(3)))||((ftemp.at(0)==check_f_v.at(2))&&(ftemp.at(1)==check_f_v.at(3))&&(ftemp.at(2)==check_f_v.at(0))&&(ftemp.at(3)==check_f_v.at(1)))){
				flagf=1;
				break;
			}
					x1=check_f_v.at(0);
		y1=check_f_v.at(1);
		x2=check_f_v.at(2);
		y2=check_f_v.at(3);
			if(check_f_v.at(0)==check_f_v.at(2)&&check_f_v.at(1)==check_f_v.at(3)){
				flagf=1;
				break;
			}
		}


		// std::cout<<"check_f _ in ";
		//  for (int g=0 ;g< check_f.size();g++){
		// 		std::vector<int> vec= check_f.at(g);
		// 		for (int b=0;b<vec.size();b++){
		// 			std::cout << vec.at(b);
		// 		}
		// 		std::cout << "\n";

		// 	}
			
		// std::cout<< "end of check_f\n"<< flagf;

		// 	std::cin>>n;

		//check in sideview
		std::vector<std::vector<int> > check_s ;
		check_s = new_twod.sedge;
		std::vector<int> check_s_v;
		check_s_v=check_s.at(0);
		int flags=0;
		for(int j=0;j<s_edge.size();j++){
			std::vector<int> stemp;
			stemp=s_edge.at(j);
			if(((stemp.at(0)==check_s_v.at(0))&&(stemp.at(1)==check_s_v.at(1))&&(stemp.at(2)==check_s_v.at(2))&&(stemp.at(3)==check_s_v.at(3)))||((stemp.at(0)==check_s_v.at(2))&&(stemp.at(1)==check_s_v.at(3))&&(stemp.at(2)==check_s_v.at(0))&&(stemp.at(3)==check_s_v.at(1)))){
				flags=1;
				break;
			}
			
		}
		x1=check_s_v.at(0);
		y1=check_s_v.at(1);
		x2=check_s_v.at(2);
		y2=check_s_v.at(3);
		if(x1==x2&& y1==y2){
				flags=1;
			}
		// std::cout<<"check_s _ in ";
		//  for (int g=0 ;g< check_s.size();g++){
		// 		std::vector<int> vec= check_s.at(g);
		// 		for (int b=0;b<vec.size();b++){
		// 			std::cout << vec.at(b);
		// 		}
		// 		std::cout << "\n";

		// 	}
			
		// std::cout<< "end of check_s\n"<< flags;

		// 	std::cin>>n;





		if((flags==1)&&(flagt==1)&&(flagf==1) ){
			corrected_edges.push_back(temp_edge);
		}

	}
		//   std::cout<<"f and t";
		//  for (int g=0 ;g< corrected_edges.size();g++){
		// 		std::vector<int> vec= corrected_edges.at(g);
		// 		for (int b=0;b<vec.size();b++){
		// 			std::cout << vec.at(b);
		// 		}
		// 		std::cout << "\n";

		// 	}
		// 	int n;
		// std::cout<< "end of f and t";
		// 	std::cin>>n;



	//corrected_threed.edge = corrected_edges;
	return corrected_edges;






}
