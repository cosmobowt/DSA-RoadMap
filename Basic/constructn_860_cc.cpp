#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int times,n = 0;
	cin >> times;
	while (times --){
	    
	    cin >> n;
	    int x, y = 0;
	    int flag = 0;
	    
	    for (x = 0; x <= n; x++){
	        for (y = 0; y <= n; y++){
	            
	            if ((2*x + 7*y) == n){
	                cout << "YES" << endl;
	                flag = 1;
	                break;
	            }
	        }
	        
	    }
	    
	    if (flag != 1){
	        cout << "NO" << endl;
	    }
	        
	    
	}
	
	
	
	
	
	return 0;
}
