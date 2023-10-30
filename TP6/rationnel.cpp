#include "rationnel.hpp"

using namespace std;

rationnel::rationnel(){n=0, d=1;}
rationnel::rationnel(int a,int b){n=a; d=b;}
rationnel::rationnel(int a){n=a; d=1;}
void rationnel::Aff(){cout << n << "/" << d << endl;}
rationnel rationnel::Add(rationnel a){return rationnel(n*a.d+d*a.n, d*a.d);}
rationnel Soustracion(rationnel a,rationnel b) { return rationnel(b.d*a.n-b.n*a.d, b.d*a.d );}
rationnel Multip(rationnel a,rationnel b){return rationnel(a.n*b.n, a.d*b.d);}