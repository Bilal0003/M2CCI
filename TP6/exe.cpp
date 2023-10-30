#include <iostream>
#include "rationnel.cpp"

using namespace std;


int main(){
    rationnel a(8,6);
    rationnel b(4,3);
    b.Inv();
    b.Aff();

    return 0;
}