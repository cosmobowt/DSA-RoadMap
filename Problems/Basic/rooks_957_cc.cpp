#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, x1,y1, x2, y2;
	cin >> times;
	while (times --){
	    cin >> x1 >> y1 >> x2 >> y2;
	    if ((x1 == x2) || (y1 == y2)){
	        cout << "YES" << endl;
	        
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
