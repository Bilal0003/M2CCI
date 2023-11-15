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
    cout << endl;
    // if (chiffres.empty()) chiffres.push_back(0);
}

Entier::Entier():chiffres(){}

void Entier::Afficher() const
{
    for (int i = 0; i < chiffres.size(); i++)
    {
        cout << chiffres[i];
    }
    cout << std::endl;
}

Entier operator+(const Entier &a, const Entier &b)
{
    Entier num;
    int carry = 0;
    int i = a.chiffres.size() - 1;
    int j = b.chiffres.size() - 1;
    int largest = (i>j)  ? i : j;
    int smallest = (i<j) ? i : j;
    while (i >= 0 && j >= 0){
        num.chiffres.insert( num.chiffres.begin() ,  ((a.chiffres[i] + b.chiffres[j] + carry) % 10));
        //num.chiffres.push_back((a.chiffres[i] + b.chiffres[j] + carry) % 10);
        carry = (a.chiffres[i] + b.chiffres[j]) / 10; 
        /* if (i==0 || j==0) {
            num.chiffres.insert(num.chiffres.begin(), b.chiffres[largest]);
            largest--; */
        
        i--;
        j--;
        
    }
    for (int k=largest-smallest-1; k>=0; k--){
    num.chiffres.insert(num.chiffres.begin(),a.chiffres[k]+carry);
    }
    return num;
}