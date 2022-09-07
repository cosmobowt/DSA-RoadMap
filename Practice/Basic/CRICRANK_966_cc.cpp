#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; 
	cin >> times; 
	while (times --){
	    int a[3], b[3]; 
	    int ca = 0, cb = 0;
	    
	    for (int i =0;  i < 3; i++){
	        cin >> a[i];
	       
	    }
	    
	    for (int i =0;  i < 3; i++){
	        cin >> b[i];
		}
	    
	    for (int i =0;  i < 3; i++){
	        if (a[i] > b[i]){
	            ca++;
	        }
	        
	        else{
	            cb++;
	        }
	       
	    }
	    
	    if (ca > cb){
	        cout << "A" << endl;
	    }
	    
	    else{
	        cout << "B" << endl;
	    }
	    
	    
	}
	return 0;
}
