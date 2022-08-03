#include <bits/stdc++.h>

// XOR Method -> '^' is the XOR operator
// n^n = 0
// a^b = b^a

using namespace std;

int firstElement(int arr[], int n){
    int res = arr[0];
    for (int i = 1; i < n; i++){
        res = res^arr[i];
    }
    
    return res;
}

int main()
{
    
    int arr[] = {2, 3, 5, 3, 4, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Element: " << firstElement(arr, n) << endl;
}



