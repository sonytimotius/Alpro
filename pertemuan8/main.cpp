#include <iostream>

using namespace std;

bool isOdd(int n){
    return n % 2 == 1;
}

void minEven(int arr[], int n){
    int value = INT_MAX;
    int index = 0;
    for(int i = 0; i < n; i++){
        if(!isOdd(arr[i])){
            if(arr[i] < value){
                value = arr[i];
                index = i;
            }
        }
    }
    cout << "\nElement: " << value << endl;
    cout << "Index: " << index << endl;
}

void bubbleSort(int arr[], int size){
    for(int step = 0; step < (size - 1); step++){
        for(int i = 0; i < (size - step - 1); i++){
            if(arr[i] < arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int size){
    for(int step = 1; step < size; step++){
        int key = arr[step];
        int j = step - 1;
        while(key > arr[j] && j >= 0){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void print_arr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << "";
    }
}

int main()
{
    int arr[] = {1,3,5,6,4,2};
    int n = sizeof(arr)/sizeof(int);
    cout << "Element array: ";
    print_arr(arr,n);
    minEven(arr,n);

    cout << "\nBubbleSort" << endl;
    cout << "Unsorted: ";
    print_arr(arr,n);
    bubbleSort(arr,n);
    cout << "\nSorted: ";
    print_arr(arr,n);
    cout << "" << endl;

    cout << "\nInsertionSort" << endl;
    cout << "Unsorted: ";
    print_arr(arr,n);
    insertionSort(arr,n);
    cout << "\nSorted: ";
    print_arr(arr,n);
    return 0;
}
