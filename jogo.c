#include <stdio.h>  /* Permite o printf */
#include <locale.h> /* Permite caracteres especiais (alterar UTF-8 para ISO 8859-1 no vs code) */

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); /* Permite caracteres especiais */

    printf("------------------------------------\n");
    printf("Boas vindas ao jogo de adivinha��o!\n");
    printf("Voc� dever� tentar acertar o n�mero\nque o computador pensou.\n");
    printf("------------------------------------\n");

    int numSecreto = 42;
    printf("(O numero secreto � %d)\n", numSecreto);

    int chute;
    int tentativas = 1;

    while (1) {
        printf("\nQual � sua %d� tentativa?: ", tentativas);
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos.\n");
            continue;
        }

        if (chute == numSecreto) {
            printf("Parab�ns! Voc� acertou o n�mero secreto!\n");
            break;

        } else if (chute > numSecreto) {
            printf("Uma pena, seu chute � maior que o n�mero secreto... Mas voc� pode tentar novamente!\n");
        } else {
            printf("Uma pena, seu chute � menor que o n�mero secreto... Mas voc� pode tentar novamente!\n");
        }
        
        tentativas++;
    }

    printf("\nFim de jogo. Voc� acertou em %d tentativa(s)!", tentativas);
    return 0;
}