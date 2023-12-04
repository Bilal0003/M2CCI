#include "Entier.hpp"
#include <iostream>

using namespace std;

/*!
\brief Constructeur partir d'un string.

Voila.

\param nombre Le nombre sous la forme d'une chaine.
*/
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

// Constructeur a partir d'un entier

Entier::Entier() : chiffres() {}

// Afficher un Entier

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

/*!
\brief Surcharge de l'operateur d'addition.
\param a,b Les entiers.
\return La somme.
*/

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

/*!
\brief Fonction utilitaire de multiplication d'un Entier par un int a un seule chiffre .
\param a un Entier, n un int.
\return un Entier multiplier par un int.
*/

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

/*!
\brief Fonctipn utilitaire de multiplication d'un Entier par un 10^n .
\param un Entier a, un entier n.
\return un Entier multiplier par 10^n.
*/

Entier mult10(Entier a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a.chiffres.push_back(0);
    }
    return a;
}

/*!
\brief Surcharge de l'operateur d'addition.
\param a,b Les entiers.
\return Le produit.
*/

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

/*!
\brief Fonction factoriel.
\return La factoriel.
*/

Entier Entier::factoriel()
{
    Entier num("1");
    Entier one("1");

    for (Entier i("1"); i <= *this + one; i = i + one)
    {
        num = num * i;
    }

    return num;
}

/*!
\brief Surcharge de l'operateur de comparaison inferieur ou egale.
\param a,b Les entiers.
\return Booléen.
*/

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

/*!
\brief Surcharge de l'operateur de flot.
\param ostream et un Entier.
\return Affichage d'un Entierq.
*/

ostream &operator<<(ostream &f, const Entier &a)
{
    for (int i = 0; i < a.chiffres.size(); i++)
    {
        f << a.chiffres[i];
        if ((a.chiffres.size() - i - 1) % 3 == 0 && a.chiffres.size() >= 6)
            f << " ";
    }
    f << endl;
    return f;
}