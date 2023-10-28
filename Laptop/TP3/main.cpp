#include <iostream>
#include "tp3.cpp"


int main(){
    F a(2);
    F b(3,2);
    F c;
    //c = Add(a,b);
    c.Aff();
    if (isNull(c)){
        cout << "frac nul" << endl;
    }
    return 0;
}