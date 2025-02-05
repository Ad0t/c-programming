#include<stdio.h>
/* Array is sorted*/
int IbinarySearch (int arr[], int n, int target);
int RbinarySearch (int arr[], int low, int high, int target);

int IbinarySearch (int arr[], int n, int target) {
    int mid, low = 0, high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
int RbinarySearch (int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    int mid = (low+high)/2;
    int mid = low - ((high-low)/2);
    if (arr[mid] == target) {
        return mid;
    } else if (target > arr[mid]) {
        return RbinarySearch(arr, mid + 1, high, target);
    } else {
        return RbinarySearch(arr, low, mid - 1, target);
    }

}

int main () {

}