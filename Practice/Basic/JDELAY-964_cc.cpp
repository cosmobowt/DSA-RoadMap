#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t; 
	while (t--){
	    int n;
	    int count = 0; 
	    cin >> n; 
	   
	    int S[n]; 
	    int J[n];
	    
	    for (int i = 0; i < n; i++){
	        cin >> S[i] >> J[i];
	        
	        if ((J[i] - S[i]) > 5){
	            count++; 
	        }
	    }
	    
	    cout << count << endl;
	    
	}
	return 0;
}
