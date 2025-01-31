#include<stdio.h>

// Brute Force
int missingNumberBrute (int arr[], int n);
// Better
int missingNumberBetter (int arr[], int n);
// Optimized 1
int missingNumberOptimized1 (int arr[], int n);
// Optimized 2
int missingNumberOptimized2 (int arr[], int n);

int missingNumberBrute (int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            return i;
        }
    }
    return -1;
}
int missingNumberBetter (int arr[], int n) {
    int hash[n+1];
    for (int i = 0; i < n; i++) {
        hash[arr[i]] = 0;
    }
    for (int i = 0; i < n - 1; i++) {
        hash[arr[i]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    return -1;
}
int missingNumberOptimized1 (int arr[], int n) {
    int sum = (n * (n + 1)) / 2;
    int s2 = 0;
    for (int i = 0; i < n - 1; i++) {
        s2 += arr[i];
    }
    return (sum - s2);
}
int missingNumberOptimized2 (int arr[], int n) {
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n - 1; i++) {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    return (xor1 ^ xor2);
}

int main () {
    int n = 5;
    int arr[] = {1, 2, 4, 5};
    // int res = missingNumberBrute(arr, n);
    // int res = missingNumberBetter(arr, n);
    int res = missingNumberOptimized1(arr, n);
    printf("%d", res);
    return 0;
}