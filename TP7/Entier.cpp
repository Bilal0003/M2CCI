#include "Entier.hpp"
#include <iostream>

using namespace std;

// grandnombre = "10 888 869 450 418 352 160 768 000 000"

Entier::Entier(std::string nombre) : chiffres()
{

    for (int i = 0; i < nombre.size(); i++)
    {
        cout << nombre[i];
        if (nombre[i] != ' ')
        {
            chiffres.push_back(nombre[i] - '0');
        }
    }

    // if (chiffres.empty()) chiffres.push_back(0);
}

void Entier::Afficher() const
{
    for (int i = 0; i < chiffres.size(); i++)
    {
        cout << chiffres[i];
    }
}

Entier operator+(const Entier &a, const Entier &b)
{
    int reste = 0;
    int LenNumSup = 0;
    if (a.chiffres.size() > b.chiffres.size())
    {
        LenNumSup = a.chiffres.size() - 1;
    }
    else
    {
        LenNumSup = b.chiffres.size() - 1;
    }
    for (int i = LenNumSup ; i >= 0; i--)
    {
        
    }
}