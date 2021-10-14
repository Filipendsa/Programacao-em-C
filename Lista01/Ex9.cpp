#include <iostream>
#include <stdio.h>
int main()
{
    int array[5] = {}, soma = 0;
    float media = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o 0%d numero inteiro: \n", (i + 1));
        scanf("%d", &array[i]);
            soma = soma + array[i];
    }
    media = (soma/5);
    system("cls");
    printf("A soma de todos os numeros digitados eh: %d\n", soma);
    printf("A media de todos os numeros digitados eh: %.2f", media);
}