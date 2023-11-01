#include <iostream>
#include "rationnel.cpp"

using namespace std;


int main(){
    rationnel a(8,6);
    rationnel b(4,3);
    rationnel c=a.Add(b);
    rationnel *ptr = new rationnel;
    cout << ptr;

    return 0;
}