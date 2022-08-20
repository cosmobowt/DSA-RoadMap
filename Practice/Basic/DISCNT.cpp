#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, x; 
	cin >> times; 
	while (times --){
	    int price; 
	    cin >> x;
	    price = 100 - x;
	    cout << price << endl; 
	}
	return 0;
}
