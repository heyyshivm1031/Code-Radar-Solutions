#include<stdio.h>
int main(){
    int N, sum;
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        sum +=i;
    }

    printf("%d", N, sum);

    return 0;
}