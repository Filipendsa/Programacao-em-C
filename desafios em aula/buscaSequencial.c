#include <stdio.h>
#include <stdlib.h>
#define tamanho 4

void LeituraVetor(int vetor[]);
void ImprimeVetor(int vetor[]);
int PesquisaSequencial(int vetor[], int pesquisa);

void main()
{
    int vetor[tamanho];
    int resultadoPesquisa, procura;
    LeituraVetor(vetor);
    printf("\nVetor Digitado: \n");
    ImprimeVetor(vetor);
    system("pause");
    system("cls");

    printf("\nDigite um valor para pesquisar: ");
    scanf("%d", &procura);

    resultadoPesquisa = PesquisaSequencial(vetor, procura);
    if (resultadoPesquisa == -1)
    {
        printf("\n\nValor nao encontrado no vetor!");
    }
    else
    {
        printf("\n\nValor encontrado na %d - posicao!", (resultadoPesquisa + 1));
        printf("\nCom %d - interacoes!", (resultadoPesquisa + 1));
    }

    printf("\n\n");
}

void LeituraVetor(int vetor[])
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Informe o %d - valor: ", (i + 1));
        scanf("%d", &vetor[i]);
    }
}

void ImprimeVetor(int vetor[])
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }
}

int PesquisaSequencial(int vetor[], int pesquisa)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == pesquisa) return i;
    }
    return -1;
}
