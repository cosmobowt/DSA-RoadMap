/*********************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

************************************************************************/
#include <iostream>

using namespace std;

int equilibrium(int arr[], int n){
    
    int leftSum = 0;
    int sum = 0;
    
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    for (int i = 0; i < n; i++){
        sum -= arr[i];
        
        
        if (leftSum == sum){
            return i;
        }
        
        leftSum += arr[i];
        
        
    }
}


int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << equilibrium(arr, n) << endl;

    return 0;
}
