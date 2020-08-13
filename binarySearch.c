#include <stdio.h>

int readme(int array[], int arraySize){
    printf("\nWe have an array of: ");
    for(int i=0;i<arraySize;i++){
        printf("%d  ",array[i]);
    }
    return 0;
}

int binarySearch(int array[], int key, int left, int right) {
  while (left <= right) {
    int mid = (left + right) / 2;

    if (array[mid] == key)
      return mid;

    if (array[mid] < key){
      left = mid + 1;

    }else
      right = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {2, 4, 8, 32, 64, 128, 256};
  int key;
  int arraySize = sizeof(array) / sizeof(array[0]);

  readme(array, arraySize);  
  printf( "\nEnter an element from the list: ");
  scanf("%d",&key);

  int result = binarySearch(array, key, 0, arraySize - 1);
  if (result == -1)
    printf("\nElement %d not exist inside the array.",key);
  else
    printf("\nElement is found at index of: %d", result);

  return 0;
}