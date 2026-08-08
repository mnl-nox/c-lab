# Dicas para Programar em C

Estas recomendações reúnem boas práticas utilizadas na indústria e ajudam a escrever código mais seguro, legível e fácil de manter.

---

# 1. Entenda antes de copiar

Não copie código da internet sem compreender seu funcionamento.

Pergunte-se sempre:

- O que este código faz?
- Como ele funciona?
- Por que foi escrito dessa forma?
- Existe uma alternativa melhor?

---

# 2. Compile sempre com avisos habilitados

Utilize:

```bash
gcc -Wall -Wextra -Wpedantic -std=c17
```

Os *warnings* frequentemente indicam erros que ainda não causaram falhas.

---

# 3. Trate avisos como erros

Durante o desenvolvimento:

```bash
-Werror
```

Isso incentiva a manter o código limpo.

---

# 4. Formate o código

Código organizado é mais fácil de ler.

```c
if (valor > 0)
{
    printf("Positivo\n");
}
```

Evite:

```c
if(valor>0){printf("Positivo\n");}
```

---

# 5. Utilize nomes significativos

Bom:

```c
int idade;
double temperatura;
```

Ruim:

```c
int a;
double x;
```

Exceto em índices de laços:

```c
for (int i = 0; i < n; i++)
```

---

# 6. Inicialize variáveis

Nunca utilize memória não inicializada.

```c
int contador = 0;
```

Evite:

```c
int contador;
```

---

# 7. Verifique retornos de funções

Sempre valide funções que podem falhar.

```c
FILE *arquivo = fopen("dados.txt", "r");

if (arquivo == NULL)
{
    perror("Erro ao abrir arquivo");
    return 1;
}
```

---

# 8. Libere memória

Tudo que for alocado deve ser liberado.

```c
int *vetor = malloc(100 * sizeof(int));

free(vetor);
```

---

# 9. Nunca ignore ponteiros nulos

```c
if (ptr != NULL)
{
    printf("%d\n", *ptr);
}
```

---

# 10. Evite números mágicos

Ruim:

```c
salario *= 1.15;
```

Melhor:

```c
#define AUMENTO 1.15

salario *= AUMENTO;
```

---

# 11. Use `const`

Quando um valor não deve mudar:

```c
const double PI = 3.141592653589793;
```

---

# 12. Faça uma coisa por função

Funções pequenas são mais fáceis de testar.

Bom:

```text
lerArquivo()
processarDados()
salvarResultado()
```

Evite funções com centenas de linhas.

---

# 13. Evite variáveis globais

Prefira passar informações por parâmetros.

---

# 14. Escreva comentários úteis

Explique **por que** algo foi feito.

Não explique o óbvio.

---

# 15. Indente corretamente

Escolha um padrão e mantenha-o.

Exemplo (K&R):

```c
if (x > 0) {
    printf("OK\n");
}
```

Ou Allman:

```c
if (x > 0)
{
    printf("OK\n");
}
```

O importante é manter consistência.

---

# 16. Utilize Git desde o início

Mesmo em projetos pequenos.

Comandos básicos:

```bash
git init

git add .

git commit -m "feat: primeiro programa"
```

---

# 17. Aprenda a usar o GDB

Nem todo erro aparece durante a compilação.

O depurador permite:

- executar passo a passo;
- visualizar variáveis;
- analisar a pilha de chamadas;
- localizar falhas.

---

# 18. Utilize Valgrind

No Linux:

```bash
valgrind ./programa
```

Ele detecta:

- vazamentos de memória;
- acessos inválidos;
- uso de memória não inicializada.

---

# 19. Leia mensagens de erro

Não ignore o compilador.

Normalmente ele informa:

- arquivo;
- linha;
- coluna;
- tipo do erro.

---

# 20. Aprenda a biblioteca padrão

Domine funções como:

```
printf()

scanf()

fopen()

fclose()

malloc()

calloc()

realloc()

free()

memcpy()

memset()

strlen()

strcmp()
```

---

# 21. Conheça os limites dos tipos

Exemplo:

```c
#include <limits.h>

printf("%d\n", INT_MAX);
```

---

# 22. Teste casos extremos

Não teste apenas entradas "bonitas".

Exemplos:

- zero
- números negativos
- valores máximos
- strings vazias
- ponteiros NULL

---

# 23. Aprenda a ler documentação

Não dependa apenas de vídeos.

Consulte:

- cppreference
- man pages
- documentação do GCC
- padrão ISO C

---

# 24. Estude o código gerado

Visualize o Assembly:

```bash
gcc -S main.c
```

Isso ajuda a compreender:

- otimizações;
- registradores;
- chamadas de função.

---

# 25. Domine ponteiros

Grande parte do poder da linguagem C está em:

- ponteiros;
- memória;
- arrays;
- funções.

Dedique tempo suficiente a esses conceitos.

---

# 26. Não tenha medo do terminal

Utilize frequentemente:

```bash
gcc
make
cmake
git
gdb
objdump
readelf
nm
strings
```

Essas ferramentas fazem parte do fluxo profissional.

---

# 27. Leia código de projetos reais

Alguns projetos escritos em C:

- Kernel Linux
- Git
- SQLite
- Vim
- Neovim
- Redis
- NGINX
- curl
- FFmpeg

Você aprenderá padrões e boas práticas usados por desenvolvedores experientes.

---

# 28. Escreva código todos os dias

Programação é uma habilidade prática.

Mesmo 30 minutos por dia geram progresso consistente.

---

# 29. Não memorize; compreenda

Em vez de decorar funções, entenda:

- como a memória funciona;
- como o compilador trabalha;
- como o sistema operacional executa o programa;
- como o hardware interpreta as instruções.

Esse conhecimento permanece válido mesmo quando a linguagem evolui.

---

# 30. Divirta-se explorando

Experimente modificar exemplos, provocar erros, usar o depurador e observar o comportamento do programa. A curiosidade é uma das melhores ferramentas para aprender C.

---

# Regra de Ouro

> **"Entenda primeiro os conceitos; a sintaxe é apenas a forma de expressá-los."**

Quem domina arquitetura de computadores, compilação, sistemas operacionais e estruturas de dados aprende C com muito mais profundidade do que quem apenas memoriza comandos.
