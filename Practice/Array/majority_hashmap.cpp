/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>


using namespace std;


void findMajority(int arr[], int n){
    unordered_map<int, int> m;
    
    sort(arr, arr+n);
    for (int i = 0; i < n; i++){
        m[arr[i]]++;
        
    }
    
    int count = 0;
    
    for (auto i:m){
        cout << i.first << ' ' << i.second << endl;
        if (i.second > n/2){
            count = 1;
            cout << "Majority Found - " << i.first << endl;
            break;
        }
    }
    
    if (count == 0){
        cout << "No Majority Found" << endl;
    }
    
    
    
}


int main()
{
    int arr[] = {2, 2, 2, 2, 5, 5, 2, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    findMajority(arr, n);

    return 0;
}