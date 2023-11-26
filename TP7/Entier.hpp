#include <vector>
#include <string>

class Entier
{
private:
    std::vector<int> chiffres;

public:
    Entier();
    Entier(int);
    Entier(std::string);
    //Entier(int);
    void Afficher() const;
    friend Entier operator+ (const Entier &, const Entier &);
    friend Entier operator* (const Entier &, const Entier &);
    friend Entier mult1Chiffre( Entier,int);
    friend Entier mult10(Entier,int);
    Entier factoriel();
    friend bool operator <=(const Entier &, const Entier &);
    friend std::ostream & operator<<( std::ostream&, const Entier &);
};