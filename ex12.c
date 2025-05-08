#include <stdio.h>

int main(void){
    int tri, a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    tri = (b*b) -4 * a * c;
    if (tri > 0){
        printf("duas raizes diferentes\n");
    }else if (tri < 0){
        printf("nao existe raiz real\n");
    }else{
        printf("uma raiz real\n");
    }
    return 0;
}
