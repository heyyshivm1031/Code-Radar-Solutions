#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(0<a&&100>=a){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}