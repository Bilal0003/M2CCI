#include <string>

class Movie{
    private:
        friend class Movies;
        std::string name;
        std::string rating;
        int watched;

    public:
        Movie(std::string, std::string , int);
        std::string get_name();
        void display();
        ~Movie();
};