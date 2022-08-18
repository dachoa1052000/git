CC = g++

CFLAGS = -c -Wall

all: main

main: main.o Movie.o Movies.o
	$(CC) main.o Movie.o Movies.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Movie.o: Movie.cpp
	$(CC) $(CFLAGS) Movie.cpp

Movies.o: Movies.cpp
	$(CC) $(CFLAGS) Movies.cpp

clean: 
	rm -rf *o main