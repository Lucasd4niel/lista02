#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a*a == b*b + c*c)
    {
        printf("é um triangulo retangulo\n");
    }
    else
    {
        if(b*b == a*a + c*c){
            printf("é um triangulo retangulo\n");
        }
        else
        {
            if (c*c == b*b + a*a){
                printf("é um triangulo retangulo\n");
            }
            else
            {
                printf("NÃO é um triangulo retangulo\n");
            }
        }
    }
    return 0;
}