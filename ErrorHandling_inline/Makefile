CC = g++ -std=c++14

CFLAGS = -g  

all: inline_test error_handling

inline_test.o: inline_test.cpp 
	$(CC) -c $(CFLAGS) inline_test.cpp $(LDFLAGS)

error_handling.o: error_handling.cpp 
	$(CC) -c $(CFLAGS) error_handling.cpp $(LDFLAGS)

inline_test: inline_test.o
	$(CC) inline_test.o -o inline_test $(LDFLAGS)

error_handling: error_handling.o
	$(CC) error_handling.o -o error_handling $(LDFLAGS)

clean:
	rm -f *.o *~ core inline_test error_handling
