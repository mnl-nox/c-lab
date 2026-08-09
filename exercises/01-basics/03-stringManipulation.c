/*
Como mencionado anteriormente, este projeto utiliza a versão do padrão de linguagem C17.

Aqui, vamos explorar a manipulação de strings em C. Strings em C são representadas como arrays
de caracteres terminados com um caractere nulo '\0'. Isso significa que
ao declarar uma string, devemos garantir que haja espaço suficiente para armazenar todos os caracteres
da string, além do caractere nulo.

Neste exercício, vamos demonstrar como declarar, inicializar e manipular strings em C.

Vamos também mostrar como concatenar strings, comparar strings e encontrar o comprimento
de uma string usando funções da biblioteca
padrão <string.h>. Além disso, vamos abordar a importância de gerenciar corretamente a
memória ao lidar com strings, especialmente quando se trata de alocação dinâmica.
*/
#include <stdio.h>  // seção de entrada e saída padrão
#include <string.h> // seção de manipulação de strings

int main()
{
        // nesta linha, vamos declarar e inicializar uma string
        char nome[50]; // declarando um array de caracteres com espaço para 50 caracteres
        printf("\nDigite seu nome: ");
        scanf("%49s", nome); // lendo a entrada do usuário e armazenando na string

        printf("Olá, %s! É um prazer te conhecer.", nome); // exibindo a string concatenada com outra mensagem

        char sobrenome[50]; // declarando outro array de caracteres para o sobrenome
        printf("\nDigite seu sobrenome: ");
        scanf("%49s", sobrenome); // lendo a entrada do usuário e armazenando na string

        printf("\nSeu nome completo é: %s %s", nome, sobrenome); // exibindo o nome completo concatenado

        // vamos encontrar caracteres específicos na string usando a função strchr
        char *ptr = strchr(nome, 'a'); // procurando o caractere 'a'
        if (ptr != NULL)
        {
                printf("\nO caractere 'a' foi encontrado na posição: %ld", ptr - nome); // exibindo a posição do caractere encontrado
        }
        else
        {
                printf("\nO caractere 'a' não foi encontrado no nome.");
        }

        return 0;
}
