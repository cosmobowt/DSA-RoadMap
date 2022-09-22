#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; cin >> times; while (times--){
	    int a0, b1; 
	    cin >> a0;
	    cin >> b1;
	    
	    if ((((a0 > 1) && (b1 > 1))) && (((a0 % 2 != 0) && (b1 % 2 == 0)) || ((a0 % 2 == 0) && (b1 %2 != 0)) || ((a0 % 2 == 0) && (b1 % 2 == 0)))){
	        cout << "Yes" << endl;
	    }
	    
	    else{
	        cout << "No" << endl;
	    }
	    
	    
	     
	}
	
	return 0;
}
