#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s,t;
	    cin>>s>>t;
	    string m="";
	    for(int i=0;i<s.size();i++){
	        if(s[i]==t[i]){
	            m+='G';
	        }
	        else m+="B";
	    }
	    cout<<m<<endl;
	}
	return 0;
}
