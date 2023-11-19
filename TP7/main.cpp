#include <iostream>
#include "Entier.cpp"
using namespace std;


int main(){
    string largenum1 = "415645";
    string largenum2 = "85665"; 
    // result should be 501310, instead its 401310
    Entier grdnbr1(largenum1);
    Entier grdnbr2(largenum2);
    cout << endl;
    
    Entier ans = grdnbr1 + grdnbr2;
    ans.Afficher();
    //cout << endl << 8%9 << endl << 8/9;

    return 0;
}