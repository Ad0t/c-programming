#include<stdio.h>

void printArr (int arr[], int n);
void rotateArrayBy1 (int arr[], int n);

void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotateArrayBy1 (int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}


int main () {
    int n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArr(arr, n);
    rotateArrayBy1(arr, n);
    printArr(arr, n);
}