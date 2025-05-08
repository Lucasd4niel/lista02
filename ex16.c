#include <stdio.h>

int main(void)
{
    float n1, n2;
    char operador;
    scanf("%f %f %c", &n1, &n2, &operador);
    switch (operador)
    {
        case '+':
            printf("%.1f + %.1f = %.3f\n", n1, n2, n1+n2); 
            break;
        case '-':
            printf("%.1f - %.1f = %.3f\n", n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1f * %.1f = %.3f\n", n1, n2, n1*n2);
            break;
        case '/':
            if (n2 != 0)
            {
                printf("%.1f / %.1f = %.2f\n", n1, n2, n1/n2);
            }
            break;
        default:
            printf("Operador invalido\n");
            break;
    }
    return 0;
}