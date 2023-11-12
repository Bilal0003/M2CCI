#include "Movies.hpp"

Movies::Movies()
{
}

void Movies::Add_movie(std::string Add_name, std::string Add_rating, int Add_watched)
{
    bool movie_exists = false;
    for (int i = 0; i < movies.size(); i++)
    {
        if (movies[i].name == Add_name)
        {
            movie_exists = true;
            break;
        }
    }
    if (movie_exists)
    {
        std::cout << Add_name << " already exists" << std::endl;
    }
    else
    {
        Movie movie(Add_name, Add_rating, Add_watched);
        movies.push_back(movie);
    }
}

void Movies::Display()
{
    for (int i = 0; i < movies.size(); i++)
    {
        movies[i].display();
    }
}

void Movies::increment_watched(std::string target)
{

    bool movie_found = false;
    for (int i = 0; i < movies.size(); i++)
    {
        if (movies[i].name == target)
        {
            movies[i].watched += 1;
            movie_found = true;
        }
    }
    if (!movie_found)
    {
        std::cout << "Movie does not exist." << std::endl;
    }
}

Movies::~Movies() {}