#include <stdio.h>  /* Permite o printf */
#include <locale.h> /* Permite caracteres especiais (alterar UTF-8 para ISO 8859-1 no vs code) */

#define TENTATIVAS 5 /* Diretiva (constante) */

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); /* Permite caracteres especiais */

    printf("--------------------------------------\n");
    printf("Boas vindas ao jogo de adivinha��o!\n");
    printf("Voc� dever� tentar acertar o n�mero que\no computador pensou em %d tentativas.", TENTATIVAS);
    printf("--------------------------------------\n");

    int numSecreto = 42;
    printf("(O numero secreto � %d)\n", numSecreto);

    int chute;
    for (int i = 1; i <= TENTATIVAS; i++)
    {
        printf("Qual � o seu %d� chute?: ", i);
        scanf("%d", &chute);

        if (chute == numSecreto)
        {
            printf("Parab�ns! Voc� acertou o n�mero secreto!");
            break;
        }
        else if (chute > numSecreto)
        {
            printf("Uma pena, seu chute � maior que o n�mero secreto... Mas voc� pode tentar novamente!");
        }
        else
        {
            printf("Uma pena, seu chute � menor que o n�mero secreto... Mas voc� pode tentar novamente!");
        }
    }

    printf("Fim de jogo. Suas tentativas acabaram!");
    return 0;
}