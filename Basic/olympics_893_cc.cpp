#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, g1, s1, b1, g2, s2, b2;
	cin >> times;
	
	while (times --){
	    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
	    int t1 = g1 + s1 + b1;
	    int t2 = g2 + s2 + b2;
	    
	    if (t1 > t2){
	        cout << "1" << endl;
	    }
	    
	    else{
	        cout << "2" << endl;
	    }
	}
	return 0;
}
