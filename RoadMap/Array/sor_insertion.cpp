#include<iostream>

using namespace std;


int sortedInsert(int arr[], int size, int capacity, int key){


    if (size >= capacity){
        return size;
    }
    int i;

    for (i = size -1; (i >= 0 && arr[i]>key); i--){
        arr[i+1] = arr[i];
    }

    arr[i+1] = key;

    return (size + 1);



}




int main()
{

    int arr[20] = {12, 15, 20, 25, 27};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int size = 5;

    int i, key;



    cout << "Before Insertion ->  ";

    for (i = 0; i < size; i++){
        cout << arr[i] << ' ' << flush;
    }

    cout << endl;

    cout << "Enter Element to Insert: ";
    cin >> key;

    cout << endl;


    int result = sortedInsert(arr, size, capacity, key);


    cout << "After Insertion -> ";

    for (i = 0; i < result; i++){
        cout << arr[i] << ' ' << flush;
    }



    

    return 0;
}
