#include <stdio.h>
#include <stdbool.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    bool result = !(num1 > 0) && !(num2 > 0);
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}