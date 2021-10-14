#include <stdio.h>

int i = 0, j = 0, soma = 0, media = 0, acimaMedia = 0, abaixoMedia = 0;

void main()
{
    int notas[] = {0}, filtro = 0;

    do
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &filtro);
        if (filtro != -1)
        {
            notas[i] = filtro;
            i++;
        }
    } while (filtro != -1);

    printf("\n\nForam lidos %d valores:\n\n", i);
    for (j = 0; j < i; j++)
    {
        printf("%d, ", notas[j]);
    }

    printf("\n\nValores na ordem inversa:\n\n");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d\n", notas[j]);
    }

    for (j = 0; j < i; j++)
    {
        soma += notas[j];
    }
    printf("\n\nSoma das notas: %d", soma);

    media = soma / i;
    printf("\n\nMedia: %d", media);

    printf("\n\nValores acima da media: ");
    for (j = 0; j < i; j++)
    {
        if (notas[j] > media)
        {
            printf("%d, ", notas[j]);
            acimaMedia++;
        }
    }
    printf("\nTotal de: %d", acimaMedia);

    printf("\n\nValores abaixo de sete: ");
    for (j = 0; j < i; j++)
    {
        if (notas[j] < 7)
        {
            printf("%d, ", notas[j]);
            abaixoMedia++;
        }
    }
    printf("\nTotal de: %d", abaixoMedia);
}