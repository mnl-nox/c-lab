// Exercício: estruturas condicionais if / else
// Objetivo: demonstrar a utilização de if, else if e else

#include <stdio.h>

int main(void)
{
        // Declaração e inicialização de uma variável inteira
        int x = 10; // altere este valor para testar diferentes ramos

        // Estrutura condicional: avalia expressões booleanas e executa o bloco correspondente
        if (x > 0)
        {
                // Executado quando x é maior que zero
                printf("%d é positivo\n", x);
        }
        else if (x < 0)
        {
                // Executado quando x é menor que zero
                printf("%d é negativo\n", x);
        }
        else
        {
                // Executado quando nenhuma das condições anteriores é verdadeira (x == 0)
                printf("%d é zero\n", x);
        }

        // Retorna 0 para indicar que o programa terminou com sucesso
        return 0;
}
