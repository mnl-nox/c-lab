// neste arquivo, estudaremos o essencial de operadores aritmeticos em C. 
// o objetivo deste arquivo, além de entender como funciona os operadores dentro de C, é usar para fazer
// nosso primeiro projeto; Calculadora em C. 
// contudo, faremos em um repositorio proprio para isto, devido ao uso de modulos (gosto de usar o modelo de modulos para organizar 
// melhor o codigo, e tambem para treinar a criacao de modulos em C, usando o .h).

#include <stdio.h>

int main () {
        // vamos começar pelas operações básicas de C.
        int valor_1 = 0;
        int valor_2 = 4; 
        printf("A soma de %d e %d é: %d\n", valor_1, valor_2, valor_1 + valor_2);
        printf("A subtração de %d e %d é: %d\n", valor_1, valor_2, valor_1 - valor_2);
        printf("A multiplicação de %d e %d é: %d\n", valor_1, valor_2, valor_1 * valor_2);
        printf("A divisão de %d e %d é: %d\n", valor_1, valor_2, valor_1 / valor_2);

        // Podemos deixar mais preciso e envolver números flutuante, caso o valor seja em 2,5 por exemplo
        float valorFlutuante1 = 2.56;
        float valorFlutuante2 = 3.14;
        printf("A soma de %f.2 e %f.2 é: %f.2\n", valorFlutuante1, valorFlutuante2, valorFlutuante1 + valorFlutuante2);
        printf("A subtração de %f.2 e %f.2 é: %f.2\n", valorFlutuante1, valorFlutuante2, valorFlutuante1 - valorFlutuante2);
        printf("A multiplicação de %f.2 e %f.2 é: %f.2\n", valorFlutuante1, valorFlutuante2, valorFlutuante1 * valorFlutuante2);
        printf("A divisão de %f.2 e %f.2 é: %f.2\n", valorFlutuante1, valorFlutuante2, valorFlutuante1 / valorFlutuante2);
}
// Marquei o ponto flutuante com f.2 para marcar com precisão duas casas apenas. 
