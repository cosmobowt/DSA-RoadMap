#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int times; cin >> times; while (times--){
	    int n;
	    cin >> n;
	    int a[n]; double prd = 1;
	    
	    for (int i = 0; i < n; i++){
	        cin >> a[i]; 
	        prd = prd*a[i];
	        
	    }
	    
	    if (prd < 0){
	        cout << 1 << endl;
	    }
	    
	    else {
	        cout << 0 << endl;
	    }
	}
	return 0;
}
