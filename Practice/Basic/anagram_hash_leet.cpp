#include <bits/stdc++.h>
using namespace std;



int anagram(string c, string t){
    
    if (c.size() != t.size()){
        return false;
        
    }
    
    unordered_map <char, int> m1, m2;
    
    for (int i =0; i < c.size(); i++){
        m1[c[i]]++;
    }
    
    for (int i =0; i < c.size(); i++){
        m2[t[i]]++;
    }
    
    for (int i =0; i < c.size(); i++){
        if (m1[c[i]] != m2[c[i]]){
            return false;
        }
    }
    
    return true;
    
    
}

int main(){
    cout << "Enter String";
    string c;
    string t;
    
    cin >> c; 
    cin >> t;
    
    cout << anagram(c, t) << endl;
    
    
}