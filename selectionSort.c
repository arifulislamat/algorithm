#include<stdio.h>

void swap(int array[], int i, int p){
    int temp = array[i];
    array[i] = array[p];
    array[p]= temp;
}

void selectionSort(int array[], int arraySize){
    for(int i=0; i<(arraySize-1);i++){
        int p =i;
        for(int j=i+1; j < arraySize; j++){
            if(array[p]>array[j]){
                p=j;
            }
        }
        if(p!=i){
            swap(array, i, p);
        }
    }
}

void printArray(int array[], int size){
    printf("Here is the sorrted array: ");
    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
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
    selectionSort(data, arraySize);
    printArray(data, arraySize);
}

//arifulislamat@gmail.com