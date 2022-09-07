#include <iostream>
using namespace std;

int main() {
    int times;
    cin >> times; 
    while (times--){
        int a=0, b=0;
        string s; 
        cin >> s; 
        
        for (int i =0; i < s.length(); i++){
            if (s[i] == 'a'){
                a++; 
            }
            
            else if(s[i] == 'b'){
                b++;
            }
        }
        
        if (a >= b){
            cout << b << endl;
        }
        
        else{
            cout << a << endl;
        }
        
        
        
    }
	// your code goes here
	return 0;
	
}
