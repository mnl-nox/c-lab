# Guia Completo de C

Este guia reúne os principais conceitos da linguagem C com exemplos práticos. A ideia é servir como material de estudo e referência rápida.

> Área prática reservada: a pasta [projects](../projects/) fica dedicada a projetos e aplicações, enquanto a documentação e os exercícios ficam organizados em [docs](.) e [exercises](../exercises/).

---

## 1. Introdução à linguagem C

C é uma linguagem de programação de baixo nível, compilada e extremamente influente em sistemas operacionais, drivers, embeded systems e software de alto desempenho.

### Exemplo inicial

```c
#include <stdio.h>

int main(void)
{
    printf("Olá, mundo!\n");
    return 0;
}
```

### Como compilar

```bash
gcc hello.c -o hello
./hello
```

---

## 2. Estrutura básica de um programa

Um programa em C geralmente possui:

- diretivas de pré-processamento (`#include`)
- função `main()`
- instruções terminadas por `;`
- blocos delimitados por `{}`

```c
#include <stdio.h>

int main(void)
{
    int idade = 20;
    printf("Idade: %d\n", idade);
    return 0;
}
```

---

## 3. Variáveis e tipos de dados

### Tipos primitivos

```c
int idade = 25;
float altura = 1.75f;
double salario = 3500.50;
char letra = 'A';
```

### Exemplo

```c
#include <stdio.h>

int main(void)
{
    int idade = 25;
    float altura = 1.75f;
    char inicial = 'J';

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);

    return 0;
}
```

---

## 4. Operadores

### Aritméticos

```c
int a = 10;
int b = 3;

printf("Soma: %d\n", a + b);
printf("Subtração: %d\n", a - b);
printf("Multiplicação: %d\n", a * b);
printf("Divisão: %d\n", a / b);
printf("Resto: %d\n", a % b);
```

### Relacionais

```c
printf("%d\n", a > b);
printf("%d\n", a == b);
```

### Lógicos

```c
int x = 1;
int y = 0;

printf("%d\n", x && y);
printf("%d\n", x || y);
```

---

## 5. Entrada e saída

### `printf`

```c
printf("Olá, %s!\n", "C");
```

### `scanf`

```c
#include <stdio.h>

int main(void)
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você tem %d anos.\n", idade);
    return 0;
}
```

> O operador `&` é usado para passar o endereço da variável para `scanf`.

---

## 6. Estruturas de controle

### `if`, `else`

```c
#include <stdio.h>

int main(void)
{
    int idade = 18;

    if (idade >= 18)
    {
        printf("Maior de idade\n");
    }
    else
    {
        printf("Menor de idade\n");
    }

    return 0;
}
```

### `switch`

```c
#include <stdio.h>

int main(void)
{
    int op = 2;

    switch (op)
    {
        case 1:
            printf("Opcao 1\n");
            break;
        case 2:
            printf("Opcao 2\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}
```

### Laços

#### `for`

```c
for (int i = 0; i < 5; i++)
{
    printf("%d\n", i);
}
```

#### `while`

```c
int i = 0;
while (i < 3)
{
    printf("%d\n", i);
    i++;
}
```

#### `do while`

```c
double x = 0;
do {
    printf("Executou\n");
    x++;
} while (x < 2);
```

---

## 7. Funções

Funções permitem organizar o código em blocos reutilizáveis.

```c
#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int main(void)
{
    int resultado = soma(2, 3);
    printf("Resultado: %d\n", resultado);
    return 0;
}
```

---

## 8. Arrays e strings

### Arrays

```c
int numeros[5] = {1, 2, 3, 4, 5};
```

### Strings

Em C, strings são arrays de caracteres terminados por `\0`.

```c
#include <stdio.h>

int main(void)
{
    char nome[] = "C Programming";
    printf("%s\n", nome);
    return 0;
}
```

---

## 9. Ponteiros

Ponteiros armazenam endereços de memória.

```c
#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", (void*)&x);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}
```

---

## 10. Memória dinâmica

A alocação dinâmica usa `malloc`, `calloc`, `realloc` e `free`.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *vetor = malloc(5 * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro de alocacao\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vetor[i]);
    }

    free(vetor);
    return 0;
}
```

---

## 11. Structs, unions e enums

### Struct

```c
#include <stdio.h>

struct Pessoa
{
    char nome[50];
    int idade;
};

int main(void)
{
    struct Pessoa p = {"Ana", 20};
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    return 0;
}
```

### Enum

```c
#include <stdio.h>

enum Dias { SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA };

int main(void)
{
    enum Dias d = QUARTA;
    printf("Dia: %d\n", d);
    return 0;
}
```

---

## 12. Arquivos e entradas/saídas

```c
#include <stdio.h>

int main(void)
{
    FILE *arquivo = fopen("saida.txt", "w");

    if (arquivo != NULL)
    {
        fprintf(arquivo, "Olá, arquivo!\n");
        fclose(arquivo);
    }

    return 0;
}
```

---

## 13. Boas práticas

- use nomes claros para variáveis e funções
- prefira `const` quando necessário
- cuide de vazamentos de memória
- use `-Wall -Wextra -std=c17` ao compilar
- cheque retornos de funções como `fopen`, `malloc` e `scanf`

---

## 14. Ferramentas úteis

- GCC / Clang
- GDB
- Valgrind
- Make
- gnuplot / ferramentas para debug

---

## 15. Exercícios sugeridos

1. Crie um programa que leia dois números e mostre a soma.
2. Implemente uma calculadora simples com `+`, `-`, `*`, `/`.
3. Faça um programa que leia um nome e imprima em maiúsculas.
4. Crie um array de 10 números e calcule a média.
5. Escreva uma função que inverta uma string.

---

## 16. Exemplos por nível

Veja exemplos prontos em arquivos `.c` organizados por nível de dificuldade em [docs/examples-c/README.md](examples-c/README.md).

- Iniciante: [docs/examples-c/iniciante](examples-c/iniciante)
- Intermediário: [docs/examples-c/intermediario](examples-c/intermediario)
- Avançado: [docs/examples-c/avancado](examples-c/avancado)

---

## 17. Próximo passo

Depois de estudar este guia, avance para exercícios em [exercises](../exercises/) e projetos práticos em [projects](../projects/).
