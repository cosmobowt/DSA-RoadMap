/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    char test = s[0];
    
    int count = 0;
   
    for ( int i = 0; i < n; i++){
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')){
           
            
            count = 0;
            
        }
        
        else{
            count += 1;
            if (count >= 4){
                return -1;
                }
            
        }
    }
    
    return 1;
}

int main()
{
   int t;
   cin >> t;
   while (t--){
       int res = solve();
       
       if (res == -1){
           cout << "NO" << endl;
       }
       
       else{
            cout << "YES" << endl;
       }
   }
    return 0;
}
