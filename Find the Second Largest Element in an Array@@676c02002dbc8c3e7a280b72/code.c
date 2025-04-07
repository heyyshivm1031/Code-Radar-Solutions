#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n < 3) return -1;  // Must have at least 3 elements for a valid peak

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return arr[i];
    }

    return -1;  // No peak found
}

int main() {
    int arr[100], n;

    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
    printf("%d\n", peak);

    return 0;
}
