#include<stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);

    int i;
    for(i = 1; i <= n; i++){
        sum +=i;
    }

    printf("%d", n, sum);

    return 0;
}