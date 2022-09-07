#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    int x; 
	    cin >> x; 
	    if (x <=300){
	        cout << 3000 << endl;
	        
	    }
	    
	    else{ 
	        cout << x*10 << endl;
	    }
	}
	return 0;
}
