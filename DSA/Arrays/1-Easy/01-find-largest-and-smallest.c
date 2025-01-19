#include <stdio.h>

int largestInArr (int arr[], int n);
int smallestInArr (int arr[], int n);

int largestInArr (int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }
    return largest;
}

int smallestInArr (int arr[], int n) {
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    return smallest;
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

    // printing the largest and smallest element
    printf("The largest element is: %d\n", largestInArr(arr, n));
    printf("The smallest element is: %d\n", smallestInArr(arr, n));
    return 0;
}