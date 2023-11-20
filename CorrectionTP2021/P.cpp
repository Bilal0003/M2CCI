#include "P.hpp"
#include <math.h>

P::P() {x=0, y=0;}

P::P(float a,float b){x=a, y=b;}

float D(P a, P b){return sqrt(a.x - b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);}

std::ostream& operator<<(std::ostream &f, const P &a){ f << '(' << a.x << ',' << a.y<< ')'; return f;}

P operator+(P a,P b){return P(a.x + b.x , a.y + b.y);}

P operator/(P a,float d){ return P(a.x/d, a.y/d);}

