#include<stdio.h>

int singleElement (int arr[], int n);
int singleElementOptimized (int arr[], int n);

int singleElement (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                count++;
            }
        }
        if (count == 1) {
            return num;
        }
    }
    return -1;
}

int singleElementOptimized (int arr[], int n) {
    int xor = 0;
    for (int i = 0; i < n; i++) {
        xor ^= arr[i];
    }
    return xor;
}

int main () {
    int arr[] = {5, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printf("%d", singleElement(arr, n));
    printf("%d", singleElementOptimized(arr, n));
    return 0;
}

