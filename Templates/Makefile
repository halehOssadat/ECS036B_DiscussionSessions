CC = g++ -std=c++14

CFLAGS = -g -I/usr/include/jsoncpp/
LDFLAGS = -ljsoncpp 

all: template_example

Vector.o: Vector.h Vector.cpp
	$(CC) -c $(CFLAGS) Vector.cpp $(LDFLAGS)

main.o:  main.cpp
	$(CC) -c $(CFLAGS) main.cpp $(LDFLAGS)

template_example: main.o Vector.o
	$(CC) main.o Vector.o -o template_example $(LDFLAGS)

clean:
	rm -f *.o *~ core template_example