#include <stdio.h>

int swap(int array[], int i){
    int temp = array[i];
    array[i] = array[i + 1];
    array[i + 1] = temp;
    
}

int bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {

    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        swap(array, i);
        swapped = 1;
      }
    }
    if (swapped == 0)
      break;
  }
}

int printarray(int array[], int size) {
    printf("\nSorted Array in Ascending Order: ");
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int arraySize;

  printf("Enter the array size: ");
  scanf("%d",&arraySize);
  int data[arraySize];
  printf("Enter the array elements: ");
  for(int i=0;i<arraySize;i++){
    scanf("%d",&data[i]);
  }

  bubbleSort(data, arraySize);
  printarray(data, arraySize);
}