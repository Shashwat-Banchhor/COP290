#include <iostream>
#include <stdio.h>
#include "function.h"
#include "global.h"
#include <string.h>
#include <vector>
#include <cmath>

temp_threed_object form_vertex(fts twod){

     std::vector<std::vector<float> > fedges = twod.fedge;
     std::vector<std::vector<float> > tedges = twod.tedge;
     std::vector<std::vector<float> > sedges = twod.sedge;

     std::vector<std::vector<float> >  threed_vertices_ft;
     std::vector<std::vector<float> >  threed_vertices_ts;
     std::vector<std::vector<float> >  threed_vertices_sf;

     std::vector<std::vector<float> >  threed_vertices;

        /// front and top;;
        int p = fedges.size();
         for (int i = 0; i <p ; i++)
         {
            std::vector<float> vec = fedges.at(i);
                float x1 = vec.at(0);
                float y1 = vec.at(1);
                float x2 = vec.at(2);
                float y2 = vec.at(3);
                int p2=tedges.size();
                for (int j = 0; j < p2; j++)
                {
                    std::vector<float> vec = tedges.at(j);
                        float xx1 = vec.at(0);
                        float zx1 = vec.at(1);
                        float xx2 = vec.at(2);
                        float zx2 = vec.at(3);
                        if (x1==xx1){
                            std::vector<float> vek;
                            vek.push_back(x1);
                            vek.push_back(y1);
                            vek.push_back(zx1);
                            threed_vertices_ft.push_back(vek);
                        }
                        if (x1==xx2){
                            std::vector<float> vek;
                            vek.push_back(x1);
                            vek.push_back(y1);
                            vek.push_back(zx2);
                            threed_vertices_ft.push_back(vek);
                        }
                        if (x2==xx2){
                            std::vector<float> vek;
                            vek.push_back(x2);
                            vek.push_back(y2);
                            vek.push_back(zx2);
                            threed_vertices_ft.push_back(vek);
                        }
                        if (x2==xx1){
                            std::vector<float> vek;
                            vek.push_back(x2);
                            vek.push_back(y2);
                            vek.push_back(zx1);
                            threed_vertices_ft.push_back(vek);
                        }

                }
         }

//// SIDE TOP FINDIND VERTEX
         p=sedges.size();
         for (int i = 0; i <p; i++)
         {
            std::vector<float> vec = sedges.at(i);
                float z1 = vec.at(0);
                float y1 = vec.at(1);
                float z2 = vec.at(2);
                float y2 = vec.at(3);
                for (int j = 0; j < tedges.size(); j++)
                {
                    std::vector<float> vec = tedges.at(j);
                        float xz1 = vec.at(0);
                        float zz1 = vec.at(1);
                        float xz2 = vec.at(2);
                        float zz2 = vec.at(3);
                        if (z1==zz1){
                            std::vector<float> vek;
                            vek.push_back(xz1);
                            vek.push_back(y1);
                            vek.push_back(z1);
                            threed_vertices_ts.push_back(vek);
                        }
                        if (z1==zz2){
                            std::vector<float> vek;
                            vek.push_back(xz2);
                            vek.push_back(y1);
                            vek.push_back(z1);
                            threed_vertices_ts.push_back(vek);
                        }
                        if (z2==zz2){
                            std::vector<float> vek;
                            vek.push_back(xz2);
                            vek.push_back(y2);
                            vek.push_back(z2);
                            threed_vertices_ts.push_back(vek);
                        }
                        if (z2==zz1){
                            std::vector<float> vek;
                            vek.push_back(xz1);
                            vek.push_back(y2);
                            vek.push_back(z2);
                            threed_vertices_ts.push_back(vek);
                        }

                }
         }

        // ----

         // for (int g=0 ;g< threed_vertices_ts.size();g++){
            // 	std::vector<float> vec= threed_vertices_ts.at(g);
            // 	for (int b=0;b<vec.size();b++){
            // 		std::cout << vec.at(b)<<"/";
            // 	}
            // 	std::cout << "\n";

            // }
            // std::cout << "((((((((\n";
         //
         for (int i = 0; i <fedges.size() ; i++)
         {
            std::vector<float> vec = fedges.at(i);
                float x1 = vec.at(0);
                float y1 = vec.at(1);
                float x2 = vec.at(2);
                float y2 = vec.at(3);
                for (int j = 0; j < sedges.size(); j++)
                {
                    std::vector<float> vec = sedges.at(j);
                        float zx1 = vec.at(0);
                        float yx1 = vec.at(1);
                        float zx2 = vec.at(2);
                        float yx2 = vec.at(3);
                        if (y1==yx1){
                            std::vector<float> vek;
                            vek.push_back(x1);
                            vek.push_back(y1);
                            vek.push_back(zx1);
                            threed_vertices_sf.push_back(vek);
                        }
                        if (y1==yx2){
                            std::vector<float> vek;
                            vek.push_back(x1);
                            vek.push_back(y1);
                            vek.push_back(zx2);
                            threed_vertices_sf.push_back(vek);
                        }
                        if (y2==yx2){
                            std::vector<float> vek;
                            vek.push_back(x2);
                            vek.push_back(y2);
                            vek.push_back(zx2);
                            threed_vertices_sf.push_back(vek);
                        }
                        if (y2==yx1){
                            std::vector<float> vek;
                            vek.push_back(x2);
                            vek.push_back(y2);
                            vek.push_back(zx1);
                            threed_vertices_sf.push_back(vek);
                        }

                }
         }







         int con;
         std::vector<std::vector<float> > vecto_ft ;
         std::vector<std::vector<float> > vecto_ts ;
         std::vector<std::vector<float> > vecto_sf ;
          //std::vector<std::vector<float> > temp ;

          std::vector<float> temp2;
          temp2 = threed_vertices_ft.at(0);
          //temp2=temp.at(0);
          vecto_ft.push_back(temp2);
         for (int i = 1; i < threed_vertices_ft.size(); i++)
          {
                con = 0;
                std::vector<float> v = threed_vertices_ft.at(i);
                for (int j = 0; j < vecto_ft.size(); j++)
                {
                    std::vector<float> vect = vecto_ft.at(j);
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
                std::vector<float> v = threed_vertices_ts.at(i);
                for (int j = 0; j < vecto_ts.size(); j++)
                {
                    std::vector<float> vect = vecto_ts.at(j);
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
                std::vector<float> v = threed_vertices_sf.at(i);
                for (int j = 0; j < vecto_sf.size(); j++)
                {
                    std::vector<float> vect = vecto_sf.at(j);
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
            // 	std::vector<float> vec= vecto_ft.at(g);
            // 	for (int b=0;b<vec.size();b++){
            // 		std::cout << vec.at(b)<<"/";
            // 	}
            // 	std::cout << "\n";

            // }
            // std::cin >> con;

            // std::cout << "(((((((((((((((((((";
            // for (int g=0 ;g< vecto_sf.size();g++){
            // 	std::vector<float> vec= vecto_sf.at(g);
            // 	for (int b=0;b<vec.size();b++){
            // 		std::cout << vec.at(b)<<"/";
            // 	}
            // 	std::cout << "\n";

            // }
            // std::cin >> con;



            // std::cout << "(((((((((((((((((((";
            // for (int g=0 ;g< vecto_ts.size();g++){
            // 	std::vector<float> vec= vecto_ts.at(g);
            // 	for (int b=0;b<vec.size();b++){
            // 		std::cout << vec.at(b)<<"/";
            // 	}
            // 	std::cout << "\n";

            // }
            // std::cin >> con;



          std::vector<std::vector<float> > vecto; /// COMMON VERTICES;
          int flag1=0;
          int flag2= 0;
        for (int i = 0; i < vecto_ft.size(); i++)
          {
                flag1=0;
                flag2=0;
                std::vector<float> v = vecto_ft.at(i);
                for(int j=0;j<vecto_sf.size();j++){
                    std::vector<float> vect = vecto_sf.at(j);
                    if ((v.at(0)==vect.at(0)) && (v.at(1)==vect.at(1))&&(v.at(2)==vect.at(2))){
                        flag1 = 1;
                        break;
                    }

                }

                for(int j=0;j<vecto_ts.size();j++){
                    std::vector<float> vect = vecto_ts.at(j);
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
        // 		std::vector<float> vec= vecto.at(g);
        // 		for (int b=0;b<vec.size();b++){
        // 			std::cout << vec.at(b);
        // 		}
        // 		std::cout << "\n";

        // 	}
        // 	int n;
        // // std::cout<< "end of f and t";
        // // 	std::cin>>n;


/// MAKE THE EDGES FOR PROPOSED 3D;
          std::vector<std::vector<float> > edge_form ;
          for(int i=0;i<vecto.size();i++){
            std::vector<float> temp1=vecto.at(i);
            for(int j=i+1;j<vecto.size();j++){
                std::vector<float> temp2=vecto.at(j);
                std::vector<float> temp3;
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
