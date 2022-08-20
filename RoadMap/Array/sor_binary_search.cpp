#include<iostream>

using namespace std;


int binary_search(int arr[], int low, int high, int key){
    if (high < low){
        return -1;

    }

    int mid = (high+low)/2;

    if (arr[mid] == key){
        return mid;
    }

    if (arr[mid] < key){
        return binary_search(arr, (mid + 1), high, key);
    }

    return binary_search(arr, low, (mid -1), key);
}




int main()
{

    int arr[] = {2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout << "Enter Element to Search: ";
    cin >> key;
    size = size - 1;

    int result = binary_search(arr, 0, size , key);
    if (result == -1){
    cout << "Element not located" << endl;
    }

    else{
        cout << "Element Located at ->  " << result << endl;

    }


    return 0;
}




