#include <iostream>
#include <vector>

using namespace std;
//Écrire une fonction qui trie dans l'ordre croissant un tableau d'entier passé en paramètre en utilisant l'algorithme 
//du tri par bulle (utilisez la fonction permutation de deux entiers du TP2.1).

void Permute(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}


void BubbleSort(vector<int> &t){
    int nbr_permu = 1;
    while (nbr_permu != 0){
        nbr_permu = 0;
        for (int i=0; i < t.size()-1; i++){
            if (t[i] > t[i+1]){
                Permute(t[i],t[i+1]);
                nbr_permu += 1;
            }
        }
        if (nbr_permu==0){
            break;
        }
    }

}


void Aff(vector<int> t){
    for (int i=0;i<t.size();i++){
        cout << t[i] << " ";
    }
}


vector<int> Alea(int a,int b){
    int n {0};
    vector<int> t;
    cout << "Donnez la taille du tableau souhaité:";
    cin >> n;
    t.resize(n);
    for (int i=0;i<n;i++){
        t[i] = rand() % b + a;
    }
    return t;
}

bool isSorted(vector<int> t){
    for (int i=0; i<t.size()-1;i++){
        if (t[i] > t[i+1]){
            return false;
        }
    }
    return true;
}


int main(){
    vector<int> test;
    test = Alea(-100000,100000);
    BubbleSort(test);
    cout << isSorted(test);
    return 0;
}