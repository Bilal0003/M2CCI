#include "P.hpp"

class Cercle{
    protected:
        P c;
        float r;
    public:
        C();
        C(P,float);

        friend ostream& operator<< (ostream&, const C &);
};