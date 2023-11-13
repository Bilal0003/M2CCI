#include <iostream>
#include "Entier.cpp"
using namespace std;


int main(){
    string largenum = "10 888 869 450 418 352 160 768 000 000";
    Entier grdnbr(largenum);
    cout << endl;
    grdnbr.Afficher();
    return 0;
}