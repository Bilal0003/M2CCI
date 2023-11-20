#include <vector>
#include <string>

class Entier
{
private:
    std::vector<int> chiffres;

public:
    Entier();
    Entier(std::string);
    Entier(int);
    void Afficher() const;
    friend Entier operator+ (const Entier &, const Entier &);
    Entier mult1Chiffre(Entier,int);
    // implement addition, using principe dial i7tifad b ra9m 3acharat
};