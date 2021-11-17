# Lab 5 Makefile
CC = g++ -std=c++11
exe_file = application
$(exe_file): square.o circle.o rectangle.o shape.o application.o
	$(CC) square.o circle.o rectangle.o shape.o application.o -o $(exe_file)
square.o: square.cpp
	$(CC) -c square.cpp
circle.o: circle.cpp
	$(CC) -c circle.cpp
rectangle.o: rectangle.cpp
	$(CC) -c rectangle.cpp
shape.o: shape.cpp
	$(CC) -c shape.cpp
application.o: application.cpp
	$(CC) -c application.cpp

clean:
	rm -f *.out *.o $(exe_file)
