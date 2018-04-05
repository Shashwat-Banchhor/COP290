/*#include <iostream>
#include "functions.h"
# include <GLUT/GLUT.h>

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
<<<<<<< HEAD
int main(){
fts twod;
 threedplane thplane;
  threed_object threed;
  // VIEW front;
  // VIEW top;
  // VIEW side;
=======

/*void render();
void reshape(int x, int y);
void keyboard(unsigned char c , int x ,int y);
void mouse(int button,int state,int x,int y);



int main(int argc , char** argv){

>>>>>>> caf7e7fd38b3713a4b2cbcad41e1df7b75fb9909

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
}*/




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

void keyboard(unsigned char c , int x ,int y);
void mouse(int button,int state,int x,int y);

threedplane thplane;
	fts twod;
Combine comb;
int main(int argc , char** argv){
    int Inp_Count;

   
    cin >> Inp_Count;
	//threedplane thplane;
	while (Inp_Count!=-1){
			threed_object threed;
		    int code=0;
			int no_of_vertex=0;
			int no_of_edge=0;

			//vector<vector<int> > threed;
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

			/*vector <vector<int> > tfront_vertex;
			vector<vector<int> > ttop_vertex;
			vector<vector<int> > tside_vertex;

			vector<vector<int> > tfront_edge;
			vector<vector<int> > ttop_edge;
			vector<vector<int> > tside_edge;*/

			int n ;
			cout << "Choose_one_of_these_two: \n";
			cout << "1. 3_d_to_2_d\n ";
			cout << "2. 2-d to 3-d\n ";
			cin  >> code;
			
			if (code==1){
				
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
				threed.edge = veco;
					  twod=MAKE_VIEW(threed);
				   std::vector<std::vector<int> > vin =  twod.fedge;
			}

			else {
				std::vector<std::vector<int> > veco ;
				

		///  FRONT
				cout<<"PLease Enter_the_pair_of_vertices_defining_edge-: FTS: \n";
				cin>>n;

				while(n!=-1){
		             std::vector<int> edge_vertices ;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					
					veco.push_back(edge_vertices);
				
					
					 cin>>n;
				}
				twod.fedge = veco;
				veco.clear();
		//TOP
				cin>>n;

				while(n!=-1){
		             std::vector<int> edge_vertices ;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					
					veco.push_back(edge_vertices);
				
					
					 cin>>n;
				}
				twod.tedge = veco;
				veco.clear();

		// SIDE
				cin>>n;

				while(n!=-1){
		             std::vector<int> edge_vertices ;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					cin>>n;
					edge_vertices.push_back(n);
					
					veco.push_back(edge_vertices);
				
					
					 cin>>n;
				}
				twod.sedge = veco;
				veco.clear();



				temp_threed_object temp_3D ;
				temp_3D = form_vertex(twod);
				// cout << "out form_ver";
				// std::vector<std::vector<int> > s_edge;
				// // s_edge = twod.sedge;
				// // // for (int g=0 ;g< s_edge.size();g++){
				// // // 		std::vector<int> vec= s_edge.at(g);
				// // // 		for (int b=0;b<vec.size();b++){
				// // // 			std::cout << vec.at(b);
				// // // 		}
				// // // 		std::cout << "\n";

				// // // 	}
					
				// std::cout<< "end of check_f\n";
				// cin >> n;
				std::vector<std::vector<int> > vte;
				vte= removing_edge(temp_3D,twod);
				threed.edge = vte;
				// cout << "out rem";
				// cin >> n;

			}	
			// std::vector<std::vector<int> >  v;
			// std::vector<int> ve ;
			// ve.push_back(0);
			// ve.push_back(1);
			// ve.push_back(0);
			// ve.push_back(0);
			// ve.push_back(1);
			// ve.push_back(1);
			// v.push_back(ve);
			// threed.edge = v;

			thplane = convert3dplane(threed);
				// 		  std::cout<<"f and t thplane";
				// 	  		std::vector<std::vector<int> > corrected_edges;
				// 	  		corrected_edges=thplane.edge;
				//  for (int g=0 ;g< corrected_edges.size();g++){
				// 		std::vector<int> vec= corrected_edges.at(g);
				// 		for (int b=0;b<vec.size();b++){
				// 			std::cout << vec.at(b);
				// 		}
				// 		std::cout << "\n";

				// 	}
				// std::cout<< "end of f and t";
			comb = Combine_func(twod,thplane);


			// cout << "Hai\n";
			// std::vector<std::vector<int> > front_view_edges = comb.edge;
			// 		for (int g=0 ;g< front_view_edges.size();g++){
			// 			std::vector<int> vec= front_view_edges.at(g);
			// 			for (int b=0;b<vec.size();b++){
			// 				cout << vec.at(b) << "\n";
			// 			}

			// 		}

			// 	    }
			/*cout << "Done_convert";
			int y;
			cin >> y ;*/
				/*else{
				cout<< "Enter_vertex_in_front_view: ";
				cin>> n;
				int i=0;
				while(n!=-1){
					front.vertex[i].push_back(n);
					cin>>n;
					front.vertex[i].push_back(n);
					i=i+1;
					cin>>n;
				}
				no_of_vertex_front = i;
				cout<<"Enter_the_pair_of_vertex_defining_edge: ";
				cin>>n;
				i=0;
				while(n!=-1){
					front.edge[i].push_back(n);
					cin>>n;
					front.edge[i].push_back(n);
					cin>>n;
					front.edge[i].push_back(n);
					cin>>n;
					front.edge[i].push_back(n);
					i=i+1;
					cin>>n;
				}
				no_of_edge_front=i;


						cout<< "Enter_vertex_in_top_view: ";
				cin>> n;
				i=0;
				while(n!=-1){
					top.vertex[i].push_back(n);
					cin>>n;
					top.vertex[i].push_back(n);
					i=i+1;
					cin>>n;
				}
				no_of_vertex_top = i;
				cout<<"Enter_the_pair_of_vertex_defining_edge: ";
				cin>>n;
				i=0;
				while(n!=-1){
					top.edge[i].push_back(n);
					cin>>n;
					top.edge[i].push_back(n);
					cin>>n;
					top.edge[i].push_back(n);
					cin>>n;
					top.edge[i].push_back(n);
					i=i+1;
					cin>>n;
				}
				no_of_edge_top=i;


						cout<< "Enter_vertex_in_side_view: ";
				cin>> n;
				i=0;
				while(n!=-1){
					side.vertex[i].push_back(n);
					cin>>n;
					side.vertex[i].push_back(n);
					i=i+1;
					cin>>n;
				}
				no_of_vertex_side = i;
				cout<<"Enter_the_pair_of_vertex_defining_edge: ";
				cin>>n;
				i=0;
				while(n!=-1){
					side.edge[i].push_back(n);
					cin>>n;
					side.edge[i].push_back(n);
					cin>>n;
					side.edge[i].push_back(n);
					cin>>n;
					side.edge[i].push_back(n);
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
			}*/


			glutInit(&argc,argv);
		    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
		    glutInitWindowPosition(100,100);
		    glutInitWindowSize(512,512);
		    glutCreateWindow("Simple Glut");
		    glutDisplayFunc(render);
		    
		    
		    glutReshapeFunc(reshape);
		    glutKeyboardFunc(keyboard);
		    glutMouseFunc(mouse);
		    
		    
		    glutMainLoop();
			cin >> Inp_Count;
	}


    return 0;
}

