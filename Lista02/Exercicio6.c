#include <stdio.h>
#define TAM 10

void main()
{
    int vet1[TAM], vet2[TAM], vet3[TAM * 2], i;

    printf("Preencha o primeiro vetor com 10 posicoes (Somente numeros):\n");
    for (i = 0; i < TAM; i++)
    {
        scanf("%i", &vet1[i]);
    }

    printf("Preencha o segundo vetor com 10 posicoes: (Somente numeros)\n");
    for (i = 0; i < TAM; i++)
    {
        scanf("%i", &vet2[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        vet3[i * 2] = vet1[i];
        vet3[i * 2 + 1] = vet2[i];
    }

    printf("Vetor 1: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%i ", vet1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%i ", vet2[i]);
    }
    printf("\n");

    printf("Resultado dos Vetores 1 e 2 -> 3: ");
    for (i = 0; i < TAM * 2; i++)
    {
        printf("%i ", vet3[i]);
    }
}