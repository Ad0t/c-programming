#include<stdio.h>

void printArr (int arr[], int n);       // function to print the array
void swapper (int *x, int *y);          // function to do the swapping
void selectionSort (int arr[], int n);  // function to sort

void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swapper (int *x, int *y) {
    int temp = *y;
    *y = *x;
    *x = temp;
}

void selectionSort (int arr[], int n) {
    for (int i = 0; i <= n-2; i++) {
        int minIndex = i;
        for (int j = i + 1; j <= n-1; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swapper (&arr[i], &arr[minIndex]);
    }
    printf("Sorted!!\n");
}

int main () {
    // taking the array specs
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // taking the elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // results
    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}