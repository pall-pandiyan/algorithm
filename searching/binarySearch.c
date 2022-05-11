#include<stdio.h>
void printArray(int arr[], int size);
int binarySearch(int arr[], int size, int target);

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size-1;

    while(start <= end) {
        int mid = (start+end) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,3,5,8,11,15,19,32,42,45,46,60,76,100};
    int size = sizeof (arr) / sizeof (*arr);
    // printf("size is %d\n", size);
    int target,result;

    printf("Enter the target to find: ");
    scanf("%d", &target);

    result = binarySearch(arr, size, target);

    if (result >= 0) {
        printf("The array is: ");
        printArray(arr, size);
        printf("The target (%d) found at %d position!\n", target, (result+1));
    } else {
        printf("The target is not found!\n");
    }
    return 0;
}