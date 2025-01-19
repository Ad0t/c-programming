#include<stdio.h>

void bubbleSort (int arr[], int n);
void optimizedBubbleSort (int arr[], int n);
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

void bubbleSort (int arr[], int n) {
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                swapper(&arr[j], &arr[j+1]);
            }
        }
    }
} 
void optimizedBubbleSort (int arr[], int n) {
    for (int i = n-1; i >= 0; i--) {
        int swapped = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                swapper(&arr[j], &arr[j+1]);
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
} 

int main () {
    int n = 6;
    int arr[] = {13,46,24,52,20,9};
    
    printf("Original array:\t");
    printArr(arr, n);
    
    bubbleSort(arr, n);
    optimizedBubbleSort(arr, n);
    
    printf("Sorted array:\t");
    printArr(arr, n);

    return 0;
}