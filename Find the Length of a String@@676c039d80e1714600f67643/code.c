#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%s", str);  // Use fgets() for full sentences

    int length = strlen(str);

    printf("%d\n", length);

    return 0;
}
