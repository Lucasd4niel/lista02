#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    if (n % 2 == 0 && n % 3 ==0){
        printf("%d divisivel por 2 e por 3", n);
    }else{
        printf("nao é divisivel por 2 e 3");   
    }
    return 0;
}