#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    int w, x, y, z; 
	    cin >> w >> x >> y >> z; 
	    
	    if ((x+y == w) || (z+y == w) || (x + y + z == w) || (x+z == w) || (x == w) || (y == w) || (z == w)){
	        cout << "YES" << endl;
	    }
	    
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
