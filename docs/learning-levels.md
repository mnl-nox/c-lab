# Níveis de Aprendizagem por Setor (para C)

Este documento propõe níveis de aprendizagem — _Iniciante_, _Intermediário_ e _Avançado_ — para cada setor do conteúdo do repositório, com foco na linguagem C.

1. Basics (Conceitos fundamentais)
   - Iniciante: Sintaxe básica, `main()`, `printf`, tipos primitivos, compilação simples.
   - Intermediário: Boas práticas, `const`, escopos, cabeçalhos, organização de arquivos.
   - Avançado: Análise de compilação, portabilidade e uso de ferramentas de lint/format.

2. Controle de Fluxo
   - Iniciante: `if`, `else`, `switch`, laços `for`, `while`, `do`.
   - Intermediário: Estruturas de controle complexas e técnicas para evitar estados errôneos.
   - Avançado: Técnicas de otimização de loops e transformação de algoritmos.

3. Tipos de Dados e Memória
   - Iniciante: `int`, `char`, `float/double`, arrays estáticos.
   - Intermediário: `sizeof`, alinhamento, conversões (casting), `malloc`/`free` básicos.
   - Avançado: Alocação dinâmica avançada, fragmentação, análise de uso de memória (valgrind).

4. Ponteiros e Gerenciamento de Memória
   - Iniciante: Conceito de ponteiro, `&` e `*`, arrays vs ponteiros.
   - Intermediário: Ponteiros para funções, ponteiros múltiplos, gestão de buffers seguros.
   - Avançado: Allocation strategies, memory leaks debugging, ponteiros em sistemas embarcados.

5. Strings e Arrays
   - Iniciante: Terminação `\0`, `strlen`, `strcpy`, `printf` para strings.
   - Intermediário: `strncpy`, `snprintf`, manipulação segura, funções de utilidade.
   - Avançado: Implementações eficientes, codificações, e manipulação de grandes buffers.

6. Funções e Modularização
   - Iniciante: Declaração/definição de funções, parâmetros, retorno.
   - Intermediário: Modularização com `.h` e `.c`, vinculação (linking), design de API.
   - Avançado: Técnicas de abstração, testes unitários, mocking, e geração de bibliotecas.

7. Estruturas, Unions e Tipos Compostos
   - Iniciante: `struct`, acesso a campos, inicialização básica.
   - Intermediário: `typedef`, `union`, padding e alinhamento, uso prático.
   - Avançado: Serialização, ABI compatibility e design de interfaces C estáveis.

8. Arquivos e I/O
   - Iniciante: `fopen`, `fclose`, `fprintf`, `fscanf`, modos de abertura.
   - Intermediário: Leitura/escrita binária, erros e buffering, manipulação de streams.
   - Avançado: Performance I/O, mmap, e tratamento robusto de falhas.

9. Sistemas e Programação de Baixo Nível
   - Iniciante: Chamadas de sistema básicas e diferenças entre biblioteca vs sistema.
   - Intermediário: Processos, sinais, pipes e I/O não-bloqueante.
   - Avançado: Programação concorrente, threads (`pthread`), sincronização e drivers.

10. Compiladores, Tooling e Depuração

- Iniciante: Uso do `gcc`, flags básicas, mensagens de erro.
- Intermediário: Flags de otimização, `makefile`/`Makefile`, linking estático/dinâmico.
- Avançado: Profiling, geração de assembly, sanitizers (`-fsanitize=address,undefined`).

11. Projetos e Aplicações

- Iniciante: Pequenos programas de utilidade (calculadora, I/O simples).
- Intermediário: Organização de projetos, testes e integração contínua.
- Avançado: Arquitetura de aplicações, deploy, cross-compilation e integração com C++/outros.
