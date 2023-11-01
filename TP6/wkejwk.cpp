#include <iostream>
#include <vector>
using namespace std;


void Aff(vector<int> j){
    for (int i=0;i<j.size();i++){
        cout << j[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> t {1,2};
    vector <int> b=t;
    t.push_back(2);
    cout << Aff(b) << endl ;

    return 0;
}