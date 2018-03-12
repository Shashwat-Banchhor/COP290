all: exec

exec: main.o make_view.o convert3dplane.o 
	g++  main.o make_view.o convert3dplane.o -o  th_to -framework GLUT -framework OpenGL

main.o: main.cpp
	g++ -c main.cpp -framework GLUT -framework OpenGL

make_view.o: make_view.cpp  
	g++ -c make_view.cpp

convert3dplane.o: convert3dplane.cpp
	g++ -c convert3dplane.cpp