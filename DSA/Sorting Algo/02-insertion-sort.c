#include<stdio.h>
/*
Insertion Sort:
One by one picks element from unsorted array and placing them in correct position in the sorted part. 
i = starts from second index(1) since the first element is consider to be sorted
j = is greater than 0 and compares with the just previous element and swaps them(swap happens for all the numbers that are larger then current element) line 39

Time Complexity:
Best Case: O(n) Comparsions 
Worst Case: O(n^2)  Comparsions and max shifts
Average Case: O(n^2)

Space Complexity: O(1)
*/
// function to make the array
void makeArr (int arr[], int n);
// function to print the array
void printArr (int arr[], int n);
// function to do the swapping       
void swapper (int *x, int *y);          
void insertionSort (int arr[], int n, int a);

void printArr (int arr[], int n) {
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
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertionSort (int arr[], int n, int a) {
    for (int i = 1; i < n; i++) {
        int j = i;
        if (a == 1) {
            while (j > 0 && arr[j - 1] > arr[j]) {
                swapper(&arr[j - 1], &arr[j]);
                j--;
            }
        } else {
            while (j > 0 && arr[j - 1] < arr[j]) {
                swapper(&arr[j - 1], &arr[j]);
                j--;
            }
        }
    }
} 

int main () {
    // array creation
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    makeArr (arr, n);
    // results
    printf("Original Array: ");
    printArr(arr, n);
    insertionSort(arr, n, 1);   // will sort in ascending order
    printf("Sorted in asc: ");
    printArr(arr, n);
    insertionSort(arr, n, 0);   // will sort in descending order
    printf("Sorted in desc: ");
    printArr(arr, n);
    return 0;
}