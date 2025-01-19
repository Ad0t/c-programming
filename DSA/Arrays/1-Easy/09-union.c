// given that the arrays are sorted
#include<stdio.h>

void findUnion(int arr1[], int arr2[], int n, int m, int unionArr[], int *unionSize);
void printArr (int arr[], int n);

void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findUnion(int arr1[], int arr2[], int n, int m, int unionArr[], int *unionSize) {
    int i = 0, j = 0, k = 0;    // pointers [(i & j) for (arr1 & arr2) and k for unionArr]

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            if (k == 0 || unionArr[k-1] != arr1[i]) {
                unionArr[k++] = arr1[i];
            }
            i++;
        } else {
            if (k == 0 || unionArr[k-1] != arr2[j]) {
                unionArr[k++] = arr2[j];
            }
            j++;
        }
    }
    while (i < n) {
        if (k == 0 || unionArr[k-1] != arr1[i]) {
                unionArr[k++] = arr1[i];
        }
        i++;
    }
    while (j < m) {
        if (k == 0 || unionArr[k-1] != arr2[j]) {
                unionArr[k++] = arr2[j];
        }
        j++;
    }
    *unionSize = k;
}

int main () {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    int unionArr[n + m];
    int unionSize = 0;


    findUnion(arr1, arr2, n, m, unionArr, &unionSize);
    printArr(arr1, n);
    printArr(arr2, m);

    printArr(unionArr, unionSize);
    return 0;
}