#include <stdio.h>

int main(void)
{
    int num, aux1, aux2, aux3, aux4;
    scanf("%d", &num);
    aux1 = num / 10000;
    aux2 = (num / 1000) % 10;
    aux3 = (num / 10) % 10;
    aux4 = num % 10;
    
    if(aux1 == aux4 && aux2 == aux3)
    {
        printf("%d é palindrome\n", num);
    }
    else
    {
        printf("%d não é palindrome\n", num);
    }
    
    return 0;
}