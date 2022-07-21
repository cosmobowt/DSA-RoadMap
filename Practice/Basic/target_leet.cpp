/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int finder(int arr[], int n, int target){
    int flag = 1;
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            flag = 0;
            return i;
            
        }
        
    }
    
    int flag_1 = 0;
    if (flag == 1){
        for (int i = 0; i < n; i++){
            if (arr[i] > target){
                flag_1 = 1;
                return i;
            }
        }
        
        
        if (flag_1 == 0){
            return n;
        }
    }
    
    return 0;
};


int main()
{
    int arr[] = {1, 3, 5, 6};
    int n  = sizeof(arr)/sizeof(arr[0]);
    
    int res = finder(arr, n, 7);
    cout << res << endl;
    
    return 0;
}
