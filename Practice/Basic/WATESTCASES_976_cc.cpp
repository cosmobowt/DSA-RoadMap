#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, n;
	string v;
	
	cin >> times;
	
	while (times--){
	    cin >> n; 
	    int s[n];
	    int count = 0;
	    int temp;
	    
	    for (int i = 0; i < n; i++){
	        cin >> s[i];
	    }
	    
	    cin >> v;
	    
	    
	    
	    
	    for (int i = 0; i < n; i++){
	        if (v[i] == '0'){
	           
	           if (count == 0){
	           temp = s[i];
	           count++;
	           }
	           
	          if (count > 0){
	              if (temp > s[i]){
	                  temp = s[i];
	              }
	          }
	          
	          
	           
	           
	           
	           
	           
	        }
	    }
	    
	    
	    
	    cout << temp << endl;
	    
	    
	}
	return 0;
}
