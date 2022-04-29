#include<stdio.h>
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int arr[], int size) {
    for (int i=0; i<size; i++) {
        for (int j=0; j<size-1; j++) {
            if(arr[j]>arr[j+1]) {
                // if the element and its next element is not in order swap them
                arr[j] = (arr[j]+arr[j+1]) - (arr[j+1]=arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {1,10,3,5,1,2,4};
    int size = sizeof(arr) / sizeof(*arr);
    // printf("%d",size);

    printf("Bubble Sort:\n");
    printf("Before sorting: ");
    printArray(arr, size);
    printf("\n");

    bubbleSort(arr, size);

    printf("After sorting: ");
    printArray(arr, size);
    printf("\n");
    return 0;
}

// the output will be...

// Bubble Sort:
// Before sorting: 1 10 3 5 1 2 4 
// After sorting: 1 1 2 3 4 5 10