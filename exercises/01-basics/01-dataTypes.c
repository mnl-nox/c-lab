// Neste exercicio a ideia é criar variáveis de diferentes tipos de dados, atribuir valores a elas e imprimir esses valores na tela.
// Após imprimir os valores, o programa deve retornar 0 para indicar que terminou com sucesso ou 1 para indicar que houve algum erro durante a execução.

#include <stdio.h>

int main (void) { // cabeçalho da função principal, que é o ponto de entrada do programa

    // Declaração e inicialização de variáveis de diferentes tipos de dados
    int inteiro = 10; // variável do tipo inteiro
    float decimal = 3.14; // variável do tipo float
    char caractere = 'A'; // variável do tipo char
    double grandeDecimal = 2.718281828459045; // variável do tipo double

    // Impressão dos valores das variáveis na tela
    printf("Valor do inteiro: %d\n", inteiro);
    printf("Valor do decimal: %.2f\n", decimal);
    printf("Valor do caractere: %c\n", caractere);
    printf("Valor do grande decimal: %.15f\n", grandeDecimal);

    int idade = 25;           // variável do tipo inteiro
    float altura = 1.75;      // variável do tipo float
    char inicial = 'J';       // variável do tipo char
    double salario = 3500.50; // variável do tipo double

    printf("Idade: %d anos\n", idade); // imprime a idade na tela
    printf("Altura: %.2f metros\n", altura); // imprime a altura na tela
    printf("Inicial: %c\n", inicial); // imprime a inicial na tela
    printf("Salário: R$ %.2lf\n", salario); // imprime o salário na tela

    return 0; // retorna 0 para indicar que o programa terminou com sucesso.
}

// Conceitos importantes:
// 1. Tipos de dados: Em C, existem diferentes tipos de dados, como int, float, char e double, cada um com suas próprias características e usos.
// 2. Declaração e inicialização de variáveis: As variáveis devem ser declaradas com um tipo específico antes de serem usadas, e podem ser inicializadas com um valor no momento da declaração.
// 3. Função printf: A função printf é usada para imprimir valores na tela, e utiliza especificadores de formato (como %d, %.2f, %c) para indicar o tipo de dado que está sendo impresso.
// 4. Retorno da função main: A função main deve retornar um valor inteiro, onde 0 indica que o programa terminou com sucesso e qualquer outro valor indica que houve algum erro durante a execução.
// 5. Comentários: Comentários são usados para explicar o código e não são executados pelo compilador. Eles podem ser de linha única (//) ou de múltiplas linhas (/* */).   
