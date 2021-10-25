#include <stdio.h>
#include <stdlib.h>
#define tamanho 4

void LeituraVetor(int vetor[]);
void ImprimeVetor(int vetor[]);
void OrdenaVetor(int vetor[]);
int PesquisaBinaria(int vetor[], int pesq);

void main()
{
    int vetor[tamanho];
    int procura;
    LeituraVetor(vetor);
    printf("\nVetor Digitado: \n");
    ImprimeVetor(vetor);
    system("pause");
    system("cls");

    printf("\nDigite um valor para pesquisar: ");
    scanf("%d", &procura);
    PesquisaBinaria(vetor, procura);
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

int PesquisaBinaria(int vetor[], int pesquisa)
{
    int comeco = 0, final = tamanho - 1, meio, cont = 0;
    while (comeco <= final)
    {
        meio = (comeco + final) / 2;
        if (pesquisa == vetor[meio])
        {
        printf("\n\nValor encontrado na %d - posicao ", (meio + 1));
        printf("\nCom %d - interacoes!", (cont + 1));
        return 1;
        }
        else if (pesquisa < vetor[meio])final = meio - 1;
        else comeco = meio + 1;
        cont++;
    }
    printf("\n\nValor nao encontrado no vetor!");
    return 0;
}