/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



int solve(){
    int x, y, z, result = 0;
    cin >> x >> y >> z;
    for (int i = 1; i <= x; i++){
        result += y;
        
        if ((i%3 == 0) && (i != x)){
            result += z;
        }
    }
    
    return result;
}
    
    

int main()
{
    
   int times;
   cin >> times;
   
   while (times --){
       cout << solve() << endl;
       
           
       }
       
        
   
}
