# include <GLUT/GLUT.h>
#include <iostream>
#include <stdio.h>
#include<string.h>
#include <vector>
#include "functions.h"
#include "global.h"
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
	std::string file_name;
	std::cin >> file_name;
	std::ifstream input( file_name );
int n=0;
std::string line;

					int i=0;
					std::vector<std::vector<int> > veco ;
					int count;
					std::vector<int> edge_vertices ;
					int p =0;
					while(std::getline( input, line ) )
					{
					   // if(!line.compare("next")) {
					   // 		break;
					   // }
					   n = stoi(line);
					   cout << p;
					   p++;
					   if (count%6!=5 ){
					    	edge_vertices.push_back(n);
					     }
					     else{
					     	edge_vertices.push_back(n);
					    	veco.push_back(edge_vertices);
					     	edge_vertices.clear();
					     }
					     count++;
					}
					cout << p;

}