#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int times; cin >> times; while (times--){
	    int g, c; 
	    cin >> g >> c; 
	    
	    int height = (c*c)/(2*g);
	    cout << height << endl;
	}
	return 0;
}
