#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    int n; 
	    cin >> n;
	    int res;
	    
	    if ((n/4 >= 1) && (n%4 != 0)){
	        res = n/4 + 1; 
	    }
	    
	    else if ((n/4 > 1) && (n%4 == 0)){
	        res = n/4;
	    }
	    
	    else{
	        res = 1; 
	    }
	    
	    cout << res << endl;
	}
	return 0;
}
