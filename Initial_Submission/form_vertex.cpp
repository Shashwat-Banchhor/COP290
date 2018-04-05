#include <iostream>
#include <stdio.h>
#include "functions.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>

temp_threed_object form_vertex(fts twod){

	 std::vector<std::vector<int> > fedges = twod.fedge;
	 std::vector<std::vector<int> > tedges = twod.tedge;
	 std::vector<std::vector<int> > sedges = twod.sedge;

	 std::vector<std::vector<int> >  threed_vertices_ft;
	 std::vector<std::vector<int> >  threed_vertices_ts;
	 std::vector<std::vector<int> >  threed_vertices_sf;

	 std::vector<std::vector<int> >  threed_vertices;
		 
	 	/// front and top;;

		 for (int i = 0; i <fedges.size() ; i++)
		 {
		 	std::vector<int> vec = fedges.at(i);
		 		int x1 = vec.at(0);
		 		int y1 = vec.at(1);
		 		int x2 = vec.at(2);
		 		int y2 = vec.at(3);
		 		for (int j = 0; j < tedges.size(); j++)
		 		{
		 			std::vector<int> vec = tedges.at(j);
				 		int xx1 = vec.at(0);
				 		int zx1 = vec.at(1);
				 		int xx2 = vec.at(2);
				 		int zx2 = vec.at(3);
				 		if (x1==xx1){
				 			std::vector<int> vek;
				 			vek.push_back(x1);
				 			vek.push_back(y1);
				 			vek.push_back(zx1);
				 			threed_vertices_ft.push_back(vek);
				 		}
				 		if (x1==xx2){
				 			std::vector<int> vek;
				 			vek.push_back(x1);
				 			vek.push_back(y1);
				 			vek.push_back(zx2);
				 			threed_vertices_ft.push_back(vek);
				 		}
				 		if (x2==xx2){
				 			std::vector<int> vek;
				 			vek.push_back(x2);
				 			vek.push_back(y2);
				 			vek.push_back(zx2);
				 			threed_vertices_ft.push_back(vek);
				 		}
				 		if (x2==xx1){
				 			std::vector<int> vek;
				 			vek.push_back(x2);
				 			vek.push_back(y2);
				 			vek.push_back(zx1);
				 			threed_vertices_ft.push_back(vek);
				 		}	

		 		}
		 }

//// SIDE TOP FINDIND VERTEX
		 for (int i = 0; i <sedges.size() ; i++)
		 {
		 	std::vector<int> vec = sedges.at(i);
		 		int z1 = vec.at(0);
		 		int y1 = vec.at(1);
		 		int z2 = vec.at(2);
		 		int y2 = vec.at(3);
		 		for (int j = 0; j < tedges.size(); j++)
		 		{
		 			std::vector<int> vec = tedges.at(j);
				 		int xz1 = vec.at(0);
				 		int zz1 = vec.at(1);
				 		int xz2 = vec.at(2);
				 		int zz2 = vec.at(3);
				 		if (z1==zz1){
				 			std::vector<int> vek;
				 			vek.push_back(xz1);
				 			vek.push_back(y1);
				 			vek.push_back(z1);
				 			threed_vertices_ts.push_back(vek);
				 		}
				 		if (z1==zz2){
				 			std::vector<int> vek;
				 			vek.push_back(xz2);
				 			vek.push_back(y1);
				 			vek.push_back(z1);
				 			threed_vertices_ts.push_back(vek);
				 		}
				 		if (z2==zz2){
				 			std::vector<int> vek;
				 			vek.push_back(xz2);
				 			vek.push_back(y2);
				 			vek.push_back(z2);
				 			threed_vertices_ts.push_back(vek);
				 		}
				 		if (z2==zz1){
				 			std::vector<int> vek;
				 			vek.push_back(xz1);
				 			vek.push_back(y2);
				 			vek.push_back(z2);
				 			threed_vertices_ts.push_back(vek);
				 		}	

		 		}
		 }

		// ----

		 // for (int g=0 ;g< threed_vertices_ts.size();g++){
			// 	std::vector<int> vec= threed_vertices_ts.at(g);
			// 	for (int b=0;b<vec.size();b++){
			// 		std::cout << vec.at(b)<<"/";
			// 	}
			// 	std::cout << "\n";

			// }
			// std::cout << "((((((((\n";
		 //
		 for (int i = 0; i <fedges.size() ; i++)
		 {
		 	std::vector<int> vec = fedges.at(i);
		 		int x1 = vec.at(0);
		 		int y1 = vec.at(1);
		 		int x2 = vec.at(2);
		 		int y2 = vec.at(3);
		 		for (int j = 0; j < sedges.size(); j++)
		 		{
		 			std::vector<int> vec = sedges.at(j);
				 		int zx1 = vec.at(0);
				 		int yx1 = vec.at(1);
				 		int zx2 = vec.at(2);
				 		int yx2 = vec.at(3);
				 		if (y1==yx1){
				 			std::vector<int> vek;
				 			vek.push_back(x1);
				 			vek.push_back(y1);
				 			vek.push_back(zx1);
				 			threed_vertices_sf.push_back(vek);
				 		}
				 		if (y1==yx2){
				 			std::vector<int> vek;
				 			vek.push_back(x1);
				 			vek.push_back(y1);
				 			vek.push_back(zx2);
				 			threed_vertices_sf.push_back(vek);
				 		}
				 		if (y2==yx2){
				 			std::vector<int> vek;
				 			vek.push_back(x2);
				 			vek.push_back(y2);
				 			vek.push_back(zx2);
				 			threed_vertices_sf.push_back(vek);
				 		}
				 		if (y2==yx1){
				 			std::vector<int> vek;
				 			vek.push_back(x2);
				 			vek.push_back(y2);
				 			vek.push_back(zx1);
				 			threed_vertices_sf.push_back(vek);
				 		}	

		 		}
		 }







		 int con;
		 std::vector<std::vector<int> > vecto_ft ;
		 std::vector<std::vector<int> > vecto_ts ;  
		 std::vector<std::vector<int> > vecto_sf ; 
		  //std::vector<std::vector<int> > temp ;

		  std::vector<int> temp2;
		  temp2 = threed_vertices_ft.at(0);
		  //temp2=temp.at(0);
		  vecto_ft.push_back(temp2);
		 for (int i = 1; i < threed_vertices_ft.size(); i++)
		  {
			  	con = 0;
			  	std::vector<int> v = threed_vertices_ft.at(i);
			  	for (int j = 0; j < vecto_ft.size(); j++)
			  	{
			  		std::vector<int> vect = vecto_ft.at(j);
			  		if ((v.at(0)==vect.at(0)) && (v.at(1)==vect.at(1))&&(v.at(2)==vect.at(2))){
			  			con = 1;
			  		}
			  	}
			  	if (con==0){
			  		vecto_ft.push_back(v);
			  	}
		  }

		  temp2.clear();


		  temp2=threed_vertices_ts.at(0);
		  //temp2=temp.at(0);
		  vecto_ts.push_back(temp2);
		 for (int i = 1; i < threed_vertices_ts.size(); i++)
		  {
			  	con = 0;
			  	std::vector<int> v = threed_vertices_ts.at(i);
			  	for (int j = 0; j < vecto_ts.size(); j++)
			  	{
			  		std::vector<int> vect = vecto_ts.at(j);
			  		if ((v.at(0)==vect.at(0)) && (v.at(1)==vect.at(1))&&(v.at(2)==vect.at(2))){
			  			con = 1;
			  		}
			  	}
			  	if (con==0){
			  		vecto_ts.push_back(v);
			  	}
		  }

		  temp2.clear();


//------------------

		  temp2=threed_vertices_sf.at(0);
		  //temp2=temp.at(0);
		  vecto_sf.push_back(temp2);
		 for (int i = 1; i < threed_vertices_sf.size(); i++)
		  {
			  	con = 0;
			  	std::vector<int> v = threed_vertices_sf.at(i);
			  	for (int j = 0; j < vecto_sf.size(); j++)
			  	{
			  		std::vector<int> vect = vecto_sf.at(j);
			  		if ((v.at(0)==vect.at(0)) && (v.at(1)==vect.at(1))&&(v.at(2)==vect.at(2))){
			  			con = 1;
			  		}
			  	}
			  	if (con==0){
			  		vecto_sf.push_back(v);
			  	}
		  }

		  temp2.clear();

/// Checking for same vertex in F T S 

		
			// for (int g=0 ;g< vecto_ft.size();g++){
			// 	std::vector<int> vec= vecto_ft.at(g);
			// 	for (int b=0;b<vec.size();b++){
			// 		std::cout << vec.at(b)<<"/";
			// 	}
			// 	std::cout << "\n";

			// }
			// std::cin >> con;

			// std::cout << "(((((((((((((((((((";
			// for (int g=0 ;g< vecto_sf.size();g++){
			// 	std::vector<int> vec= vecto_sf.at(g);
			// 	for (int b=0;b<vec.size();b++){
			// 		std::cout << vec.at(b)<<"/";
			// 	}
			// 	std::cout << "\n";

			// }
			// std::cin >> con;



			// std::cout << "(((((((((((((((((((";
			// for (int g=0 ;g< vecto_ts.size();g++){
			// 	std::vector<int> vec= vecto_ts.at(g);
			// 	for (int b=0;b<vec.size();b++){
			// 		std::cout << vec.at(b)<<"/";
			// 	}
			// 	std::cout << "\n";

			// }
			// std::cin >> con;



		  std::vector<std::vector<int> > vecto; /// COMMON VERTICES;
		  int flag1=0;
		  int flag2= 0;
		for (int i = 0; i < vecto_ft.size(); i++)
		  {
		  		flag1=0;
		  		flag2=0;
		  		std::vector<int> v = vecto_ft.at(i);
		  		for(int j=0;j<vecto_sf.size();j++){
		  			std::vector<int> vect = vecto_sf.at(j);
		  			if ((v.at(0)==vect.at(0)) && (v.at(1)==vect.at(1))&&(v.at(2)==vect.at(2))){
		  				flag1 = 1;
		  				break;
		  			}

		  		}

		  		for(int j=0;j<vecto_ts.size();j++){
		  			std::vector<int> vect = vecto_ts.at(j);
		  			if ((v.at(0)==vect.at(0)) && (v.at(1)==vect.at(1))&&(v.at(2)==vect.at(2))){
		  				flag2 = 1;
		  				break;
		  			}

		  		}

		  		if (flag1==1 && flag2==1){
		  			vecto.push_back(v);
		  		}


		  }  



		//   std::cout<<"f and t";
		//  for (int g=0 ;g< vecto.size();g++){
		// 		std::vector<int> vec= vecto.at(g);
		// 		for (int b=0;b<vec.size();b++){
		// 			std::cout << vec.at(b);
		// 		}
		// 		std::cout << "\n";

		// 	}
		// 	int n;
		// // std::cout<< "end of f and t";
		// // 	std::cin>>n;


/// MAKE THE EDGES FOR PROPOSED 3D;
		  std::vector<std::vector<int> > edge_form ; 
		  for(int i=0;i<vecto.size();i++){
		  	std::vector<int> temp1=vecto.at(i);
		  	for(int j=i+1;j<vecto.size();j++){
		  		std::vector<int> temp2=vecto.at(j);
		  		std::vector<int> temp3;
		  		temp3.push_back(temp1.at(0));
		  		temp3.push_back(temp1.at(1));
		  		temp3.push_back(temp1.at(2));
		  		temp3.push_back(temp2.at(0));
		  		temp3.push_back(temp2.at(1));
		  		temp3.push_back(temp2.at(2));
		  		edge_form.push_back(temp3);
		  	}
		  }
///---********************************-----------------		  






		 temp_threed_object temp_3D;
		 temp_3D.vertex = vecto;
		 temp_3D.edge = edge_form;
		 return temp_3D;




}