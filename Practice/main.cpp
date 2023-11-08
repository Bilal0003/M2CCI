#include <iostream>
#include "Movies.cpp"
using namespace std;

int main(){
    
    Movies movies;
    /* movies.Add_movie("Transformers 2", "G", 0);
    movies.Add_movie("Madagascar 3", "PG", 1); */
    movies.Add_movie("Oppenheimer", "E++", 2);
    movies.increment_watched("ice age");
    movies.Display();
    


    return 0;
}