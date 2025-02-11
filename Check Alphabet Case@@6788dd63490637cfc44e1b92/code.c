#include<stdio.h>
int main(){
    char sh;
    scanf("%c", &sh);
    if(sh >= 'A' && sh<= 'Z'){
        printf("Uppercase");
    }
    else if(sh >= 'a' && sh <= 'z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}