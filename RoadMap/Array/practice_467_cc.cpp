#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int p1, p2, p3, p4;
	
	cin >> p1 >> p2 >> p3 >> p4;
	
	int arr[] = {p1, p2, p3, p4};
	int i;
	int count = 0;
	for (i = 0; i < 4; i++){
	    if (arr[i] >= 10){
	        count++;
	    }
	}
	cout << count << endl;
	return 0;
}
