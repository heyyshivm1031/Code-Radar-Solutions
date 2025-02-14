#include <stdio.h>

int main() {
    int a, b, c;

    // Input the three sides of the triangle
    scanf("%d %d %d", &a, &b, &c);

    // Check for equilateral triangle
    if (a == b && b == c) {
        printf("Equilateral\n");
    } 
    // Check for isosceles triangle
    else if (a == b || a == c || b == c) {
        printf("Isosceles\n");
    } 
    // Otherwise, it's a scalene triangle
    else {
        printf("Scalene\n");
    }

    return 0;
}