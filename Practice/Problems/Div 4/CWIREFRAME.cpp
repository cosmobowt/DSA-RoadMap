#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    int n, m, x; 
	    cin >> n >> m >> x;
	    
	    cout << 2*(n + m)*x << endl;
	}
	return 0;
}
