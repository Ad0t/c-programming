#include<stdio.h>

void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotateArrayByK_BRUTE (int arr[], int n, int k) {
    k = k % n;

    int temp[k];
    // stores the temporary array (first k elements that will go to the last)
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    // shifts the rest of the array to the left
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }
    // copies the temporary array to the beginning of the original array
    for (int i = n - k; i < n; i++) {
        arr[i] = temp[i - (n - k)];
    }
}

// For more OPTIMAL solution
void reverseArr (int arr[], int start, int end) {
    while (start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }
}

// [1,2,3,4,5,6,7], n = 7, k = 3
void rotateArrayByK_OPTI (int arr[], int n, int k) {
    // reverse first n-k elements 
    reverseArr(arr, 0, n - k - 1);      // [3, 2, 1, 4, 5, 6, 7]
    // reverse last k elements
    reverseArr(arr, n - k, n - 1);      // [3, 2, 1, 7, 6, 5, 4]
    // reverse whole array
    reverseArr(arr, 0, n - 1);          // [4, 5, 6, 7, 1, 2, 3]
}



int main () {
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    printArr(arr, n);
    rotateArrayByK_OPTI(arr, n, k);
    printArr(arr, n);
}