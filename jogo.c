#include <stdio.h>  /* Permite o printf */
#include <locale.h> /* Permite caracteres especiais (alterar UTF-8 para ISO 8859-1 no vs code) */

#define TENTATIVAS 5 /* Diretiva (constante) */

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); /* Permite caracteres especiais */

    printf("--------------------------------------\n");
    printf("Boas vindas ao jogo de adivinhação!\n");
    printf("Você deverá tentar acertar o número que\no computador pensou em %d tentativas.", TENTATIVAS);
    printf("--------------------------------------\n");

    int numSecreto = 42;
    printf("(O numero secreto é %d)\n", numSecreto);

    int chute;
    for (int i = 1; i <= TENTATIVAS; i++)
    {
        printf("Qual é o seu %d° chute?: ", i);
        scanf("%d", &chute);

        if (chute == numSecreto)
        {
            printf("Parabéns! Você acertou o número secreto!");
            break;
        }
        else if (chute > numSecreto)
        {
            printf("Uma pena, seu chute é maior que o número secreto... Mas você pode tentar novamente!");
        }
        else
        {
            printf("Uma pena, seu chute é menor que o número secreto... Mas você pode tentar novamente!");
        }
    }

    printf("Fim de jogo. Suas tentativas acabaram!");
    return 0;
}