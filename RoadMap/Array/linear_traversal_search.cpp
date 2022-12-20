/******************************************************
******************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

************************************************************************/

#include <iostream>

using namespace std;

int find(int arr[], int size, int key){
    int i;
    for (i = 1; i < size; i++){
        if (arr[i] == key){
            return i;
        }
        
        
    }
    
    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    
    int key = 6;
    int position = find(a, n, key);
    
    if (position == -1){
        cout << "Element Not Found" << endl;
    }
    else{
        cout << "Element Found at Position " << position + 1 << flush;
    }
    return 0;
    
    

    
}
