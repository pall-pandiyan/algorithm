#include<stdio.h>

int linearSearch(int arr[], int size, int target);

int linearSearch(int arr[], int size, int target) {

  for(int ind=0; ind<size; ind++) {
    if(arr[ind] == target) {
      return ind;
    }
  }
  return -1;
}

int main() {
  int arr[] = {10,1,5,20,13,15,100,210,9};
  int size = sizeof (arr) / sizeof (*arr);
  int target, result;

  printf("Enter the target: ");
  scanf("%d", &target);
  result = linearSearch(arr, size, target);
  
  printf("The array is: ");
  for( int i=0; i<size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  if(result >= 0) {
    printf("Target (%d) is found at %d position!\n", target, (result+1));
    return 1;
  } else {
    printf("Target is not found!");
    return 0;
  }

}

// the output will be...

// Enter the target: 15
// The array is: 10 1 5 20 13 15 100 210 9 
// Target (15) is found at 6 position!