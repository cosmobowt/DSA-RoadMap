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
    
    result = x*y;
    
    result += (int)(x/3)*z;
    
    if (x%3 == 0){
        result -= z;
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
