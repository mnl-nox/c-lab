// Exercício: laço while
// Objetivo: demonstrar um laço que repete enquanto a condição for verdadeira

#include <stdio.h>

int main(void)
{
        // Inicializa o contador
        int i = 0;

        // Enquanto a condição (i < 5) for verdadeira, o bloco será executado
        while (i < 5)
        {
                // Imprime o valor atual de i e incrementa
                printf("i = %d\n", i);
                i++;
        }

        // Retorna 0 para indicar execução bem-sucedida
        return 0;
}
