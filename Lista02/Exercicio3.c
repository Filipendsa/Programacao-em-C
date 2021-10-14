#include <stdio.h>

void main()
{

    int tamPar = 0, tamImpar = 0, i, vet[20], vetPar[20], vetImpar[20];

    for (i = 0; i < 20; i++)
    {
        printf("\nDigite o %d numero: ", i + 1);
        scanf("%d%*c", &vet[i]);

        if (vet[i] % 2 == 0)
        {
            vetPar[tamPar] = vet[i];
            tamPar++;
        }
        else
        {
            vetImpar[tamImpar] = vet[i];
            tamImpar++;
        }
    }

    printf("\nVetor:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t", vet[i]);
    }

    printf("\nVetor Par:\n");
    for (i = 0; i < tamPar; i++)
    {
        printf("%d\t", vetPar[i]);
    }

    printf("\nVetor Impar:\n");
    for (i = 0; i < tamImpar; i++)
    {
        printf("%d\t", vetImpar[i]);
    }
}