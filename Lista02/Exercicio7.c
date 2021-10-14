#include <stdio.h>
#define TAM 2

void main()
{
    int vetor1[TAM], vetor2[TAM], vetor3[TAM], vetor4[TAM * 3];

    printf("Preencha o primeiro vetor com 02 posicoes (Somente numeros):\n");
    for (int i = 0; i < TAM; i++)
    {
        scanf("%i", &vetor1[i]);
    }

    printf("Preencha o segundo vetor com 02 posicoes (Somente numeros):\n");
    for (int i = 0; i < TAM; i++)
    {
        scanf("%i", &vetor2[i]);
    }

    printf("Preencha o terceiro vetor com 02 posicoes (Somente numeros):\n");
    for (int i = 0; i < TAM; i++)
    {
        scanf("%i", &vetor3[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        vetor4[i * 3] = vetor1[i];
        vetor4[i * 3 + 1] = vetor2[i];
        vetor4[i * 3 + 2] = vetor3[i];
    }

    printf("Vetor 1: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%i ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%i ", vetor2[i]);
    }
    printf("\n");

    printf("Vetor 3: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%i ", vetor3[i]);
    }
    printf("\n");

    printf("Resultado dos Vetores 1, 2 e 3 -> 4: ");
    for (int i = 0; i < TAM * 3; i++)
    {
        printf("%i ", vetor4[i]);
    }
}