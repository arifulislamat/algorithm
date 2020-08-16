#include<stdio.h.>

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int partition(int array[], int low, int high){
    int pivot = array[high];
    int i = (low-1);
    for (int j=low; j<high; j++){
        if (array[j]<=pivot){
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i+1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high){
    if (low < high){
        int pi = partition(array, low, high);
        quickSort(array,low,pi -1);
        quickSort(array, pi+1, high);
    }
}

void printArray(int array[], int size){
    for (int i = 0; i<size; ++i){
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
    quickSort(data, 0, arraySize-1);
    printArray(data,arraySize);
}