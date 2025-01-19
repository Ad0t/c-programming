// given that the arrays are sorted
#include<stdio.h>

void findIntersection(int arr1[], int arr2[], int n, int m, int unionArr[], int *unionSize);
void printArr (int arr[], int n);

void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findIntersection(int arr1[], int arr2[], int n, int m, int intersectionArr[], int *intersectionSize) {
    int i = 0, j = 0, k = 0;    // pointers [(i & j) for (arr1 & arr2) and k for unionArr]

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]){
            j++;
        } else {
            intersectionArr[k++] = arr1[i];
            i++;
            j++;
        }
    }
    *intersectionSize = k;
}

int main () {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    int intersectionArr[n + m];
    int intersectionSize = 0;


    findIntersection(arr1, arr2, n, m, intersectionArr, &intersectionSize);
    printArr(arr1, n);
    printArr(arr2, m);

    printArr(intersectionArr, intersectionSize);
    return 0;
}