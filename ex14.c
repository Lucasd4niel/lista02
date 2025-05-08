#include <stdio.h>

int main(void){
    int d, m, a;
    scanf("%d/%d/%d", &d, &m, &a);
    if (a >= 0 && (m > 0 && m <=12))
    {
        if(d > 0 && d <= 28)
        {
            printf("%d/%d/%d é uma data valida\n", d, m, a);
        }
        else
        {
            if (d == 29 && (a % 400 == 0 || ((a % 4 == 0 && a %100 != 0) && m == 2))){
                printf("%d/%d/%d é uma data valida\n", d, m, a);
            }
            else
            {
                printf("%d/%d/%d não é uma data valida\n", d, m, a);
            }
        }
    }
    else
    {
        printf("%d/%d/%d não é uma data valida\n", d, m, a);
    }

    return 0;
}
