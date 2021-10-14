//Faça um programa com uma função chamada somaImposto.
//A função possui dois parâmetros formais: taxaImposto, que é a quantia de imposto sobre vendas expressa em porcentagem e custo,
//que é o custo de um item antes do imposto.
//A função “altera” o valor de custo para incluir o imposto sobre vendas.
#include <stdio.h>

int somaImposto(float custo, float taxaImposto)
{
    float resultado = 0;
    resultado = custo + (custo * (taxaImposto/100));
    return resultado;
}
void main()
{
    float custo, resultado, taxaImposto;
    printf("Por favor, qual eh custo ao produto: ");
    scanf("%f", &custo);
    printf("\nPor favor, qual seria a taxa a ser cobrada ao produto (0 - 100 porcento): ");
    scanf("%f", &taxaImposto);
    resultado = somaImposto(custo, taxaImposto);

    printf("\nO seu produto, sobre tacha de %.2f porcento, eh :R$%.2f ", taxaImposto, resultado);
}
