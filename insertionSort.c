#include <stdio.h>

void insertionSort(int array[], int size){
    for (int step = 1; step<size; step++){
        int right = array[step];
        int left = step - 1;

        while (right < array[left]&&left>=0){
            array[left+1]=array[left];
            --left;
        }
        array[left+1]=right;
    }
}

void printArray(int array[], int size){
    printf("\nSorted array in ascending order: ");
    for (int i=0;i<size;i++){
        printf("%d  ",array[i]);
    }
}

int main(){
    int arraySize;

    printf("Enter the array size: ");
    scanf("%d",&arraySize);
    int data[arraySize];
    printf("Enter the array elements: ");
    for(int i=0;i<arraySize;i++){
        scanf("%d",&data[i]);
  }

  insertionSort(data, arraySize);
  printArray(data, arraySize);
}