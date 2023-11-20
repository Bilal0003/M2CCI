#include <iostream>
#include "Entier.cpp"

using namespace std;

int main(){
    string largenum1 = "232";
    string test= "";
    Entier nbr(largenum1);
    int x=5;
    nbr.mult1Chiffre(test,x);
    nbr.Afficher();

    return 0;
}