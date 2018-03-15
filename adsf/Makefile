all: exec

<<<<<<< HEAD
exec: main.o make_view.o make_complete_graph.o are_all_three_views_same.o make_view_graph.o display.o convert3dplane.o rotate.o translate.o scale.o 
	g++  main.o make_view.o make_complete_graph.o are_all_three_views_same.o make_view_graph.o display.o convert3dplane.o rotate.o translate.o scale.o -o  hello
=======
exec: main.o make_view.o convert3dplane.o 
	g++  main.o make_view.o convert3dplane.o -o  th_to -framework GLUT -framework OpenGL
>>>>>>> caf7e7fd38b3713a4b2cbcad41e1df7b75fb9909

main.o: main.cpp
	g++ -c main.cpp -framework GLUT -framework OpenGL

make_view.o: make_view.cpp  
	g++ -c make_view.cpp

convert3dplane.o: convert3dplane.cpp
	g++ -c convert3dplane.cpp