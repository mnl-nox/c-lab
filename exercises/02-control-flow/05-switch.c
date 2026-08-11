// Exercício: switch

#include <stdio.h>

int main(void)
{
    int op = 2;

    switch (op) {
    case 1:
        printf("Operação 1\n");
        break;
    case 2:
        printf("Operação 2\n");
        break;
    default:
        printf("Operação desconhecida\n");
        break;
    }

    return 0;
}
