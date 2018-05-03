all: exec


exec: main.o  bird_Input.o  GetLocalCOM.o GetLocalDistances.o DrawAndCheckBirds.o MoveTowardsCOM.o MoveAwayNearest.o  MoveTowardsAvgSpeed.o
	g++  main.o  bird_Input.o  GetLocalCOM.o GetLocalDistances.o DrawAndCheckBirds.o MoveTowardsCOM.o MoveAwayNearest.o  MoveTowardsAvgSpeed.o -o Birds -framework GLUT -framework OpenGL


main.o: main.cpp
	g++ -c  main.cpp -lstdc++ -framework GLUT -framework OpenGL

bird_Input.o: bird_Input.cpp  
	g++ -c  bird_Input.cpp -lstdc++ 

GetLocalCOM.o: GetLocalCOM.cpp
	g++ -c  GetLocalCOM.cpp -lstdc++ 

GetLocalDistances.o: GetLocalDistances.cpp
	g++ -c  GetLocalDistances.cpp -lstdc++ 

DrawAndCheckBirds.o: DrawAndCheckBirds.cpp
	g++ -c  DrawAndCheckBirds.cpp -lstdc++ 

MoveTowardsCOM.o: MoveTowardsCOM.cpp
	g++ -c  MoveTowardsCOM.cpp -lstdc++ 

MoveAwayNearest.o: MoveAwayNearest.cpp
	g++ -c  MoveAwayNearest.cpp -lstdc++ 

MoveTowardsAvgSpeed.o: MoveTowardsAvgSpeed.cpp
	g++ -c  MoveTowardsAvgSpeed.cpp -lstdc++ 