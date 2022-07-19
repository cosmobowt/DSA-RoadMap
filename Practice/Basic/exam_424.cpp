#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, a, b, c = 0;
	cin >> times;
	
	while(times --){
	    cin >> a >> b >> c;
	    int sum = a + b + c;
	    
	    
	    if ((sum >= 100) && (a >= 10) && (b >= 10) && (c>= 10)){
	        cout << "PASS" << endl;
	    }
	    else{
	        cout << "FAIL"<< endl;
	    }
	}
	return 0;
}
