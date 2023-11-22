#include <iostream>
#include "Entier.cpp"

using namespace std;




int main(){
    string lrg1 = "6";
    string lrg2 =  "2";
    Entier grd1(lrg1);
    Entier grd2(lrg2);

    grd1.factoriel();
    grd1.Afficher();
    return 0;
}