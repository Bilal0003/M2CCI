#include <vector>
#include "Movie.cpp"

class Movies{
    private:
        friend class Movie;
        std::vector<Movie> movies;

    public:
        Movies();
        friend void Add_movie(Movies &, std::string, std::string, int);
        void Display(Movies);
        
};