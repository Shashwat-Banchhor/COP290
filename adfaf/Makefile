all: exec

exec: main.o make_view.o make_complete_graph.o are_all_three_views_same.o make_view_graph.o display.o convert3dplane.o rotate.o translate.o scale.o 
	g++  main.o make_view.o make_complete_graph.o are_all_three_views_same.o make_view_graph.o display.o convert3dplane.o rotate.o translate.o scale.o -o  hello

main: main.o main.cpp
	g++ -c main.cpp