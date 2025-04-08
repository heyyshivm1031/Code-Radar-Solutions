#include <stdio.h>

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    int i = 0, j = 0;

    // Move to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Copy str2 to the end of str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  // Null-terminate the final string

    printf("%s\n", str1);

    return 0;
}
