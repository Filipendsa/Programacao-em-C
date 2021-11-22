#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void finaliza(float *v, int tam, int maior, int menor)
{
    float media = 0;
    for (int l = 0; l < tam; l++)
    {
        if (!(v[l] == maior) || !(v[l] == menor))
        {
            media += v[l];
        }
    }
    media = media / tam;
    printf("\nA media eh de: %.2f", media);
    if (media <= 10 && media > 7)
    {
        printf("\nNivel: 3");
    }
    else if (media <= 7 && media > 5)
    {
        printf("\nNivel: 2");
    }
    else if (media <= 5 && media > 3)
    {
        printf("\nNivel: 1");
    }
    else if (media <= 3 && media >= 0)
    {
        printf("\nNivel: 0");
    }

    printf("\nNotas Ordenadas\n");
    for (int p = 0; p < tam; p++)
    {
        if (!(v[p] == maior) || !(v[p] == menor))
        {
            printf("%.2f\n", v[p]);
        }
    }
}

void TrataVetor(float *vetor, int tamanhoV)
{
    int chave, i, j;
    float maior = 0, menor = 10;
    ///Ordenando///
    for (i = 1; i < tamanhoV; i++)
    {
        chave = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > chave)
        {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = chave;
    }

    for (int k = 0; k < tamanhoV; k++)
    {
        for (int h = 0; h < tamanhoV; h++)
        {
            if (vetor[k] > vetor[h])
            {
                maior = vetor[k];
            }
            if (vetor[k] < vetor[h])
            {
                maior = vetor[k];
            }
        }
    }
    printf("\nA maior nota eh: %.2f", maior);
    printf("\nA menor nota eh: %.2f", menor);
    finaliza(vetor, tamanhoV, maior, menor);
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int qtdJurados = 0;
    float notas[7];

    do
    {
        printf("Nota do 0%d Juiz ", (qtdJurados + 1));
        scanf("%f", &notas[qtdJurados]);
        if (notas[qtdJurados] > 10 || notas[qtdJurados] < 0)
        {
            printf("ERROR: A nota deve ser entre 0 - 10\n");
        }
        else
        {
            qtdJurados++;
        }
    } while (qtdJurados < 7);

    TrataVetor(notas, qtdJurados);
}
