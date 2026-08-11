// Exercício: switch
// Objetivo: demonstrar seleção múltipla com switch/case e uso de break

#include <stdio.h>

int main(void)
{
        // Valor de exemplo que controla o fluxo do switch
        int op = 2; // altere para 1,2 ou outro valor para testar os casos

        // O switch compara 'op' com cada case e executa o bloco correspondente
        switch (op)
        {
        case 1:
                // Caso em que op == 1
                printf("Operação 1\n");
                break; // evita queda para os próximos cases
        case 2:
                // Caso em que op == 2
                printf("Operação 2\n");
                break;
        default:
                // Caso padrão quando nenhum case corresponde
                printf("Operação desconhecida\n");
                break;
        }

    // Retorna 0 para indicar sucesso
    return 0;
}
