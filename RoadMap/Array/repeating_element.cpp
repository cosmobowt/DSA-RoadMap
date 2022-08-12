

#include <bits/stdc++.h>
using namespace std;

int findRepeatingElement(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    
   
    return 0;
        
    
}
    

int main(){
    
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int res = findRepeatingElement(arr, n);
    if (res == 0){
        cout << "No Repeating Element" << endl;
    }
    
    else{
        cout << res << endl;
    }
    
}
