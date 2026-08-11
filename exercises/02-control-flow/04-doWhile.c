// Exercício: laço do-while
// Objetivo: demonstrar o laço que executa o bloco pelo menos uma vez

#include <stdio.h>

int main(void)
{
        // Inicializa o contador
        int i = 0;

        // O bloco dentro de do é executado primeiro e depois a condição é verificada
        do
        {
                printf("do-while: i = %d\n", i);
                i++;
        } while (i < 3);

    // Retorna 0 para indicar execução bem-sucedida
    return 0;
}
