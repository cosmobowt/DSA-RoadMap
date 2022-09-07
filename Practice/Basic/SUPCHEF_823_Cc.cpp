#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    int m, n, k; 
	    cin >> m >> n >>k;
	    
	    if (m - (n*k) > 0){
	        cout << "YES" << endl;
	    }
	    
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
