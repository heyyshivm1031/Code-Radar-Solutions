#include <stdio.h>
#include <stdlib.h> // For malloc

int isSorted(int arr[], int n) {
    int asc = 1, desc = 1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            asc = 0; // Not ascending
        }
        if (arr[i] < arr[i + 1]) {
            desc = 0; // Not descending
        }
    }

    return asc || desc; // Returns 1 if sorted, 0 if not
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid array size\n");
        return 1; // Exit if input is invalid
    }

    int *arr = (int *)malloc(n * sizeof(int)); // Dynamically allocate array
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSorted(arr, n))
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    free(arr); // Free allocated memory
    return 0;
}
