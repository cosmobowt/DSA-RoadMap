#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    int a, b, c, d; 
	    cin >> a >> b >> c >>d; 
	    if ((a + c == 180) || (b + d == 180)){
	        cout << "YES" << endl;
	    }
	    
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
