CC = g++ -std=c++14

CFLAGS = -g  

all: bat

main.o: main.cpp animals.h
	$(CC) -c $(CFLAGS) main.cpp $(LDFLAGS)

bat: main.o
	$(CC) main.o -o bat $(LDFLAGS)

clean:
	rm -f *.o *~ core bat