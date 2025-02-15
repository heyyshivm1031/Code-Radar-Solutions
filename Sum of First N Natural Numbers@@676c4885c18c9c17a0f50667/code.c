#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    if (n < 0) {  // Handle negative input case
        printf("Please enter a positive number.\n");
        return 1;  // Exit the program
    }

    for (int i = 1; i <= n; i++) { 
        sum += i;  // Add i to sum
    }

    printf("%d", n, sum);

    return 0;
}
