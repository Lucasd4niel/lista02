#include <stdio.h>

int main(void){
    int x, y, z, maior, inter, men;
    scanf("%d %d %d", &x, &y, &z);
    
    if (x >= y && y >= z)
    {
        maior = x;
        inter = y;
        men = z;
    }else
    {
        if (x >= z  && z >= y)
        {
            maior = x;
            inter = z;
            men = y;
        }
        else
        {
            if(y >= x && x >= z)
            {
                maior = y;
                inter = x;
                men = z;
            }
            else
            {
                if(y >= z && z >= x)
                {
                    maior = y;
                    inter = z;
                    men = x;
                }
                else
                {
                    if (z >= x && x >= y)
                    {
                        maior = z;
                        inter = x;
                        men = y;
                    }
                    else
                    {
                        if (z >= y && y >= x){
                            maior = z;
                            inter = y;
                            men = x;
                        }
                    }
                }      
            }
        }
    }

    x = men;
    y = inter;
    z = maior;

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
