#include "Movie.hpp"

Movie::Movie(std::string name, std::string rating, int watched) : name(name), rating(rating), watched(watched){}

std::string Movie::get_name(){return name;}

void Movie::display(){
    std::cout << name << " " << rating << " " << watched << std::endl;
}

Movie::~Movie(){}