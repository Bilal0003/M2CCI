#include <iostream>
#include <vector>

using namespace std;

//Fct saisie tableau
vector<float> S(){                        // void S(vector<float> &T){
    vector<float> T;                    // int n; cin >>n;
    int n {0};                           // T.resize(n)
    cin >> n;                           // for (blablabla)
    T.resize(n);                        /// }
    for (int i=0; i<n; i++){
        cin >> T[i];
    }
    return T;
}
// affichage tableau
void A(vector<float> T){                // to be efficiant, we better use void A (const vector<float> &T), cus if A is large, "passage par copie" would cost more time
    for(int i=0; i<T.size();i++){       // working on costly variables (vectors...) -> passage par const &
        cout << T[i] << " " ;           
    }
}

// vector<float> P(vector<float> &T){
//     int i{0};
//     int n = 4;
//     T.resize(n);
//     int j= T.size();
//     int c {0};
//     while (i!=j){
//         c = T[i];
//         T[i] = T[j];
//         T[j] = c;
//         i++;
//         j--;
//     }
//     return T;
// }

void P(vector<float> &T){
    for (int i=0; i<T.size()/2;i++){        //amelioration 1: avoir une fonction echange E(int,int) qu'on apple a l'interieur de la procedure
float x= T[i];                          // const int n=T.size(), good coding habit to declare const n. (si code long, ~60 lignes, vaut mieux savoir que n ne changera pas, donc declaer en const    )
        T[i] = T[T.size()-1-i];
        T[T.size()-1-i] = x;
    }
}

float Somme(const vector<float> &T){
    int sum {0};
    for (int i=0; i<T.size(); i++){
        sum += T[i];
    }
    return sum;
}

float Moyenne(const vector<float> &T){
    return (Somme(T)/T.size());
}

int main(){
    vector<float> t; // to call the function S, we define a vector and assigne to it whatever S returns.
    t = S();
    P(t);
    A(t);
    cout << Somme(t) << endl;
    cout << Moyenne(t);
    return 0;
}