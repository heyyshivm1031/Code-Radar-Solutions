#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2;

    // Input two integers
    scanf("%d %d", &num1, &num2);

    // Check if neither number is greater than zero using ! and &&
    bool result = !(num1 > 0) && !(num2 > 0);

    // Output "True" or "False" based on the result
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}