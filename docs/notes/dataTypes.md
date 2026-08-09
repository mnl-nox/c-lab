# Manipulação de Dados em C

> Guia de estudo sobre manipulação de dados na linguagem C.

## Objetivos

- Compreender os tipos de dados da linguagem C.
- Manipular arrays, strings e matrizes.
- Dominar ponteiros e alocação dinâmica de memória.
- Trabalhar com estruturas (`struct`), uniões (`union`) e enumerações (`enum`).
- Manipular arquivos texto e binários.
- Utilizar operações em nível de bits.
- Desenvolver estruturas de dados eficientes.
- Aplicar boas práticas de gerenciamento de memória.

---

# Conteúdo

## 1. Variáveis e Tipos Primitivos

- `char`
- `short`
- `int`
- `long`
- `float`
- `double`
- `long double`
- `bool`

### Operador `sizeof`

```c
printf("%zu\n", sizeof(int));
```

---

## 2. Arrays

### Vetores

```c
int numeros[5] = {10, 20, 30, 40, 50};
```

### Percorrendo um vetor

```c
for (int i = 0; i < 5; i++)
{
    printf("%d\n", numeros[i]);
}
```

---

## 3. Strings

Biblioteca:

```c
#include <string.h>
```

Funções importantes:

- `strlen()`
- `strcpy()`
- `strncpy()`
- `strcmp()`
- `strncmp()`
- `strcat()`
- `strncat()`
- `strchr()`
- `strstr()`

---

## 4. Ponteiros

```c
int valor = 10;
int *ptr = &valor;
```

Conceitos importantes:

- Endereço de memória
- Desreferenciamento
- Ponteiro para ponteiro
- Aritmética de ponteiros

---

## 5. Alocação Dinâmica

Biblioteca:

```c
#include <stdlib.h>
```

Funções:

- `malloc()`
- `calloc()`
- `realloc()`
- `free()`

Exemplo:

```c
int *vetor = malloc(10 * sizeof(int));

free(vetor);
vetor = NULL;
```

---

## 6. Struct

```c
struct Pessoa
{
    char nome[50];
    int idade;
};
```

---

## 7. Union

```c
union Valor
{
    int inteiro;
    float real;
};
```

Aplicações:

- Hardware
- Protocolos
- Sistemas embarcados

---

## 8. Enum

```c
enum Estado
{
    DESLIGADO,
    LIGADO,
    PAUSADO
};
```

---

## 9. Manipulação de Bits

Operadores:

- `&`
- `|`
- `^`
- `~`
- `<<`
- `>>`

Exemplo:

```c
flags |= 0x04;
flags &= ~0x04;
```

---

## 10. Arquivos

Biblioteca:

```c
#include <stdio.h>
```

Funções:

- `fopen()`
- `fclose()`
- `fgets()`
- `fprintf()`
- `fscanf()`
- `fread()`
- `fwrite()`

---

## 11. Manipulação de Memória

Biblioteca:

```c
#include <string.h>
```

Funções:

- `memcpy()`
- `memmove()`
- `memset()`
- `memcmp()`

---

## 12. Conversão de Dados

- `atoi()`
- `atof()`
- `strtol()`
- `strtod()`

---

## 13. Casting

```c
double numero = 12.8;
int inteiro = (int) numero;
```

---

## 14. Buffers

Boas práticas:

- Evite buffer overflow.
- Utilize `snprintf()`.
- Utilize `fgets()`.
- Evite `gets()`.

---

## 15. Matrizes

```c
int matriz[3][3];
```

Percorrendo:

```c
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ", matriz[i][j]);
    }
}
```

---

## 16. Estruturas de Dados

Implemente em C:

- Vetores dinâmicos
- Lista ligada
- Lista duplamente ligada
- Pilha
- Fila
- Deque
- Árvore Binária
- AVL
- Red-Black Tree
- Heap
- Hash Table
- Grafos

---

## 17. Arquivos Binários

Escrevendo:

```c
fwrite(&objeto, sizeof(objeto), 1, arquivo);
```

Lendo:

```c
fread(&objeto, sizeof(objeto), 1, arquivo);
```

---

## 18. Boas Práticas

- Inicialize todas as variáveis.
- Sempre verifique o retorno de `malloc()`.
- Sempre libere memória com `free()`.
- Utilize `const` quando possível.
- Evite variáveis globais.
- Prefira funções pequenas e reutilizáveis.
- Documente o código.
- Utilize nomes significativos.

---

# Erros Comuns

- Buffer Overflow
- Memory Leak
- Double Free
- Use After Free
- Ponteiros não inicializados
- Acesso fora dos limites do vetor
- Esquecer de fechar arquivos
- Confundir `=` com `==`

---

# Ferramentas Recomendadas

## Compiladores

- GCC
- Clang

## Depuração

- GDB

## Análise de Memória

- Valgrind
- AddressSanitizer (ASan)

## Análise Estática

- Clang-Tidy
- Cppcheck

---

# Roadmap de Estudos

- [*] Tipos de Dados
- [ ] Variáveis
- [ ] Arrays
- [ ] Strings
- [ ] Ponteiros
- [ ] Funções
- [ ] Alocação Dinâmica
- [ ] Struct
- [ ] Union
- [ ] Enum
- [ ] Manipulação de Bits
- [ ] Arquivos
- [ ] Manipulação de Memória
- [ ] Matrizes
- [ ] Estruturas de Dados
- [ ] Algoritmos
- [ ] Otimização
- [ ] Depuração

---

## Referências

- ISO/IEC 9899 — Linguagem C
- *The C Programming Language* — Brian W. Kernighan & Dennis M. Ritchie
- *Expert C Programming* — Peter van der Linden
- *C Programming: A Modern Approach* — K. N. King
- Documentação GCC
- Documentação Clang

---

> **Objetivo:** dominar a manipulação de dados em C para construir aplicações eficientes, seguras e de alto desempenho.
