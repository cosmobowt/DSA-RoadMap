#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; cin >> times; 
	while (times--){
	    int w, x, y, z;
	    cin >> w >> x >> y >> z;
	    
	    int dep = x - y;
	    int final = dep*z + w;
	    cout <<final << endl;
	}
	return 0;
}
