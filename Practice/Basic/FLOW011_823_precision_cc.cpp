#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times--){
	    float salary, HRA, DA, gross;
	    
	    cin >> salary; 
	    
	    if (salary < 1500.00){
	        HRA = 10*salary/100;
	        DA = 90*salary/100;
	    }
	    
	    else{
	        HRA = 500;
	        DA = 98*salary/100;
	    }
	    
	    
	    gross = salary + HRA + DA;
	    
	    cout << fixed<<setprecision(2) << gross<< endl; // set precision to 2 digits
	    
	}
	return 0;
}
