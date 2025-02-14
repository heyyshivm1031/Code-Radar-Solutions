#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        printf("Error\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                printf("Error\n");
            else
                printf("%d\n", num1 / num2);
            break;
        default:
            printf("Error\n");
    }

    return 0;
}
