# Estrutura de um Programa em C

Todo programa em C segue uma estrutura básica. Compreender cada parte é essencial antes de estudar variáveis, operadores e controle de fluxo.

---

# Estrutura Básica

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");

    return 0;
}
```

---

# Anatomia do Programa

```c
#include <stdio.h>    // Biblioteca padrão de entrada e saída

int main(void)        // Função principal
{
    printf("Hello, World!\n");   // Exibe uma mensagem

    return 0;         // Encerra o programa
}
```

---

# 1. Diretivas do Pré-processador

As diretivas começam com `#` e são processadas antes da compilação.

Exemplo:

```c
#include <stdio.h>
```

A diretiva `#include` informa ao compilador que o conteúdo do arquivo de cabeçalho (`header`) deve ser incluído no programa.

Alguns headers comuns:

| Biblioteca | Finalidade |
|------------|------------|
| `<stdio.h>` | Entrada e saída |
| `<stdlib.h>` | Utilidades gerais |
| `<string.h>` | Manipulação de strings |
| `<math.h>` | Funções matemáticas |
| `<ctype.h>` | Manipulação de caracteres |
| `<time.h>` | Data e hora |

>Existem mais, contudo não abordaremos por agora.

---

# 2. A Função `main()`

Todo programa em C começa sua execução pela função `main`.

```c
int main(void)
{
}
```

ou

```c
int main(int argc, char *argv[])
{
}
```

Ela é o ponto de entrada do programa.

---

# 3. Blocos

Blocos são delimitados por chaves.

```c
{
    // código
}
```

Tudo que pertence à função fica entre `{` e `}`.

---

# 4. Instruções

Cada instrução termina com ponto e vírgula.

```c
printf("Olá!\n");
```

Outro exemplo:

```c
int idade = 20;
```

---

# 5. Comentários

Comentário de uma linha:

```c
// Isto é um comentário
```

Comentário de múltiplas linhas:

```c
/*
Comentário
de várias
linhas
*/
```

Comentários servem para documentar o código e não são compilados.

---

# 6. A função `printf()`

A função `printf()` pertence à biblioteca `<stdio.h>`.

Exemplo:

```c
printf("Bem-vindo!\n");
```

Saída:

```
Bem-vindo!
```

O caractere `\n` representa uma quebra de linha.

---

# 7. O `return`

Ao final da função `main`, utiliza-se:

```c
return 0;
```

O valor `0` indica que o programa terminou com sucesso.

Valores diferentes de zero normalmente indicam algum erro.

---

# Fluxo de Execução

```
Início
   │
   ▼
main()
   │
   ▼
Executa as instruções
   │
   ▼
return 0
   │
   ▼
Fim
```

---

# Exemplo Completo

```c
#include <stdio.h>

int main(void)
{
    printf("Meu primeiro programa em C!\n");

    return 0;
}
```

Saída:

```
Meu primeiro programa em C!
```

---

# Conceitos Aprendidos

- Estrutura básica de um programa em C
- Diretivas do pré-processador
- Biblioteca `<stdio.h>`
- Função `main()`
- Blocos de código
- Instruções
- Comentários
- Função `printf()`
- Código de retorno (`return 0`)

---

# Próximo tópico

**Tipos de dados, variáveis e constantes**: como armazenar informações na memória utilizando os principais tipos primitivos da linguagem C.
