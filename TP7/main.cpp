#include <iostream>
#include "Entier.cpp"
using namespace std;


int main(){
    string largenum1 = "615645";
    string largenum2 =  "24566";
    
    Entier grdnbr1(largenum1);
    Entier grdnbr2(largenum2);
    cout << endl;
    
    //cout << endl << 8%10 << endl << 8/10;
    Entier ans = grdnbr1 + grdnbr2;
    ans.Afficher();

    return 0;
}