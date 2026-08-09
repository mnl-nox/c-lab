// nesta seção, terá um pouco de conteudo mais avançado, pois para 
//  manipular strings é necessário entender como funcionam os arrays de caracteres em C.

// Para isto leia uma breve introdução de arrays, listas e vetores, 
// e depois retorne a este arquivo para continuar com a manipulação de strings.

// livro indicado = "C Programming: A Modern Approach" de K. N. King, 2ª edição, capítulo 6.

#include <stdio.h>
#include <string.h>  // necessario para manipular strings em C. 
#include <ctype.h> // necessario para usar o contador de caracteres em C. 
 
int main(void) {

        char motivated[54] = "O caminho pode ser longo, mas cada passo aproxima você do objetivo.";
        // vamos ver quantas palavras existem na frase, para isto vamos contar os espaços em branco. 
        size_t motivated_length = strlen (motivated); 
        int totalCaracteres = 0; 

        for (int i = 0; i < motivated_length; i++) {
                if (isalpha(motivated[i])) {
                        totalCaracteres++; 
                }
        }

        printf("A frase possui %d caracteres. Incluindo espaços em branco e ponto/virgula\n", totalCaracteres);
        
        return 0; 
};
