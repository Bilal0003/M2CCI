#include "Entier.hpp"
#include <iostream>

using namespace std;

Entier::Entier(std::string nombre) : chiffres()
{

    for (int i = 0; i < nombre.size(); i++)
    {
        // cout << nombre[i];
        if (nombre[i] != ' ')
        {
            chiffres.push_back(nombre[i] - '0');
        }
    }
    // cout << endl;
    //  if (chiffres.empty()) chiffres.push_back(0);
}

Entier::Entier() : chiffres() {}

Entier::Entier(int a)
{
}

void Entier::Afficher() const
{
    for (int i = 0; i < chiffres.size(); i++)
    {
        cout << chiffres[i];
        if ((chiffres.size() - i - 1) % 3 == 0 && chiffres.size() >= 6)
            cout << " ";
    }
    cout << std::endl;
}

Entier operator+(const Entier &a, const Entier &b)
{
    Entier num;
    int carry = 0;
    int i = a.chiffres.size() - 1;
    int j = b.chiffres.size() - 1;
    int sum = 0;
    while (i >= 0 || j >= 0)
    {
        int chiffre_a = (i >= 0) ? a.chiffres[i] : 0;
        int chiffre_b = (j >= 0) ? b.chiffres[j] : 0;

        sum = chiffre_a + chiffre_b + carry;
        carry = sum / 10;

        num.chiffres.insert(num.chiffres.begin(), sum % 10);

        i--;
        j--;
    }

    if (carry != 0)
        num.chiffres.insert(num.chiffres.begin(), carry);
    return num;
}

// multiply big int by n
Entier mult1Chiffre(Entier a, int n)
{
    Entier num;
    int carry = 0;
    int i = a.chiffres.size() - 1;
    int produit = 1;
    while (i >= 0)
    {
        int chiffre_a = (i >= 0) ? a.chiffres[i] : 0;

        produit = (a.chiffres[i] * n) + carry;
        carry = produit / 10;
        num.chiffres.insert(num.chiffres.begin(), produit % 10);
        i--;
    }
    if (carry != 0)
        num.chiffres.insert(num.chiffres.begin(), carry);
    return num;
}

// multiply big int by 10^n

Entier mult10(Entier a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a.chiffres.push_back(0);
    }
    return a;
}

Entier operator*(const Entier &a, const Entier &b)
{
    int j = b.chiffres.size() - 1;
    Entier num;
    Entier c;
    Entier d;
    int n = 0;

    while (j >= 0)
    {
        d = mult1Chiffre(a, b.chiffres[j]);
        c = mult10(d, n);
        num = num + c;
        n++;
        j--;
    }
    return num;
}

Entier Entier::factoriel()
{
    Entier num("1");
    Entier temp("1");
    Entier one("1");

    for (Entier i("1"); i <= *this + one; i = i + one)
    {
        num = num * i;
    }

    return num;
}

bool operator<=(const Entier &a, const Entier &b)
{
    if (a.chiffres.size() < b.chiffres.size())
    {
        return true;
    }
    else if (a.chiffres.size() > b.chiffres.size())
    {
        return false;
    }

    else
    {
        for (int i = 0; i < a.chiffres.size(); i++)
        {
            if (a.chiffres[i] < b.chiffres[i])
            {
                return true;
            }
            else if (a.chiffres[i] > b.chiffres[i])
            {
                return false;
            }
        }
    }
}


ostream& operator<<(ostream &f, const Entier &a){
    f << a.chiffres << endl;
}