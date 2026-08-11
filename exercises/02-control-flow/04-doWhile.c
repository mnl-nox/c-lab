// Exercício: laço do-while

#include <stdio.h>

int main(void)
{
    int i = 0;

    do {
        printf("do-while: i = %d\n", i);
        i++;
    } while (i < 3);

    return 0;
}
