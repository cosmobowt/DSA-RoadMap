#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int times; cin >> times; while (times--){
	    int n, z_count = 0, o_count = 0; cin >> n; 
	    string s; 
	    cin >> s; 
	    
	    if (n <= 2){
	        cout << s << endl;
	    }
	    
	    else{
	        
    	    for (int i = 0; i < n; i ++){
    	        if (s[i] =='0'){
    	            z_count++; 
    	        }
    	        
    	        else if (s[i] == '1'){
    	            o_count++;
    	        }
    	    }
    	    
    	    if ((z_count == n) || (o_count == n)){
    	        cout << s << endl;
    	        continue;
    	    }
    	    
    	    
        	s = "";
    	    for (int i = 0; i < z_count; i++){
    	        s += '0'; 
    	    }
    	    
    	    for (int i = 0; i < o_count; i++){
    	        s += '1'; 
    	    }
    	    
    	    cout << s << endl;
    	    
	    
    	    
    	    
    	    
    	    
	    }
	    
	    
	    
	  
	    
	    
	    
	    
	}
	return 0;
}
