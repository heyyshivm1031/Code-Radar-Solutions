#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);  // reads full line including spaces

    // Remove the newline character at the end if present
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    printf("%d\n", length);

    return 0;
}
