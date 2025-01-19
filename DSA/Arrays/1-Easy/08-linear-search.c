#include<stdio.h>

int linearSearch (int arr[], int n, int item);

int linearSearch (int arr[], int n, int item) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == item) return i;
    }
    return -1;
}

int main () {
    int arr[] = {1, 0, 2, 0, 4, 6, 0, 2};
    int n = 8;
    int item = 6;
    printf("%d is at %d index", item, linearSearch(arr, n, item));
}