#include <iostream>
#include "Entier.cpp"
using namespace std;

/* std::string Convert(long long n){
    string num = "";
    string current_char ;
    int i =0;
    while(n/10 >0){
        i = n%10;
        current_char = to_string(i);
        num.append(current_char);
        n=n/10;
    }
    num.append(to_string(n));
    return num;
} 
 */

int main(){
    long long z= 10888869450418352160768000000;
    string largenum = to_string(z);
    cout << z;
    return 0;
}