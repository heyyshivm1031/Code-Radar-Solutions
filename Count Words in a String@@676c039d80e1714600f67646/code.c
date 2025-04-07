#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, wordCount = 0;

    fgets(str, sizeof(str), stdin);  // allows spaces

    // Remove trailing newline from fgets
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        // Check for the start of a word
        if ((i == 0 && !isspace(str[i])) ||
            (isspace(str[i - 1]) && !isspace(str[i]))) {
            wordCount++;
        }
    }

    printf("%d\n", wordCount);

    return 0;
}
