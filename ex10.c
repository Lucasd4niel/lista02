#include <stdio.h>

int main(void){
    float v1, v2;
    scanf("%f %f", &v1, &v2);
    if (v1 > v2){
        printf("o maior é %f", v1);
    }else if (v1 < v2){
        printf("o maior é %f", v2);
    }else{
        printf("iguais");
    } 
    return 0;
}