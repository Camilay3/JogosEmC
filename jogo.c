#include <stdio.h>  /* Permite o printf */
#include <locale.h> /* Permite caracteres especiais (alterar UTF-8 para ISO 8859-1 no vs code) */

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); /* Permite caracteres especiais */

    printf("------------------------------------\n");
    printf("Boas vindas ao jogo de adivinhação!\n");
    printf("Você deverá tentar acertar o número\nque o computador pensou.\n");
    printf("------------------------------------\n");

    int numSecreto = 42;
    printf("(O numero secreto é %d)\n", numSecreto);

    int chute;
    int tentativas = 1;

    while (1) {
        printf("\nQual é sua %d° tentativa?: ", tentativas);
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos.\n");
            continue;
        }

        if (chute == numSecreto) {
            printf("Parabéns! Você acertou o número secreto!\n");
            break;

        } else if (chute > numSecreto) {
            printf("Uma pena, seu chute é maior que o número secreto... Mas você pode tentar novamente!\n");
        } else {
            printf("Uma pena, seu chute é menor que o número secreto... Mas você pode tentar novamente!\n");
        }
        
        tentativas++;
    }

    printf("\nFim de jogo. Você acertou em %d tentativa(s)!", tentativas);
    return 0;
}