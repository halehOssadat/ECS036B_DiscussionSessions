CC = g++ -std=c++14

CFLAGS = -g -I/usr/include/jsoncpp/
LDFLAGS = -ljsoncpp 

all: triangleCalculator

main.o: main.cpp triangle.h point.h
	$(CC) -c $(CFLAGS) main.cpp $(LDFLAGS)

triangleCalculator: main.o
	$(CC) main.o -o triangleCalculator $(LDFLAGS)

clean:
	rm -f *.o *~ core triangleCalculator