#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 5, 11, 10};
    int size = (int)sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int count = 0;
    
    
    for (int i = 0; i < size-1; i++){
        
        for (int j = i+1; j < size; j++){
            if (arr[i] + arr[j] == target){
                cout << i << ' ' << j;
                return 0;
                
            }
        }
    }
}