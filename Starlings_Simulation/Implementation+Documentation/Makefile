CC = g++

FLAGS = -std=c++11   

all: exec


exec: main.o  bird_Input.o  GetLocalCOM.o GetLocalDistances.o DrawAndCheckBirds.o MoveTowardsCOM.o MoveAwayNearest.o  MoveTowardsAvgSpeed.o GetEnergy.o
	g++ -std=c++11 main.o  bird_Input.o  GetLocalCOM.o GetLocalDistances.o DrawAndCheckBirds.o MoveTowardsCOM.o MoveAwayNearest.o  MoveTowardsAvgSpeed.o GetEnergy.o -o Birds -framework GLUT -framework OpenGL
	


main.o: main.cpp
	$(CC) -c  main.cpp  -framework GLUT -framework OpenGL

bird_Input.o: bird_Input.cpp  
	$(CC) -c  bird_Input.cpp  

GetLocalCOM.o: GetLocalCOM.cpp
	$(CC) -c  GetLocalCOM.cpp  

GetLocalDistances.o: GetLocalDistances.cpp
	$(CC) -c  GetLocalDistances.cpp  

DrawAndCheckBirds.o: DrawAndCheckBirds.cpp
	$(CC) -c  DrawAndCheckBirds.cpp  

MoveTowardsCOM.o: MoveTowardsCOM.cpp
	$(CC) -c  MoveTowardsCOM.cpp  

MoveAwayNearest.o: MoveAwayNearest.cpp
	$(CC) -c  MoveAwayNearest.cpp  

MoveTowardsAvgSpeed.o: MoveTowardsAvgSpeed.cpp
	$(CC) -c  MoveTowardsAvgSpeed.cpp  

GetEnergy.o: GetEnergy.cpp
	$(CC) -c  GetEnergy.cpp  