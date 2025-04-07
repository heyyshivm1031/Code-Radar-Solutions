#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 1) return -1;  // Only one element, no peak

    if (arr[0] > arr[1]) return arr[0];

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return arr[i];
    }

    if (arr[n - 1] > arr[n - 2]) return arr[n - 1];

    return -1;  // No peak found
}
int main() {
    int arr[100], n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
    printf("%d", peak);

    return 0;
}