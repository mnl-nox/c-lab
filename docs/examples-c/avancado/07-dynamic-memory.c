#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *vetor = malloc(5 * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro de alocacao\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);
    return 0;
}
