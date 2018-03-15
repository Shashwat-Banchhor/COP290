all: exec


exec: main.o make_view.o convert3dplane.o  Combine_func.o translate.o scale.o form_vertex.o removing_edge.o 
	g++  main.o make_view.o convert3dplane.o Combine_func.o translate.o scale.o form_vertex.o removing_edge.o -o th_to -framework GLUT -framework OpenGL


main.o: main.cpp
	g++ -c main.cpp -framework GLUT -framework OpenGL

make_view.o: make_view.cpp  
	g++ -c make_view.cpp

convert3dplane.o: convert3dplane.cpp
	g++ -c convert3dplane.cpp

Combine_func.o: Combine_func.cpp
	g++ -c Combine_func.cpp

translate.o: translate.cpp
	g++ -c translate.cpp

scale.o: scale.cpp
	g++ -c scale.cpp

form_vertex.o: form_vertex.cpp
	g++ -c form_vertex.cpp

removing_edge.o: removing_edge.cpp
	g++ -c removing_edge.cpp