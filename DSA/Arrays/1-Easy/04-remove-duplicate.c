#include<stdio.h>

int removeDupes (int arr[], int n);

int removeDupes (int arr[], int n) {
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i + 1;
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
    int arr[] = {1, 2, 2, 3, 4, 4};
    int newlen = removeDupes(arr, n);
    printf("Unique elements: %d\n", newlen);
    return 0;
}