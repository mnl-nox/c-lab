// Neste arquivo vamos fazer um programa que demonstra a manipulação de diferentes tipos de dados em C.
// Aqui o objetivo é mostrar como declarar, inicializar e manipular variáveis de diferentes tipos,
// bem como realizar operações básicas com elas.

/*
%d -> int
%f -> float
%lf -> double
%c -> char
%s -> string
*/

// Vamos revisitar os dados básicos neste tópico,
// mas desta vez vamos explorar um pouco mais sobre como manipulá-los e realizar operações com eles.

#include <stdio.h>

int main()
{
        // Vou começar com manipução de inteiros
        int a = 10;
        int b = 20;
        int soma = a + b;
        printf("Soma de %d e %d é: %d\n", a, b, soma);

        // Agora vamos manipular números de ponto flutuante
        float x = 5.5;
        float y = 10.5;
        float produto = x * y;
        printf("Produto de %.2f e %.2f é: %.2f\n", x, y, produto);

        // Agora vamos manipular caracteres
        char letter1 = 'C';
        char letter2 = 'P';
        printf("Concatenando caracteres: %c%c\n", letter1, letter2);

        // Vamos manipular o tipo de dado double
        double pi = 3.141592653589793;
        double area = pi * (5.0 * 5.0); // área de um círculo com raio 5
        printf("Área de um círculo com raio 5 é: %.15f\n", area);

        /* Finalmente, vamos manipular strings, existe diferença entre string e char
          string é um array de char, mais a frente do array de char, existe
          o caractere nulo '\0' que indica o final da string.
          iremos abordar em uma seção separada a manipulação de strings,
          mas por enquanto vamos apenas declarar e imprimir uma string. */
        char name[] = "C Programming";
        printf("Nome da linguagem: %s\n", name);

        return 0;
}
