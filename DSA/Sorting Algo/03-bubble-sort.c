#include<stdio.h>

void insertionSort (int arr[], int n);
void swapper (int *x, int *y);
void printArr (int arr[], int n);

void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swapper (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertionSort (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swapper(&arr[j - 1], &arr[j]);
            j--;
        }
    }
} 

int main () {
    int n = 6;
    int arr[] = {13,46,24,52,20,9};
    
    printf("Original array:\t");
    printArr(arr, n);
    
    insertionSort(arr, n);
    
    printf("Sorted array:\t");
    printArr(arr, n);

    return 0;
}