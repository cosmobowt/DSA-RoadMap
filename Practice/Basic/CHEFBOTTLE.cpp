#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; cin >> times; while (times--){
	    int n, x, k;
	    cin >> n >> x >> k;
	    
	    
	    
	    int bottle = k/x;
	    
	    if (bottle >= n){
	        cout << n << endl;
	    }
	    
	    else{
	        cout << bottle << endl;
	    }
	}
	return 0;
}
