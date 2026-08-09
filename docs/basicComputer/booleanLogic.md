# Lógica Booleana e Tabelas-Verdade em C

Documentação técnica sobre **Lógica Booleana**, **Álgebra Booleana** e sua implementação na linguagem **C**, abordando operadores lógicos, operadores relacionais, precedência de avaliação, curto-circuito (*short-circuit evaluation*) e construção de expressões condicionais.

Este material é destinado a estudantes de programação, arquitetura de computadores, sistemas embarcados, eletrônica digital e ciência da computação.

---

# Objetivos

* Compreender os fundamentos da Álgebra Booleana.
* Entender como a linguagem C representa valores lógicos.
* Construir expressões condicionais eficientes.
* Interpretar tabelas-verdade.
* Utilizar operadores lógicos e relacionais corretamente.
* Compreender a avaliação em curto-circuito (*Short-Circuit Evaluation*).

---

# Conteúdo

* Fundamentos da Álgebra Booleana
* Representação de Valores Booleanos em C
* Operadores Relacionais
* Operadores Lógicos
* Avaliação em Curto-Circuito
* Precedência e Associatividade
* Tabelas-Verdade
* Simplificação de Expressões
* Exemplos Práticos
* Boas Práticas

---

# Representação Booleana em C

Historicamente, a linguagem C não possuía um tipo booleano nativo.

Uma expressão lógica produz um valor inteiro:

* **0** → falso
* **qualquer valor diferente de 0** → verdadeiro

Exemplo:

```c
int resultado = (10 > 5);

printf("%d\n", resultado);
```

Saída:

```text
1
```

---

# Tipo bool (C99)

A partir do padrão **C99**, a biblioteca `<stdbool.h>` introduziu o tipo booleano.

```c
#include <stdbool.h>

bool ligado = true;
bool erro = false;
```

Internamente:

```text
false == 0
true  == 1
```

---

# Operadores Relacionais

Operadores responsáveis por produzir expressões booleanas.

| Operador | Descrição      |
| -------- | -------------- |
| `==`     | Igualdade      |
| `!=`     | Diferença      |
| `>`      | Maior que      |
| `<`      | Menor que      |
| `>=`     | Maior ou igual |
| `<=`     | Menor ou igual |

Exemplo:

```c
int a = 15;
int b = 20;

if (a < b)
{
    printf("Verdadeiro");
}
```

---

# Operadores Lógicos

## Operador AND (`&&`)

Retorna verdadeiro apenas quando **todas** as expressões forem verdadeiras.

| A | B | Resultado |
| - | - | --------- |
| 0 | 0 | 0         |
| 0 | 1 | 0         |
| 1 | 0 | 0         |
| 1 | 1 | 1         |

Expressão:

```text
A && B
```

Aplicação:

```c
if (idade >= 18 && possuiCNH)
{
    dirigir();
}
```

---

## Operador OR (`||`)

Retorna verdadeiro quando pelo menos uma expressão é verdadeira.

| A | B | Resultado |
| - | - | --------- |
| 0 | 0 | 0         |
| 0 | 1 | 1         |
| 1 | 0 | 1         |
| 1 | 1 | 1         |

Expressão:

```text
A || B
```

---

## Operador NOT (`!`)

Realiza a negação lógica.

| A | Resultado |
| - | --------- |
| 0 | 1         |
| 1 | 0         |

Expressão:

```text
!A
```

Exemplo:

```c
if (!conectado)
{
    reconectar();
}
```

---

# Avaliação em Curto-Circuito (Short-Circuit Evaluation)

A linguagem C interrompe a avaliação quando o resultado da expressão já é conhecido.

## AND

```c
A && B
```

Se **A** for falsa, **B** não será avaliada.

Exemplo:

```c
if (ptr != NULL && ptr->valor == 10)
{
}
```

Caso `ptr == NULL`, o segundo operando não é executado, evitando *Undefined Behavior* por desreferenciação de ponteiro nulo.

---

## OR

```c
A || B
```

Se **A** for verdadeira, **B** não será executada.

Exemplo:

```c
if (usuario_admin || validarSenha())
{
}
```

Se `usuario_admin` for verdadeiro, `validarSenha()` não será chamada.

---

# Precedência dos Operadores

Da maior para a menor prioridade:

| Prioridade | Operadores  |   |   |
| ---------- | ----------- | - | - |
| 1          | `()`        |   |   |
| 2          | `!`         |   |   |
| 3          | `* / %`     |   |   |
| 4          | `+ -`       |   |   |
| 5          | `< <= > >=` |   |   |
| 6          | `== !=`     |   |   |
| 7          | `&&`        |   |   |
| 8          | `           |   | ` |

Exemplo:

```c
resultado = A || B && C;
```

Equivale a:

```c
resultado = A || (B && C);
```

---

# Associatividade

Os operadores lógicos possuem associatividade da esquerda para a direita.

```c
A && B && C
```

É interpretado como:

```text
(A && B) && C
```

---

# Construção de Expressões Condicionais

Expressão simples:

```c
if (temperatura > 30)
```

Expressão composta:

```c
if (temperatura > 20 &&
    temperatura < 35)
```

Expressão complexa:

```c
if ((idade >= 18 && idade <= 65) ||
    possuiAutorizacao)
```

---

# Simplificação de Expressões

Evite:

```c
if (ativo == true)
```

Prefira:

```c
if (ativo)
```

Evite:

```c
if (ativo == false)
```

Prefira:

```c
if (!ativo)
```

---

# Leis Fundamentais da Álgebra Booleana

## Lei da Identidade

```text
A && 1 = A
A || 0 = A
```

## Lei da Dominação

```text
A && 0 = 0
A || 1 = 1
```

## Lei da Dupla Negação

```text
!!A = A
```

## Lei da Idempotência

```text
A && A = A
A || A = A
```

## Lei do Complemento

```text
A && !A = 0
A || !A = 1
```

## Leis de De Morgan

```text
!(A && B) = !A || !B

!(A || B) = !A && !B
```

Essas leis são amplamente utilizadas na simplificação de circuitos digitais, otimização de expressões condicionais e compiladores.

---

# Exemplo Completo

```c
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool autenticado = true;
    bool administrador = false;

    if (autenticado && !administrador)
    {
        printf("Usuário autenticado.\n");
    }

    return 0;
}
```

---

# Boas Práticas

* Utilize `bool` para representar estados lógicos.
* Explore o curto-circuito para evitar acessos inválidos a memória.
* Agrupe expressões complexas com parênteses.
* Prefira expressões simples e semanticamente claras.
* Evite comparações desnecessárias com `true` e `false`.
* Mantenha operadores relacionais e lógicos separados por nível de abstração para melhorar a legibilidade.

---

# Referências

* ISO/IEC 9899:2018 (C17)
* ISO/IEC 9899:2024 (C23)
* Brian W. Kernighan & Dennis M. Ritchie — *The C Programming Language*
* K. N. King — *C Programming: A Modern Approach*
* George Boole — *An Investigation of the Laws of Thought*
* Andrew S. Tanenbaum — *Structured Computer Organization*
* David A. Patterson & John L. Hennessy — *Computer Organization and Design*

