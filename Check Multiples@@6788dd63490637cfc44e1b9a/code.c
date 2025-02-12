#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(b != 0){
        if(a % b == 0){
            printf("Yes")
        }
    }
    else{
        printf("No")
    }
}