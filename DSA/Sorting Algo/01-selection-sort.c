#include<stdio.h>
/*
Selection sort:
Repeatedly selects the smallest number from the unsorted array and is placed at the first unsorted place.
i = smallest thing(everything before i is sorted)
j = goes throught the unsorted part
target = will be the smallest from the unsorted part of the array

in place and comparison approach

Time Complexity:
Best case: O(n^2) Comparisons
Worst case: O(n^2)
Average case: O(n^2)

Space Complexity: O(1)
*/
// function to make the array
void makeArr (int arr[], int n);                
// function to print the array
void printArr (int arr[], int n);               
// function to do the swapping
void swapper (int *x, int *y);                  
// function to sort the array takes (array, length of array, 0:desc/1:asc)
void selectionSort (int arr[], int n, int a);   

void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void makeArr (int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element %d:", i+1);
        scanf("%d", &arr[i]);
    }
}
void swapper (int *x, int *y) {
    int temp = *y;
    *y = *x;
    *x = temp;
}

void selectionSort (int arr[], int n, int a) {
    for (int i = 0; i <= n-2; i++) {
        int target = i;
        for (int j = i + 1; j <= n-1; j++) {
            if (a == 1 ? arr[j] < arr[target] : arr[j] > arr[target]) {
                target = j;
            }
        }
        swapper (&arr[i], &arr[target]);
    }
    printf("Sorted!!\n");
}

int main () {
    // array creation
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    makeArr (arr, n);
    // results
    printf("Original Array: \t");
    printArr(arr, n);
    selectionSort(arr, n, 1);   // will sort in ascending order
    printf("Sorted in asc: \t");
    printArr(arr, n);
    selectionSort(arr, n, 0);   // will sort in descending order
    printf("Sorted in desc: \t");
    printArr(arr, n);
    return 0;
}
