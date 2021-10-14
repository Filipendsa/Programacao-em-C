#include <stdio.h>
#define TAM 5
int main(void)
{
    float media, soma, altura, idadeMaior[TAM];
    int idade, cont = 0, cont2 = 0;

    for (int i = 0; i < TAM; i++)
    {
        printf("\nDigite a idade da %d pessoa: ", i + 1);
        scanf("%d", &idade);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (idade > 13)
        {
            idadeMaior[i] = altura;
            cont++;
        }
        soma += altura;
    }
    media = soma / TAM;

    for (int j = 0; j < cont; j++)
    {
        if (idadeMaior[j] < media)
        {
            cont2++;
        }
    }
    printf("\nA idade media eh %.2f metros.\n", media);
    printf("Quantidade de pessoas com altura inferior a media: %d", cont2);
}