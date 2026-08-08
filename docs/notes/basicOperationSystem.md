# Noções Básicas de Sistemas Operacionais (Operating Systems)

Todo programa escrito em C é executado sobre um Sistema Operacional (SO). Compreender seus conceitos básicos facilita o entendimento de processos, memória, arquivos e chamadas de sistema.

---

# O que é um Sistema Operacional?

O Sistema Operacional é o software responsável por gerenciar os recursos do computador e fornecer uma interface entre o hardware e os programas.

Sem um SO, cada programa precisaria controlar diretamente o processador, a memória e os dispositivos.

```
Aplicações
     │
Bibliotecas (libc)
     │
Chamadas de Sistema (System Calls)
     │
Kernel
     │
Hardware
```

---

# Principais Funções

Um Sistema Operacional é responsável por:

- Gerenciamento de processos
- Gerenciamento de memória
- Sistema de arquivos
- Entrada e saída (I/O)
- Segurança e permissões
- Comunicação entre processos
- Gerenciamento de dispositivos

---

# Kernel

O **Kernel** é o núcleo do Sistema Operacional.

Ele permanece carregado na memória durante toda a execução do sistema.

Responsabilidades:

- Escalonar processos
- Gerenciar memória
- Controlar dispositivos
- Atender chamadas de sistema
- Gerenciar interrupções

Exemplos:

- Linux Kernel
- Windows NT Kernel
- XNU (macOS)

---

# Espaço do Usuário e Espaço do Kernel

O processador executa em dois modos:

```
+------------------------+
| User Space             |
| Programas do usuário   |
+------------------------+
           │
     System Call
           │
+------------------------+
| Kernel Space           |
| Sistema Operacional    |
+------------------------+
```

Programas comuns não acessam o hardware diretamente. Eles solicitam serviços ao kernel por meio de **system calls**.

---

# Processo

Quando um programa é iniciado, ele se torna um **processo**.

Cada processo possui:

- PID (Process ID)
- Memória própria
- Pilha (Stack)
- Heap
- Registradores
- Arquivos abertos

Exemplo:

```
hello.c
   │
Compilação
   │
hello
   │
Execução
   │
Processo
```

---

# Thread

Uma **thread** é uma unidade de execução dentro de um processo.

Um processo pode conter várias threads compartilhando a mesma memória.

```
Processo

├── Thread 1
├── Thread 2
└── Thread 3
```

---

# Escalonamento

O kernel decide qual processo utilizará a CPU.

```
CPU

Processo A
↓

Processo B
↓

Processo C
↓

Processo A
```

Essa troca rápida cria a impressão de que vários programas executam simultaneamente.

---

# Memória Virtual

Cada processo possui seu próprio espaço de endereçamento virtual.

```
Processo A

0x00000000
...
0xFFFFFFFF

Processo B

0x00000000
...
0xFFFFFFFF
```

Mesmo que dois processos utilizem o mesmo endereço virtual, eles acessam regiões físicas diferentes.

---

# Sistema de Arquivos

O Sistema Operacional organiza os dados em arquivos e diretórios.

Exemplo:

```
/

├── bin
├── boot
├── dev
├── etc
├── home
├── lib
├── proc
├── sys
├── tmp
├── usr
└── var
```

Em C, arquivos são manipulados pela biblioteca `<stdio.h>`.

---

# Entrada e Saída (I/O)

Todo dispositivo é tratado como uma origem ou destino de dados.

Exemplos:

- teclado
- monitor
- mouse
- disco
- impressora
- rede

No Linux, muitos dispositivos são representados como arquivos.

---

# Chamadas de Sistema (System Calls)

Uma **system call** permite que um programa solicite serviços ao kernel.

Exemplos em sistemas POSIX:

- `open()`
- `read()`
- `write()`
- `close()`
- `fork()`
- `exec()`
- `wait()`
- `mmap()`

Fluxo:

```
Programa C
      │
printf()
      │
Biblioteca libc
      │
write()
      │
Kernel
      │
Terminal
```

---

# Biblioteca Padrão (libc)

Nem toda função em C pertence ao Sistema Operacional.

Exemplo:

```c
printf();
malloc();
fopen();
```

Essas funções fazem parte da **Biblioteca Padrão C (libc)**, que, quando necessário, realiza chamadas ao kernel.

---

# Permissões

Nos sistemas Unix/Linux, cada arquivo possui permissões.

```
-rwxr-xr-x
```

Representam permissões para:

- proprietário (Owner)
- grupo (Group)
- outros (Others)

Tipos de acesso:

- leitura (r)
- escrita (w)
- execução (x)

---

# Variáveis de Ambiente

São informações fornecidas pelo Sistema Operacional aos programas.

Exemplos:

```
PATH

HOME

USER

LANG
```

Em C podem ser acessadas utilizando:

```c
getenv();
```

---

# Sinais (Signals)

O kernel pode enviar sinais para um processo.

Exemplos:

```
SIGINT

SIGTERM

SIGKILL

SIGSEGV
```

Um dos mais conhecidos é:

```
Ctrl + C
```

que envia:

```
SIGINT
```

---

# Ferramentas Básicas (Linux)

Todo programador C deveria conhecer:

```bash
pwd
ls
cd
mkdir
cp
mv
rm
cat
less
find
grep
```

Ferramentas para desenvolvimento:

```bash
gcc
clang
make
cmake
gdb
valgrind
strace
ltrace
nm
objdump
readelf
file
ldd
```

---

# Relação entre C e o Sistema Operacional

A linguagem C é amplamente utilizada para desenvolver:

- kernels
- drivers
- shells
- compiladores
- bibliotecas padrão
- servidores
- sistemas embarcados
- utilitários de linha de comando

Conhecer o funcionamento do Sistema Operacional torna conceitos como ponteiros, gerenciamento de memória, processos e chamadas de sistema muito mais intuitivos.

---

# Leituras Recomendadas

- **Operating Systems: Three Easy Pieces (OSTEP)** — Remzi H. Arpaci-Dusseau e Andrea C. Arpaci-Dusseau (gratuito).
- **Modern Operating Systems** — Andrew S. Tanenbaum.
- **Operating System Concepts** — Abraham Silberschatz, Peter B. Galvin e Greg Gagne.
- **Advanced Programming in the UNIX Environment (APUE)** — W. Richard Stevens e Stephen A. Rago.
- **The Linux Programming Interface (TLPI)** — Michael Kerrisk.
