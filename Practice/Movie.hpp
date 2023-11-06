#include <string>

class Movie{
    private:
        friend class Movies;
        std::string name;
        std::string rating;
        int watched;

    public:
        Movie(std::string, std::string , int);
        void display();
};