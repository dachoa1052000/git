#this target will compile all the file
CC = g++

CFLAGS = -c -Wall

all: main

main: main.o Account.o
	$(CC) main.o Account.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Account.o: Account.cpp
	$(CC) $(CFLAGS) Account.cpp

clean:
	rm -rf *o main