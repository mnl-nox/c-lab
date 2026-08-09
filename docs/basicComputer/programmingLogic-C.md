# Lógica de Programação Básica em C

Esta pasta apresenta os fundamentos da **lógica de programação** utilizando a linguagem **C**. O objetivo é desenvolver o raciocínio lógico necessário para criar algoritmos, resolver problemas computacionais e compreender o fluxo de execução de programas.

A linguagem C é amplamente utilizada no ensino de programação, desenvolvimento de sistemas operacionais, sistemas embarcados, compiladores, drivers e aplicações de alto desempenho.

---

# Objetivos

* Desenvolver raciocínio lógico e algorítmico.
* Compreender a estrutura de um programa em C.
* Resolver problemas por meio de algoritmos.
* Utilizar estruturas de controle para tomada de decisão e repetição.
* Manipular variáveis, operadores e funções.
* Escrever código organizado e legível.

---

# Pré-requisitos

* Compilador GCC ou Clang
* Visual Studio Code ou outro editor
* Conhecimentos básicos de informática

---

# Estrutura de um Programa

Todo programa em C possui um ponto de entrada chamado **função `main()`**.

```c
#include <stdio.h>

int main(void)
{
    printf("Olá, Mundo!\n");

    return 0;
}
```

## Componentes

* Diretivas de pré-processamento
* Função principal (`main`)
* Blocos delimitados por `{ }`
* Instruções finalizadas com `;`

---

# Algoritmo

Um algoritmo é uma sequência finita e ordenada de instruções capaz de resolver um problema.

Exemplo:

```text
Início

Receber dois números

Somar os números

Mostrar o resultado

Fim
```

Implementação em C:

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    printf("%d\n", a + b);

    return 0;
}
```

---

# Variáveis

Variáveis armazenam informações temporariamente na memória.

```c
int idade = 20;
float altura = 1.75f;
double salario = 2500.50;
char sexo = 'M';
```

## Tipos Fundamentais

| Tipo     | Descrição                 |
| -------- | ------------------------- |
| `char`   | Caractere                 |
| `int`    | Inteiro                   |
| `float`  | Ponto flutuante (32 bits) |
| `double` | Ponto flutuante (64 bits) |
| `void`   | Ausência de valor         |

---

# Constantes

Valores que não podem ser modificados.

```c
const float PI = 3.14159265f;
```

---

# Entrada e Saída

Entrada:

```c
scanf("%d", &idade);
```

Saída:

```c
printf("Idade: %d\n", idade);
```

---

# Operadores

## Aritméticos

```text
+
-
*
/
%
```

## Relacionais

```text
==
!=
>
<
>=
<=
```

## Lógicos

```text
&&
||
!
```

## Atribuição

```text
=
+=
-=
*=
/=
%=
```

---

# Estruturas Condicionais

Permitem executar diferentes blocos de código conforme uma condição.

## if

```c
if (idade >= 18)
{
    printf("Maior de idade.\n");
}
```

---

## if...else

```c
if (nota >= 60)
{
    printf("Aprovado.\n");
}
else
{
    printf("Reprovado.\n");
}
```

---

## else if

```c
if (media >= 90)
{
    printf("A\n");
}
else if (media >= 70)
{
    printf("B\n");
}
else
{
    printf("C\n");
}
```

---

## switch

Utilizado quando há múltiplas opções.

```c
switch (opcao)
{
case 1:
    printf("Cadastrar\n");
    break;

case 2:
    printf("Consultar\n");
    break;

default:
    printf("Opção inválida\n");
}
```

---

# Estruturas de Repetição

## while

Executa enquanto a condição for verdadeira.

```c
int i = 1;

while (i <= 5)
{
    printf("%d\n", i);
    i++;
}
```

---

## do...while

Executa pelo menos uma vez.

```c
int i = 1;

do
{
    printf("%d\n", i);
    i++;

} while (i <= 5);
```

---

## for

Ideal quando o número de repetições é conhecido.

```c
for (int i = 0; i < 10; i++)
{
    printf("%d\n", i);
}
```

---

# Funções

Funções promovem reutilização e modularização do código.

```c
int soma(int a, int b)
{
    return a + b;
}
```

Utilização:

```c
int resultado = soma(10, 5);
```

---

# Vetores

Armazenam múltiplos elementos do mesmo tipo.

```c
int numeros[5] = {10,20,30,40,50};
```

Acesso:

```c
printf("%d\n", numeros[2]);
```

---

# Matrizes

Representam estruturas bidimensionais.

```c
int matriz[2][3] =
{
    {1,2,3},
    {4,5,6}
};
```

---

# Fluxo de Execução

Um programa normalmente segue o seguinte ciclo:

```text
Início

↓

Entrada de dados

↓

Processamento

↓

Tomada de decisão

↓

Repetição (quando necessário)

↓

Saída de dados

↓

Fim
```

---

# Resolução de Problemas

Antes de escrever código:

1. Compreenda o problema.
2. Identifique entradas e saídas.
3. Defina as regras do processamento.
4. Elabore um algoritmo.
5. Implemente em C.
6. Teste diferentes casos.
7. Corrija possíveis erros.

---

# Boas Práticas

* Utilize nomes descritivos para variáveis.
* Indente corretamente o código.
* Escreva funções pequenas e reutilizáveis.
* Evite repetição de código.
* Comente apenas quando necessário.
* Utilize constantes para valores fixos.
* Inicialize variáveis antes do uso.
* Sempre valide entradas do usuário.

---

# Exercícios Propostos

1. Escreva um programa que some dois números.
2. Calcule a média de três notas.
3. Determine se um número é par ou ímpar.
4. Verifique se um número é positivo, negativo ou zero.
5. Crie uma calculadora simples.
6. Gere a tabuada de um número.
7. Calcule o fatorial de um número.
8. Encontre o maior entre três valores.
9. Inverta a ordem de um vetor.
10. Conte quantos números pares existem em um vetor.

---

# Próximos Tópicos

Após dominar a lógica básica, recomenda-se estudar:

* Ponteiros
* Strings
* Estruturas (`struct`)
* Alocação dinâmica de memória
* Manipulação de arquivos
* Modularização (`.h` e `.c`)
* Recursão
* Estruturas de dados
* Algoritmos de ordenação
* Algoritmos de busca

---

# Referências

* ISO/IEC 9899:2018 (C17)
* ISO/IEC 9899:2024 (C23)
* Brian W. Kernighan & Dennis M. Ritchie — *The C Programming Language*
* K. N. King — *C Programming: A Modern Approach*
* Robert C. Martin — *Clean Code*
* Donald E. Knuth — *The Art of Computer Programming*

