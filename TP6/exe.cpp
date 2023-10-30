#include <iostream>
#include "rationnel.cpp"

using namespace std;

int main(){
    rationnel a(2,3),b(1,3);
    rationnel d = Multip(a,b);
    d.Aff();

    return 0;
}