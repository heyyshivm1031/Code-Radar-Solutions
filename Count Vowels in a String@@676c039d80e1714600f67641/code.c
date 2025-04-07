#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int count = 0;
    scanf("%s", str);  // For full sentences, use fgets()

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Make it case-insensitive
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
