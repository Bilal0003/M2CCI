#include <vector>
#include <string>

/**
 * \file Entier.hpp
 * \brief Class tres grand nombres
 */

/*!
  \class Entier Entier.hpp
  \brief Class permetant de représenter de très grands nombres entiers sous leur forme décimale

 A more detailed description of the class goes here.
 */

class Entier
{
private:
    std::vector<int> chiffres; //!< Tableau de chiffres
    
public:

    Entier();     
    //Entier(int);
    Entier(std::string);
    
    void Afficher() const;
    friend Entier operator+ (const Entier &, const Entier &);
    friend Entier operator* (const Entier &, const Entier &);
    friend Entier mult1Chiffre( Entier,int);
    friend Entier mult10(Entier,int);
    Entier factoriel();
    friend bool operator <=(const Entier &, const Entier &);
    friend std::ostream & operator<<( std::ostream&, const Entier &);
};

