#include <vector>
#include "Movie.cpp"

class Movies{
    private:
        friend class Movie;
        std::vector<Movie> movies;

    public:
        Movies();
        
        void Add_movie(std::string, std::string, int);
        void Display();
        void increment_watched(std::string);
        ~Movies();
};