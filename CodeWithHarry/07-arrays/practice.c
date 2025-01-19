#include<stdio.h>
/*
Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
*/
void ptr_arith ();
/*
If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False.
(iii) Depends.
ANSWER: *(S+3) points to fourth element
*/

/*
Write a program to create an array of 10 integers and store multiplication table of 5 in it.
*/
void multiplication_of_5 ();
/*
Repeat previous problem for a general input provided by the user using scanf.
*/
void multiplication_of_n ();
/*
Write a program containing a function which reverses the array passed to it.
*/
void reverse_array ();
/*
Write a program containing functions which counts the number of positive
integers in an array.
*/
void count_positive ();
/*
Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.
*/
void multiplication_tables ();
/*
Repeat previous problem for a custom input given by the user.
*/
void multiplication_tables_n ();
/*
Create a three–dimensional array and print the address of its elements in
increasing order.
*/
void three_dim_array_addresses ();

/*
Helper function
*/
void printArr (int arr[], int n);


void printArr (int arr[], int n) {
    printf("Array:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void ptr_arith () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    printf("The value at address %u is %d", ptr+2, *(ptr+2));
}

void multiplication_of_5 () {
    int arr[10], i, j;
    for (i = 0; i < 10; i++) {
        arr[i] = 5 * (i + 1);
    }
    for (j = 0; j < 10; j++) {
        printf("5 x %d = %d\n", j+1, arr[j]);
    }
}

void multiplication_of_n () {
    int arr[10], i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++) {
        arr[i] = n * (i + 1);
    }
    for (j = 0; j < 10; j++) {
        printf("%d x %d = %d\n", n, j+1, arr[j]);
    }
}

void reverse_array () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7}, n = 7;
    int i, j, temp;
    printf("Original ");
    printArr(arr, n);
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Reversed ");
    printArr(arr, n);
}
void count_positive () {
    int arr[] = {1, 2, -3, -2, 5, 6}, n = 6;
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    printArr(arr, n);
    printf("No. of positive numbers: %d", count);
}

void multiplication_tables () {
    int ins[] = {2, 7, 9}, n = 3;
    for (int i = 0; i < n; i++) {
        printf("Multiplication table of %d:\n", ins[i]);
        int arr[10], j, k;
        for (j = 0; j < 10; j++) {
            arr[j] = ins[i] * (j + 1);
        }
        for (k = 0; k < 10; k++) {
            printf("%d x %d = %d\n", ins[i], k+1, arr[k]);
        }
    }
}

void multiplication_tables_n () {
    int n;

    printf("Enter number of inputs:");
    scanf("%d", &n);
    
    int ins[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d:", i+1);
        scanf("%d", &ins[i]);
    }
    
    for (int i = 0; i < n; i++) {
        printf("Multiplication table of %d:\n", ins[i]);
        int arr[10], j, k;
        for (j = 0; j < 10; j++) {
            arr[j] = ins[i] * (j + 1);
        }
        for (k = 0; k < 10; k++) {
            printf("%d x %d = %d\n", ins[i], k+1, arr[k]);
        }
    }
}

void three_dim_array_addresses () {
    int arr[3][3][3];
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                // printf("Address of arr[%d][%d][%d] = %p\n", i, j, k, &arr[i][j][k]);
                printf("Address of arr[%d][%d][%d] = %u\n", i, j, k, &arr[i][j][k]);
            }
        }
    }
}





int main () {
    // ptr_arith();
    // multiplication_of_5();
    // multiplication_of_n();
    // reverse_array();
    // count_positive();
    // multiplication_tables();
    // multiplication_tables_n();
    three_dim_array_addresses();
    return 0;
}