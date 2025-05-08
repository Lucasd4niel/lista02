#include <stdio.h>

int main(void)
{
    float altura;
    char sexo;
    scanf(" %c %f", &sexo, &altura);
    if (altura < 1.5){
        printf("ALÁ MÓ ANÃO KKKKKKKKKKKKK\n(Com todo respeito aos anões é claro)\n");
    }else
    {
        switch(sexo)
        {
        case 'h':
            printf("Peso ideal: %.2fKG\n", (72.1 * altura) - 58);
            break;
        case 'm':
            printf("Peso ideal: %.2fKG\n", (62.1 * altura) - 44.7);
            break;
        }
    }
    return 0;
}