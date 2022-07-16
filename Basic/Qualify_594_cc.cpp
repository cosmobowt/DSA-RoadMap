#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, x, a, b = 0;
	cin >> times;
	while(times --){
	    cin >> x >> a >> b;
	    
	    if ((a + 2*b) >= x ){
	        cout << "QUALIFY" << endl;
	    }
	    
	    else{
	        cout << "NotQualify" << endl;
	    }
	}
	return 0;
}
