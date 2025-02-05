#include<stdio.h>
#include<math.h>

// brute O(n^2)
int subarraySumK (int arr[], int n, int ks);
int subarraySumK (int arr[], int n, int ks) {
    int sum = 0, len = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == ks) {
                len = fmax(len, j - i + 1);
            }
        }
    }
    return len;
}

