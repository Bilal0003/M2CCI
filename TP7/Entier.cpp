#include "Entier.hpp"
#include <iostream>

using namespace std;

//grandnombre = "10 888 869 450 418 352 160 768 000 000"

Entier::Entier(int nombre) : chiffres(){
    while (nombre != 0){
        chiffres.push_back(nombre % 10);
        nombre = nombre / 10;
    }
    if (chiffres.empty()) chiffres.push_back(0);
}

void Entier::Afficher() const {
    
}

