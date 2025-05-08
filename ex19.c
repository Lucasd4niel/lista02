#include <stdio.h>

int main() {
    int T;
    int x, y, r;

    /* leitura do valor da taxa */
    printf("Digite o valor da taxa (em centavos): ");
    scanf("%d", &T);

    /* mínimo é 8 */
    if (T < 8) {
        printf("Sem solução\n");
        return 0;
    }

    /* resto da divisão por 5 */
    r = T % 5;

    if (r == 0) {
        /* tudo em selos de 5¢ */
        x = 0;
        y = T / 5;
    }
    else if (r == 1) {
        /* subtrai 2 selos de 3¢ (6¢) para ficar múltiplo de 5 */
        x = 2;
        y = (T - 3 * x) / 5;
    }
    else if (r == 2) {
        /* subtrai 4 selos de 3¢ (12¢) */
        x = 4;
        y = (T - 3 * x) / 5;
    }
    else if (r == 3) {
        /* subtrai 1 selo de 3¢ (3¢) */
        x = 1;
        y = (T - 3 * x) / 5;
    }
    else { /* r == 4 */
        /* subtrai 3 selos de 3¢ (9¢) */
        x = 3;
        y = (T - 3 * x) / 5;
    }

    /* verifica se y ficou negativo (caso T muito pequeno para aquele ajuste) */
    if (y < 0) {
        printf("Sem solução\n");
    }
    else {
        printf("%d selo(s) de 3 centavos \n%d selo(s) de 5 centavos \n(total: %d selos)\n", x, y, x + y);
    }

    return 0;
}