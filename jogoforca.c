#include <stdio.h>
#include <string.h> /* Permite o strlen */

int main() {
    char palavraSecreta[20];
    
    sprintf(palavraSecreta, "AMOR");

    int acertou = 0;
    int enforcou = 0;
    int tentativas = 0;

    char chutes[26];
    char chute;

    do {
        printf("Digite seu chute: ");
        scanf(" %c", &chute); /* O espaço faz com que o Enter seja ignorado */
        chutes[tentativas] = chute;
        tentativas++;

        printf("\n");
        for(size_t i = 0; i < strlen(palavraSecreta); i++) { /* Tipo correto para armazenar o retorno de strlen() */

            int achou = 0;
            for(int j = 0; j < tentativas; j++) {
                if (chutes[j] == palavraSecreta[i]) {
                    achou = 1;
                    break;
                }
            }

            if (achou) {
                printf("%c ", palavraSecreta[i]);
            } else {
                printf("_ ");
            }

        }
        printf("\n");

    } while (!acertou && !enforcou);
}