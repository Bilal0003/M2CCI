#include "Cercle.hpp"
#include "P.hpp"

C::C() { c = P() /*c=P(0,0)*/, r = 1; }

C::C() { P p, float x }
{
    c = p, r = x;
}

ostream &operator<<(ostream &f, const C &c)
{
    f << c.c << c.r;
    return f;
}