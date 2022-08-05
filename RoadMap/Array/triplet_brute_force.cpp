

#include <bits/stdc++.h>
using namespace std;

void tripletSearch(int arr[], int n, int target){
    int count = 0;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (arr[i] + arr[j] + arr[k] == target){
                    cout << arr[i] << ' ' <<  arr[j] <<  ' ' << arr[k] << endl;
                    count++;
                }
            }
        }
    }
    
    if (count == 0){
        cout << "Not Found" << endl;
    }

        
};


int main()
{
    
    int arr[] = {12, 3, 4, 1, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 24;
    
    tripletSearch(arr, n, target);
}



