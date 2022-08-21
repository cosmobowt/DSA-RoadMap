#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times;
	char s[5]; 
	char t[5];
	
	cin >> times; 
	while (times--){
	    char h[5];
	    for (int i = 0; i < 5; i++){
	        
	        cin >> s[i] >> t[i];
	        
	        if (s[i] != t[i]){
	            
	            h[i] = 'B';
	            
	        }
	        
	        else{
	            h[i] = 'G';
	        }
	    }
	    
	    
	    for (int i = 0; i < 5; i++){
	        cout << h[i];
	        
	    }
	    
	    cout << endl;
	    
	}
	return 0;
}
