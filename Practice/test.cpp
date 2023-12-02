#include <iostream>
#include <vector>
#include <string>

using namespace std;



   
string reverseWords(string s) {
    string ans;
    string word;
    vector<string> words;
    for(int i =0 ; i < s.size(); i++){
        while(s[i]!= ' ' && i != s.size() ){
            
            word += s[i];
            i++;
        }
        if(!word.empty()) words.push_back(word);
        word ="";
        
    }

    for(int j = words.size() -1 ; j >=0; j--){
        ans += words[j];
        if (j!=0) ans+= " "; 
    }
    return ans;
}



int main() {
    string s = " asdasd df f";
    cout << reverseWords(s);
    
  
    return 0;
}