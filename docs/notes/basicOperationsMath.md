# Operações Matemáticas em C

Esta pasta reúne exemplos práticos das principais operações matemáticas na linguagem **C**, abordando desde operações aritméticas básicas até funções da biblioteca padrão `<math.h>`.

O objetivo é servir como material de estudo para iniciantes e como referência rápida para estudantes de programação, algoritmos e estruturas de dados.

---

# Conteúdo

* Operadores Aritméticos
* Operadores de Incremento e Decremento
* Operadores de Atribuição
* Operadores Relacionais
* Operadores Lógicos
* Precedência de Operadores
* Biblioteca `math.h`
* Exercícios Propostos

---

# Requisitos

* GCC ou Clang
* Visual Studio Code (opcional)
* Sistema Operacional Windows, Linux ou macOS

---

# Compilação

## Linux / macOS

```bash
gcc main.c -o programa
./programa
```

## Windows (MinGW)

```bash
gcc main.c -o programa.exe
programa.exe
```

Caso utilize funções da biblioteca matemática (`math.h`), compile com:

```bash
gcc main.c -lm
```

---

# Operadores Aritméticos

| Operador | Descrição        | Exemplo |
| -------- | ---------------- | ------- |
| `+`      | Soma             | `a + b` |
| `-`      | Subtração        | `a - b` |
| `*`      | Multiplicação    | `a * b` |
| `/`      | Divisão          | `a / b` |
| `%`      | Resto da divisão | `a % b` |

Exemplo:

```c
#include <stdio.h>

int main() {

    int a = 20;
    int b = 6;

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão: %d\n", a / b);
    printf("Resto: %d\n", a % b);

    return 0;
}
```

---

# Divisão Inteira

```c
int a = 10;
int b = 3;

printf("%d", a / b);
```

Saída:

```
3
```

A parte decimal é descartada.

---

# Divisão com Ponto Flutuante

```c
float a = 10.0;
float b = 3.0;

printf("%.2f", a / b);
```

Saída:

```
3.33
```

---

# Incremento

```c
int x = 5;

x++;

printf("%d", x);
```

Resultado:

```
6
```

Também existe:

```c
++x;
```

---

# Decremento

```c
x--;
--x;
```

---

# Operadores de Atribuição

```c
x += 5;
x -= 3;
x *= 4;
x /= 2;
x %= 3;
```

Equivalente a:

```c
x = x + 5;
```

---

# Operadores Relacionais

| Operador | Significado    |
| -------- | -------------- |
| `==`     | Igual          |
| `!=`     | Diferente      |
| `>`      | Maior          |
| `<`      | Menor          |
| `>=`     | Maior ou igual |
| `<=`     | Menor ou igual |

Exemplo:

```c
if (a > b)
{
    printf("A é maior");
}
```

---

# Operadores Lógicos

| Operador | Descrição |   |    |
| -------- | --------- | - | -- |
| `&&`     | E         |   |    |
| `        |           | ` | OU |
| `!`      | NÃO       |   |    |

Exemplo:

```c
if (idade >= 18 && idade <= 60)
{
    printf("Adulto");
}
```

---

# Precedência dos Operadores

Ordem de execução:

1. `()`
2. `*`, `/`, `%`
3. `+`, `-`
4. Comparações
5. Operadores lógicos

Exemplo:

```c
int resultado = 5 + 4 * 3;
```

Resultado:

```
17
```

---

# Biblioteca math.h

Inclua:

```c
#include <math.h>
```

---

## Potência

```c
double resultado = pow(2, 5);
```

Resultado:

```
32
```

---

## Raiz Quadrada

```c
double r = sqrt(81);
```

Resultado:

```
9
```

---

## Valor Absoluto

```c
double x = fabs(-10.5);
```

Resultado:

```
10.5
```

---

## Arredondamento

```c
round(5.6);
floor(5.9);
ceil(5.1);
```

| Função    | Resultado            |
| --------- | -------------------- |
| `round()` | Arredonda            |
| `floor()` | Arredonda para baixo |
| `ceil()`  | Arredonda para cima  |

---

## Exponencial

```c
exp(2);
```

Calcula:

```
e²
```

---

## Logaritmo Natural

```c
log(10);
```

---

## Logaritmo Base 10

```c
log10(100);
```

---

## Seno

```c
sin(0);
```

---

## Cosseno

```c
cos(0);
```

---

## Tangente

```c
tan(0);
```

---

# Exemplo Completo

```c
#include <stdio.h>
#include <math.h>

int main()
{
    double numero = 25;

    printf("Raiz: %.2f\n", sqrt(numero));
    printf("Potência: %.2f\n", pow(numero, 2));
    printf("Log: %.2f\n", log(numero));
    printf("Seno: %.2f\n", sin(numero));

    return 0;
}
```
---

# Exercícios

* Calculadora básica.
* Calculadora de IMC.
* Conversor de temperatura.
* Média de notas.
* Juros simples.
* Juros compostos.
* Equação do segundo grau.
* Calculadora de área de figuras geométricas.
* Calculadora de potência.
* Calculadora científica usando `math.h`.

---

# Boas Práticas

* Utilize parênteses para tornar expressões complexas mais legíveis.
* Escolha o tipo de dado adequado (`int`, `float`, `double`).
* Evite divisões inteiras quando o resultado esperado for decimal.
* Inclua `<math.h>` apenas quando necessário.
* Lembre-se de adicionar a opção `-lm` na compilação ao utilizar funções matemáticas.

---

# Referências

* Padrão ISO C (C17/C23)
* Documentação do GCC
* Manual da biblioteca padrão C (`math.h`)
* *The C Programming Language* — Brian W. Kernighan e Dennis M. Ritchie
* *C Programming: A Modern Approach* — K. N. King

