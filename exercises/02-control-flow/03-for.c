// Exercício: laço for
// Objetivo: demonstrar a estrutura for (inicialização; condição; incremento)

#include <stdio.h>

int main(void)
{
        // O laço for inicializa i em 0, testa i < 5 e incrementa i em cada iteração
        for (int i = 0; i < 5; i++)
        {
                // Imprime o valor atual de i em cada iteração
                printf("for: i = %d\n", i);
        }

    // Retorna 0 para indicar sucesso
    return 0;
}
