#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

//protótipos das funções
void ajustaTemperaturas(float[], int);
float mediaTemperaturas(float[], int);

int main()
{
    int i;
    float Temperaturas[TAMANHO] = {23.9, 24.5, 26.8, 22.9, 19.4};
    printf("Conteúdo atual do array de temperaturas:\n\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Temperatura %d: %4.2f\n", i + 1, Temperaturas[i]);
    }

    // Calculando a temperatura média:
    printf("Temperatura media: %4.2f\n", mediaTemperaturas(Temperaturas, TAMANHO));
    // Chamando a função de ajuste de temperatura e passando o array para ela:
    ajustaTemperaturas(Temperaturas, TAMANHO);
    printf("\n\nVerificando as novas temperaturas armazenadas no array:\n\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Temperatura %d: %4.2f\n", i + 1, Temperaturas[i]);
    }
    return 0;
}
// função que altera as temperaturas armazenadas no array, diminuindo 2 graus:
void ajustaTemperaturas(float a[], int tam)
{
    int j;
    for (j = 0; j < tam; j++)
    {
        a[j] -= 2.0;
    }
}

// função que calcula a média das temperaturas:
float mediaTemperaturas(float a[], int tam)
{
    int t;
    float acumula = 0;
    float media = 0;
    for (t = 0; t < tam; t++)
    {
        acumula += a[t];
    }
    media = acumula / tam;
    return media;
}