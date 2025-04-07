#include <stdio.h>

int main() {
    int arr[100], n, evenCount = 0, oddCount = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("%d", evenCount);
    printf("%d", oddCount);

    return 0;
}
