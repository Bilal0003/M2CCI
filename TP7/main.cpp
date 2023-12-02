#include <iostream>
#include "Entier.cpp"

using namespace std;


int main(){
    string num1 = "9999";
    string num2 = "4";

    Entier bignum1(num1);
    Entier bignum2(num2);

    Entier nbr("27");
    cout << nbr.factoriel();
    
   

    
    return 0;
}