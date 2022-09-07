#include <iostream>
using namespace std;

int main() {
    int times; 
    cin >> times; 
    while (times--){
        int n, x, y;
        cin >> n >> x >> y; 
        
        int able = ((n+1)*y);
        
        if (able >= x){
            cout << "YES" << endl;
            
        }
        
        else {
            cout << "NO" << endl;
        }
    }
	// your code goes here
	return 0;
}
