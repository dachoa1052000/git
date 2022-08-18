#include <iostream>
#include <vector>
#include "Movies.h"
using namespace std;

void increment_watched(Movies movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

void increment_watched(Movies movies, string name){
    if (movies.increment_watch(name)){
        cout << name << " watch incremented" << endl;
    }else{
        cout << name << " not found" << endl;
    }     
}

void add_movie(Movies &movies, string name, string rating,int watched){
    if (movies.add_movie(name,rating,watched)){
        cout << name << " added" << endl;
    } else {
        cout << name << " already exits" << endl;
    }

}

int main(){
    Movies my_movies;
    my_movies.display();
    cout << "=========================" << endl;
    add_movie(my_movies,"Big","PG-13",2);
    add_movie(my_movies,"Star Wars","PG",5);
    cout << "=========================" << endl;
    add_movie(my_movies,"Big","PG-13",2);
    my_movies.display();
    increment_watched(my_movies,"Big");
    cout << "=========================" << endl;
    my_movies.display();
    increment_watched(my_movies,"ABC");
}