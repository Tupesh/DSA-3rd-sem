#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int lb, int ub) {

  int pivot = array[ub];

  int i = (lb - 1);


  for (int j = lb; j < ub; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[ub]);

  return (i + 1);
}

void quickSort(int array[], int lb, int ub) {
  if (lb < ub) {

    int pi = partition(array, lb, ub); 
    quickSort(array, lb, pi - 1);

    quickSort(array, pi + 1, ub);
  }
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {2, 7, 9, 1, 0, 9, 3};
  int n = sizeof(data) / sizeof(data[0]);
  printf("Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}