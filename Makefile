CC=g++
CFLAGS=-c -Wall
all: uravneniye

uravneniye: main.o disc.o
	$(CC) disc.o main.o -o uravneniye

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

disc.o: disc.cpp
	$(CC) $(CFLAGS) disc.cpp

test:
	$(CC) $(CFLAGS) test.cpp -o test 

