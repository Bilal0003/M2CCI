#include <vector>
#include <string>

class Entier
{
private:
    std::vector<int> chiffres;

public:
    Entier(std::string);
    void Afficher() const;
    
};