void render(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   // int y;
   // cin >> y;
    //int size = thplane.edge.size();
    std::vector<std::vector<int> > veec = comb.edge;
    int size = veec.size();
    //cout << size;
    for (int i=0;i<size;i++){
        
        
        std::vector<int> vec = veec.at(i);
        glBegin(GL_LINES);
        glColor3f(1,0,0);
        glVertex2f(vec.at(0),vec.at(1));
        glVertex2f(vec.at(2),vec.at(3));
        glEnd();
    }
    /*glBegin(GL_LINES);
     glColor3f(0,1,0);
     glVertex2f(0.5,0.5);
     glVertex2f(0,0.5);
     glEnd();
     */
    glutSwapBuffers();
    
    
}

void keyboard(unsigned char c , int x ,int y){
    
    if (c == 27){
        exit(0);
    }
    
}
void mouse(int button,int state,int x,int y){
    if (button == GLUT_RIGHT_BUTTON){
        exit(0);
    }
    else {
        
    }
}

void reshape(int width, int height)
{
    /* tell OpenGL we want to display in a recangle that is the
     same size as the window
     */
    glViewport(0,0,width,height);
    
    /* switch to the projection matrix */
    glMatrixMode(GL_MODELVIEW_MATRIX);
    
    /* clear the projection matrix */
    glLoadIdentity();
    
    /* set the camera view, orthographic projection in 2D */
    gluOrtho2D(0,width,0,height);
    
    /* switch back to the model view matrix */
    glMatrixMode(GL_MODELVIEW);
}



