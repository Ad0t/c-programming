#include <stdio.h>

void inputArr (int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void moveZerosToBack_BRUTE (int arr[], int n) {
    int temp[n];
    int j = 0;

    // copying non zeroes into temporary
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }

    // elements from temp copied into og array from start for j times(len of temp)
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    // starting from j to n-1 (filling rest of the og array with 0s)
    for (int i = j; i < n; i++) {
        arr[i] = 0;
    }
}

void moveZerosToBack_OPTI (int arr[], int n) {
    int j = 0;      // pointer for 0s
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // swap arr[i] with arr[j]
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}
 
int main () {
    int arr[] = {1, 0, 2, 0, 4, 5, 0, 2};
    int n = 8;
    printArr(arr, n);
    // moveZerosToBack_BRUTE (arr, n);
    moveZerosToBack_OPTI (arr, n);
    printArr(arr, n);
}