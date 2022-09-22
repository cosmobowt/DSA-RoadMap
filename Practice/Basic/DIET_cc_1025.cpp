#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t; while (t--){
	    int n, k;
	    
	    cin >> n >> k;
	    int a[n];
	    int protein = 0;
	    int store = 0, count = 0, flag = 0; 
	    int cur = 0;
	    
	    for (int i = 0; i < n; i++){
	        cin >> a[i];
	        
	    }
	    
	    
	    for (int i = 0; i < n; i++){
	        protein = protein + a[i];
	        if (k <= protein){
	            count++; 
	            protein = protein - k;
	        }
	        
	        else{
	            flag++;
	            if (flag == 1){
	                store = i + 1; 
	            }
	        }
	       
	        
	        
	        
	    }
	    
	    if (count == n){
	        cout << "YES" << endl;
	    }
	    
	    else{
	        cout << "NO" << ' ' << store << endl;
	    }
	    
	    
	}
	return 0;
}
