/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
   int times, x1, y1, x2, y2;
   cin >> times;
   
   while (times --){
       cin >> x1 >> y1 >> x2 >> y2;
       
       int first = x1 + y1;
       int second = x2 + y2;
       
       if (first > second){
           cout << second << endl;
       }
       
       else{
           
           cout << first << endl;
           
       }
       
   }
}
