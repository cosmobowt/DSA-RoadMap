#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, a, b, c;
	int result;
	cin >> times; 
	
	while (times--){
	    cin >> a >> b >> c; 
	    
	    
	    // Two Same are also considered 
	    if ((a >= b) && (a >= c)){
	        
	        result = a;
	        
	    }
	    
	    else if ((b >= a) && (b >= c)){
	        result = b; 
	    }
	    
	    else if ((c >= a) && (c >= b)){
	        result = c; 
	    }
	    
	    else{
	        result = a;
	    }
	    
	    cout << result << endl; 
	}
	return 0;
}
