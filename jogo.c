#include <stdio.h>  /* Permite o printf */
#include <locale.h> /* Permite caracteres especiais (alterar UTF-8 para ISO 8859-1 no vs code) */

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); /* Permite caracteres especiais */

    printf("-----------------------------------\n");
    printf("Boas vindas ao jogo de adivinhar!\n");
    printf("-----------------------------------\n");

    int numeroSecreto = 42;
    printf("(O numero secreto é %d)\n", numeroSecreto);

    int chute;
    printf("Qual é o seu chute?: ");
    scanf("%d", &chute);

    return 0;
}