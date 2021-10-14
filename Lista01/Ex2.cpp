#include <stdlib.h>
#include <iostream>
#include <stdio.h>

int main(void)
{
    float aream2, qtdLitrosTinta, qtdLatas, precoTotal;
    printf("Digite os metros quadrados da area a ser pintada: \n");
    scanf("%f", &aream2);

    qtdLitrosTinta = aream2 / 3;

    qtdLatas = qtdLitrosTinta / 18;
    precoTotal = qtdLatas * 80;

    float partInt = (int)qtdLatas;
    float parteDecimal = qtdLatas - partInt;

    if (parteDecimal == 0)
    {
    }
    else if (parteDecimal >= 0.5)
    {
        qtdLatas = partInt + 1;
        precoTotal = qtdLatas * 80;
    }
    else if (parteDecimal < 0.5)
    {
        qtdLatas = partInt;
        precoTotal = (partInt * 80) + 40;
        //printf("Quantidade de Latas de 10 litros eh: 1\n");
    }
    printf("Total a pagar: %.2f \n", precoTotal);
    printf("Total de Latas a comprar: %.2f", qtdLatas);
}