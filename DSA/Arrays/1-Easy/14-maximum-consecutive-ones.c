#include<stdio.h>
#include<math.h>

int consecutiveOnes (int arr[], int n) {
    int max = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            max = fmax(max, count);
        } else {
            count = 0;
        }
    }
    return max;
}

int main () {
    int n = 7;
    int arr[] = {1, 1, 1, 1, 0, 1, 1};
    printf("%d", consecutiveOnes(arr, n));
    return 0;
}