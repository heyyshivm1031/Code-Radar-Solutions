#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a <= 1) {
        printf("Not Prime");
    } else {
        for (i = 2; i * i <= a; i++) {
            if(a % i == 0){
                printf("Not Prime");
                break;
            }
        }
    if (i * i > a) {
        printf("Prime Number");
        }
    }

    return 0;
}