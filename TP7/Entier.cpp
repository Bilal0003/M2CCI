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
    int sum =0;
    while (i >= 0 || j >= 0){
        int chiffre_a = (i>=0) ? a.chiffres[i] : 0;
        int chiffre_b = (j>=0) ? b.chiffres[j] : 0;

        sum = chiffre_a + chiffre_b + carry;
        carry = sum / 10; 

        num.chiffres.insert(num.chiffres.begin(),  sum % 10);
        
        i--;
        j--;
         
    } 

    if (carry !=0) num.chiffres.insert(num.chiffres.begin(),carry);
    return num;
} 
 
Entier operator*(const Entier &a, const Entier &b){

int power(int base, int exposant)
{
    int power = 1;
    for (int i = 0; i < exposant; i++)
    {
        power *= base;
    }
    return power;
}

    Entier mult1Chiffre(Entier num, int n){
        int carry = 0;
        
    while(i >=0){
        int chiffre_a = (i>=0) ? a.chiffres[i] : 0 ;

        produit = (a.chiffres[i] * n ) + carry;
        num.chiffres.insert(num.chiffres.begin(), produit % 10);
    }
    Entier multParDix(Entier num, int n){
        
    }
    }

}

