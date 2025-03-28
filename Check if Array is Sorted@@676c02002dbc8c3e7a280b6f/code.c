#include <stdio.h>

int isSorted(int arr[], int n) {
    int asc = 1, desc = 1; // Flags for ascending and descending

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            asc = 0; // Not ascending
        }
        if (arr[i] < arr[i + 1]) {
            desc = 0; // Not descending
        }
    }

    if (asc || desc) // If either flag is still 1, it's sorted
        return 1;
    return 0;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSorted(arr, n))
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}
