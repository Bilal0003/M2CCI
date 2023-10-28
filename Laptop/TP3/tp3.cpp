
#include "tp3.hpp"

using namespace std;

F::F(){n=0 ; d=1;}
F::F(int a ,int b) {n = a; d = b;}
F::F(int a) {n = a; d = 1;}
void F::Aff() const{cout << n << "/" << d << endl;}
F Add(F a, F b) { return F(a.d*b.n+a.n*b.d,a.d*b.d);}
bool isNull(F a) { return (a.n==0);}
        