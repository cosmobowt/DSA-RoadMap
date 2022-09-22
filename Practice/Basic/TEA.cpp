#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int times; cin >> times; while (times--){
	    
    float x, y, z;
	
	cin >> x >> y >> z;
	
	int num = ceil(x/y);
	
	cout << num*z << endl;
	}
	return 0;
}
