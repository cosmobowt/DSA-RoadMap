#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    int x; 
	    int y; 
	    cin  >> x >> y;
	    
	    if (x <= y){
	        cout << x << endl; 
	    }
	    
	    else{
	        cout << y << endl;
	    }
	}
	return 0;
}
