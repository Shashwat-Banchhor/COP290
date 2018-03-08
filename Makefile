all: exec

exec: main.o make_view.o make_complete_graph.o are_all_three_views_same.o make_view_graph.o display.o 
	g++  main.o make_view.o make_complete_graph.o are_all_three_views_same.o make_view_graph.o display.o hello

main.o main.cpp
	g++ -c main.cpp