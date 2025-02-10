#include <stdio.h>

int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%s", &name);
    scanf("%d", &age);
    scanf("%s", &hobby);
    printf("Name: %s\nAge: %d\nHobby: %s\n", name, age, hobby);
    return 0;
}