#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        


        for (j = i - 1;j >= 0 && arr[j] > temp;j--) {
            arr[j + 1] = arr[j];
            
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int array[] = {95, 510, 21, 9, 31}; 
    int arraySize = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    insertionSort(array, arraySize);

    printf("Insertion sort array: \n");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}