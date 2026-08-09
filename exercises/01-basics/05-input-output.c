// Vamos testar e criar metodos de entrada de dados em C, aplicando e usando a interação com o usuario via terminal.
// para isto utilizaremos o mètodo "scanf" para esta seção com pequenos códigos.

#include <stdio.h>

int main()
{
        /* Objetivo: Testar e usar entrada de dados do usuario via terminal usando I/O.

        1. inserir mensagem de solicitação de dados.
        2. usar o metodo scanf para capturar a entrada do usuario.
        3. exibir a entrada do usuario na tela.
        */
        printf("Olá, seja bem vindo ao nosso programa!\n");
        printf("Para prosseguir, insira os dados solicitados abaixo:\n");

        char solicitarNomeUsuario[70];

        printf("Digite seu nome completo:\n"); 
        scanf("%[^\n]%*c", solicitarNomeUsuario); // usando o scanf para capturar a entrada do usuario, incluindo espaços em branco.

        printf("Olá, %s! É um prazer te conhecer.\n", solicitarNomeUsuario);

        return 0;
}
