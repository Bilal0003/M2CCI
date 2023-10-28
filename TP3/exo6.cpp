#include <iostream>
#include <vector>

using namespace std;
// Écrire une fonction Identique qui passe en paramètre 2 tableaux d'entiers de dimension n et qui retourne
// la valeur true si les 2 tableaux sont identiques (i.e. meme valeur à la meme position), false sinon.



bool isIdentique(vector<int> t1, vector<int> t2){
    for (int i = 0; i < t1.size() ; i++){
        if (t1[i] != t2[i]){
            return false;
        }
    }
    return true;
}



int main(){
    vector<int> a {0,1,2};
    vector<int> b {0,1,2};
    cout << isIdentique(a,b);
    cout << endl;
    
    return 0;
}