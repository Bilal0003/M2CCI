#include <iostream>

using namespace std;

void L(int,int);
void R(int,int,char);
int main(){ 
    R(4,4,'*');
    return 0;
}

void L(int n, char c){
    
    for (int i=0; i < n; i++){
        cout << c;
    }
    cout << endl;
}

void R(int l, int h,char c){
    for (int i=0; i < h ; i++){
        L(l,c);
    }
    
}

