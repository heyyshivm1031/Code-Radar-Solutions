#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n <= 1) {
        printf("Not Prime");
    } else {
        for (i = 2; i * i <= n; i++) {
            if(n % i == 0){
                printf("Not Prime");
                break;
            }
        }
    if (i * i > n) {
        printf("Prime");
    }
    }

    return 0;
}