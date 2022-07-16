#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times, h, m = 0;
	cin >> times;
	while(times --){
	    cin >> m >> h;
	    int bmi = m/(h*h);
	    cout << bmi << " " << flush;
	    
	    if (bmi <= 18){
	        cout << "1" << endl;
	    }
	    
	    else if ((19 <= bmi) && (bmi <= 24)){
	        cout << "2" << endl;
	    }
	    
	    else if ((25<=bmi) &&  (bmi <= 29)){
	        cout << "3" << endl;
	    }
	    
	    else if (bmi >= 30){
	        cout << "4" << endl;
	    }
	}
	return 0;
}
