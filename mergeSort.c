#include <stdio.h>

void merge(int array[], int left, int mid, int right) {

  int n1 = mid - left + 1;
  int n2 = right - mid;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = array[left + i];
  for (int j = 0; j < n2; j++)
    M[j] = array[mid + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = left;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      array[k] = L[i];
      i++;
    } else {
      array[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    array[k] = L[i];
    i++;
    k++;
  }
 
  while (j < n2) { 
    array[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int array[], int left, int right) {

  if (left < right) {
    int mid = left + (right - left) / 2;
    mergeSort(array, left, mid);      //left half array
    mergeSort(array, mid + 1, right); //right half array
    merge(array, left, mid, right);
  }
}

int printArray(int array[], int size) {
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

    mergeSort(data, 0, arraySize - 1);
    printf("Sorted array: \n");
    printArray(data, arraySize);
}