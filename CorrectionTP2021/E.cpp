#include "E.hpp"

E::E() { e=vector<P>();}

void E::Aj(P p){ e.push_back(p);}

void E::Sup(int i){ if (i<0) return;
    if (i>=e.size()) return; }

P E::Bary() const{
    P b;
    for (int i=0; i<e.size(); i++){
        b = b+ e[i];
    }
    b= b/e.size();
    return b;
}
