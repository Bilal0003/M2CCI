#include <iostream>
#include "Entier.cpp"
using namespace std;


int main(){
    string largenum1 = "10 888 869 450 418 352 160 768 000 000";//"415645";//"9955";
    string largenum2 = "10 888 869 450 418 352 160 768 000 000";//"85665"; //"45";
    
    Entier grdnbr1(largenum1);
    Entier grdnbr2(largenum2);
    cout << endl;
    
    Entier ans = grdnbr1 + grdnbr2;
    ans.Afficher();
    

    return 0;
}