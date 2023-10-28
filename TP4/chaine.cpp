#include <iostream>
#include <string>
#include <vector>

using namespace std;



bool isPalindrome(string a){
    int m = a.size() / 2;
    
    for (int i=0; i < m ;i++){
        
        if (a[i] != a[ i + m + 1]){
            return false;
        }

    }
    return true;
}

void majiscule(string &a){
    string maj = "ABCDEFGHIJKLMNOPQRSTUXYZ";
    string min = "abcdefghijklmnopqrstuxyz";
    for (int i=0; i < a.size() ; i++){
        for (int j=0; j < min.size(); j++){
            if (a[i] == min[j]){
                a[i] = maj[j];
            }
        }
    }
}

bool isAlphabet1(string a){
    string alphabet = "abcdefghijklmnopqrstuxyzABCDEFGHIJKLMNOPQRSTUXYZ";
    for (int i =0; i < a.size(); i++){
        bool found = false;
        for (int j=0; j < alphabet.size(); j++ ){
            if (a[i] == alphabet[j])
            {
              found = true;  
            }   
        }
        if (!found){
                return false;
            }
        
    }
    return true;
}

int Comparer(string a, string b){
   int i=0, j= 0;
   bool egale = true;
    while (i < a.size() && j < b.size())
    {
        if (a[i] ==b[j]){
            i++;
            j++;
        }
        else if( a[i] > b[j]){
            egale = false;
            return 1; 
        }
        else{
            egale = false;
            return -1;
        }
    }
    if (a.size() == b.size() && egale){
        return 0;
    }
    else if (a.size() > b.size() && egale){
        return 1;
    }
    else{
        return -1;
    }
    
}

int power(int base, int exponent){
    int power =1;
    for (int i=0; i < exponent; i++){
        power *= base;
    }
    return power;
}

int Conversion(string a){
    string numchar = "0123456789";
    vector<int> t {0,1,2,3,4,5,6,7,8,9};
    int num =0;
    int len = a.size();
    for (int i=0; i<a.size(); i++){
        for(int j=0; j<numchar.size(); j++){
            if (a[i] == numchar[j]){
                num += t[j]*power(10,(len -1));    
            }
        }
        len -= 1;
    }
    return num;

}

void Aff(vector<int> t){
    for (int i=0;i<t.size();i++){
        cout << t[i] << " ";
    }
}

void VectorInit(vector<int> &t){
    for (int i=0;i<t.size();i++){
        t[i]=0;
    }
}

vector<int> Compte(string a, vector<int> n){
    VectorInit(n);
}



int main(){ 
    vector<int> n;
    cout << Conversion("23582");
    return 0;
}