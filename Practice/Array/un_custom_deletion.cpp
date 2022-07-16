#include<iostream>

using namespace std;



int deletion_element(int arr[], int size, int key){

    int position = size + 20; 
    for (int i = 0; i < size; i++){
        if(arr[i] == key){
            position = i;
        }
    }

    if (position >= size){
        return 0;
        
    }

    for (int i = position; i <= size; i++){
        
        arr[i] = arr[i+1];
        if (i+1 == size){
            return (size -1);
        }
    }

    


}


int deletion(int arr[], int size, int position){

    

    if (position >= size){
        return 0;
        
    }

    for (int i = position; i <= size; i++){
        
        arr[i] = arr[i+1];
        if (i+1 == size){
            return (size -1);
        }
    }

    


}
int main()
{


    int arr[25] = {1, 2, 3, 4, 5};
    int size = 5; 
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int position, key;



    cout << "Before Deletion ->  ";

    for (int i = 0; i < size; i++){
        cout << arr[i] << " " << flush;

    }

    
    cout  << "\nEnter Element: ";
    cin >> key;
    // cout << "\nPosition: ";

    // cin >> position;
    // position = position -1;

    // int result = deletion(arr, size, position);
    int result = deletion_element(arr, size, key);

    
    if (result == 0){
        cout << "Element Not Found" << endl;
        return 0;
        exit(0);
    }
    
    //  if (result == 0){
    //     cout << "Invalid Position" << endl;
    //     return 0;
    //     exit(0);
    // }


    cout << "After Deletion ->  ";

    for (int i = 0; i < result; i++){
        cout << arr[i] << " " << flush;

    }

    



    return 0;
}
