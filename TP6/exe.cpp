#include <iostream>
#include "rationnel.cpp"

using namespace std;


int main(){
    rationnel a(7,6);
   
    rationnel b(4,3);
    rationnel c = a * b;
    c.Aff();
    
    

    return 0;
}