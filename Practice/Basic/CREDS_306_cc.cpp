#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, x, y, z; 
	cin >> times; 
	while(times--){
	    cin >> x >> y >> z; 
	    
	    int total = 4*x + y*2 + 0*z;
	    
	    cout << total << endl;
	}
	return 0;
}
