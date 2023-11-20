#include <vector>
#include "P.hpp"

class E{
    protected:
        std::vector<P> e;
    public:
        E();
        void Aj(P);
        void Sup(int); 
        P Bary() const; //je ne me modifie pas
         
}