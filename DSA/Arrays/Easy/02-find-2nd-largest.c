#include <stdio.h>
#include <limits.h>

int secondLargestInArr (int arr[], int n) {
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++) {
        if (largest < arr[i]) {
            slargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallestInArr (int arr[], int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (smallest > arr[i]) {
            ssmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] != smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
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

    // printing the largest element
    printf("The second largest element is: %d\n", secondLargestInArr(arr, n));
    printf("The second smallest element is: %d\n", secondSmallestInArr(arr, n));
    return 0;
}