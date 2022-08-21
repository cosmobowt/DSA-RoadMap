#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int times, p, q, res, sum;
	string serve; 
	cin >> times; 
	while (times --){
	    cin >> p >> q; 
	    
	    sum = p + q; 
	    
	    
	    if ((sum % 4 == 0) || (sum % 4 == 1)){
	        cout << "Alice" << endl;
	        
	    }
	    
	    else{
	        cout << "Bob" << endl;
	    }
	}
	return 0;
}
