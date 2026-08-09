# Configuração do Ambiente de Desenvolvimento

Antes de escrever o primeiro programa em C, é necessário instalar um compilador e configurar um ambiente de desenvolvimento.

---

# Requisitos

- Sistema Operacional (Linux, Windows ou macOS)
- Compilador GCC ou Clang
- Editor de código (Visual Studio Code, Vim, Neovim, CLion, Code::Blocks, etc.) 
- Git (opcional, mas recomendado)

---

# Instalando o GCC

## Debian / Ubuntu

```bash
sudo apt update
sudo apt install build-essential
```

Verifique a instalação:

```bash
gcc --version
```

---

## Fedora

```bash
sudo dnf install gcc
```

---

## Arch Linux

```bash
sudo pacman -S gcc
```

---

## macOS

Instale as ferramentas de desenvolvimento da Apple:

```bash
xcode-select --install
```

Ou utilize o Homebrew:

```bash
brew install gcc
```

---

## Windows

Opções recomendadas:

- MSYS2
- MinGW-w64
- WSL (Windows Subsystem for Linux)

Verifique a instalação:

```bash
gcc --version
```

---

# Instalando o Visual Studio Code

Baixe em:

https://code.visualstudio.com/

Extensões recomendadas:

- C/C++ (Microsoft)
- C/C++ Extension Pack
- Code Runner (opcional)
- Error Lens (opcional)
- Better Comments (opcional)
- GitLens (opcional)

---

# Primeiro arquivo

Crie um arquivo chamado:

```text
main.c
```

---

# Compilando

No terminal:

```bash
gcc main.c -o main
```

ou

```bash
clang main.c -o main
```

---

# Executando

Linux/macOS

```bash
./main
```

Windows

```powershell
main.exe
```

---

# Fluxo de compilação

```
main.c
   │
   ▼
Compilador (GCC/Clang)
   │
   ▼
Arquivo executável
   │
   ▼
Execução
```

---

# Verificando o compilador

Descubra onde o compilador está instalado:

Linux/macOS

```bash
which gcc
```

Windows

```powershell
where gcc
```

Verifique a versão:

```bash
gcc --version
```

---

# Próximos tópicos

[Estrutura de Código em C](structurePrograms.md)

