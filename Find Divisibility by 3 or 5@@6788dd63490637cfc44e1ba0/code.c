#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a % 3 && a % 5 ){
        printf("Divisible by Both");
    }
    return 0;
}