#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;
    scanf("%s", str);  // For full sentences, use fgets()

    len = strlen(str);

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
