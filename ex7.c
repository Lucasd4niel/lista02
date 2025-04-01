#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    if (n % 7 == 0){
        printf("%d é multiplo de 7", n);
    }
    else{
        printf("não é multiplo");
    }
    return 0;
}