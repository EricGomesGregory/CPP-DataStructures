main: node.o list.o main.o
	g++ node.o list.o main.o -o main

node.o: src/node.h src/node.cpp
	g++ -c src/node.cpp

list.o: src/list.h src/list.cpp
	g++ -c src/list.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o main