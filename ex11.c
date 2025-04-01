#include <stdio.h>

int main(void){
    float c;
    scanf("%f", &c);
    if(c <=30){
        printf("temperatura ok");
    }else{
        printf("temperatura alta");
    }
    return 0;
}