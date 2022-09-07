#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	
	while (times--){
	    int A, B, C; 
	    cin >> A >> B >> C;
	    
	    if (((A + B)/2 < 35) || ((C + B)/2 < 35) || ((A + C)/2 < 35) ){
	        cout << "FAIL" << endl;
	    }
	    
	    else{
	        cout << "PASS" << endl;
	    }
	
}
return 0;
}
