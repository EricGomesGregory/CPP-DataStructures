main: node.o stack.o main.o
	g++ node.o stack.o main.o -o main

node.o: src/node.h src/node.cpp
	g++ -c src/node.cpp

stack.o: src/stack.h src/stack.cpp
	g++ -c src/stack.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o main