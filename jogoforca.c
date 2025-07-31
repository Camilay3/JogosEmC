#include <stdio.h>
#include <string.h> /* Permite o strlen */
#include <ctype.h>

char palavraSecreta[20];
char chutes[26];
int tentativas = 0;

void exibicao() {
    printf("------------------------------------\n");
    printf("Boas vindas ao jogo de forca!\n");
    printf("Você deverá tentar acertar a palavra\n");
    printf("------------------------------------\n");
}

void chuta() {
    char chute;
    printf("Digite seu chute: ");
    scanf(" %c", &chute); /* O espaço faz com que o Enter seja ignorado */
    chutes[tentativas] = toupper(chute);
    tentativas++;
}

int jachutou(char letra) {
    int achou = 0;
    for(int j = 0; j < tentativas; j++) {
        if (chutes[j] == letra) {
            achou = 1;
            break;
        }
    }

    return achou;
}

void desenhaforca() {
    for(size_t i = 0; i < strlen(palavraSecreta); i++) { /* Tipo correto para armazenar o retorno de strlen() */
        int achou = jachutou(palavraSecreta[i]);

        if (achou) {
            printf("%c ", palavraSecreta[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

void escolhepalavra() {
    sprintf(palavraSecreta, "AMOR");
}

int main() {    
    int acertou = 0;
    int enforcou = 0;
    
    escolhepalavra();
    exibicao();

    do {
        printf("\n");
        desenhaforca();

        chuta();

    } while (!acertou && !enforcou);
}