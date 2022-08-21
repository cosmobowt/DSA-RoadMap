#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int times; 
	int n; 
	
	cin >> times;
	while (times--){
	    cin >> n; 
	    string a[n]; 
	    int start = 0, lime = 0;
	    
	    for (int i = 0; i < n; i++){
	        cin >> a[i];
	        
	        if (a[i] == "START38"){
	            start++;
	        }
	        
	        else if (a[i] == "LTIME108"){
	            lime++;
	        }
	        
	       
	    }
	    
	    
	    cout << start << ' ' << lime << endl;
	    
	    
	    
	}
	return 0;
}
