#include<stdio.h>

int isSorted (int arr[], int n);

int isSorted (int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            return 0;
        }
    }
    return 1;
}

int main () {
    // // taking array specs
    // int n;
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    // int arr[n];
    // // taking the elements
    // printf("Enter %d elements:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }
    int n = 6;
    int arr[] = {23, 34, 55, 76, 43, 92};
    // int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", isSorted(arr, n));
    return 0;
}