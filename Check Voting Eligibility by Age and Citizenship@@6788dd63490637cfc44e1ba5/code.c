#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a >= 18 != 0 && b >= 1 != 0){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}