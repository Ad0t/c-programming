#include<stdio.h>

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

void reverseArr (int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        swapper(&arr[i], &arr[n-i-1]);
    }
}


int main () {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printArr(arr, n);
    reverseArr(arr, n);
    printArr(arr, n);
    return 0;
}