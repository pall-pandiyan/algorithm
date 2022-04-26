#include<stdio.h>

void printArray(int arr[], int arraySize);
void insertionSort(int arr[], int arraySize);

void insertionSort(int arr[], int arraySize) {

    for (int i = 1; i < arraySize; i++) {
        int key = arr[i];
        int j = i - 1;
 
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // for(int i=0; i<arraySize; i++) {
    //     for(int j=i+1; j<arraySize; j++) {
    //         if(arr[i] > arr[j]) {
    //             // if value of n element is greater than (n+1), swap them
                
    //             // int temp = arr[i];
    //             // arr[i] = arr[j];
    //             // arr[j] = temp;

    //             arr[i] = arr[i]+arr[j] - (arr[j]=arr[i]);
    //         }
    //     }
    // }
}

void printArray(int arr[], int arraySize) {
    for(int i=0; i<arraySize; i++) {
        printf("%d ",arr[i]);
    }
}

int main() {
    int arr[] = {5,3,1,10,4,8};
    int arraySize = sizeof arr / sizeof arr[0];

    printf("INSERTION SORT:\n");
    printf("--------- -----\n");

    printf("Array before sorting: ");
    printArray(arr, arraySize);
    
    insertionSort(arr, arraySize);

    printf("\nArray after sorting: ");
    printArray(arr, arraySize);

    printf("\n");
    return 0;
}

// the output will be...

// INSERTION SORT:
// --------- -----
// Array before sorting: 5 3 1 10 4 8 
// Array after sorting: 1 3 4 5 8 10