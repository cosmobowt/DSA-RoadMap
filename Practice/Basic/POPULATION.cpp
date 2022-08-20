#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, x, y, z; 
	cin >> times; 
	while (times --){
	    cin >> x >> y >> z;
	    int pop = x - y + z;
	    cout << pop << endl;
	}
	return 0;
}
