#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	int times = 0, n,x = 0;
	cin >>times;
	
	while (times --){
	    
	    cin >> n >> x;
	    
	    if (n > x){
	        int buy = n - x;
	        int packets = buy / 4;
	        if (buy % 4 != 0)
	            packets ++;
	        
	        cout << packets << endl;
	        
	    }
	    
	    else{
	        cout << 0 << endl;
	    }
	}
	
	return 0;
}
