#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    int n, k; 
	    cin >> n >> k; 
	    int left = k;
	    int a[n];
	    
	    for (int i = 0; i < n; i++){
	        cin >> a[i];
	         
	        if (left  >= a[i]){
	            cout << 1;
	            left = left - a[i];
	        } 
	        
	        else {
	            cout << 0; 
	        }
	        
	        
	        
	        
	        
	    }
	    
	    cout << endl;
	    
	}
	return 0;
}
