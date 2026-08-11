// Exercício: estruturas condicionais if / else

#include <stdio.h>

int main(void)
{
        int x = 10;

        if (x > 0)
        {
                printf("%d é positivo\n", x);
        }
        else if (x < 0)
        {
                printf("%d é negativo\n", x);
        }
        else
        {
                printf("%d é zero\n", x);
        }

        return 0;
}
