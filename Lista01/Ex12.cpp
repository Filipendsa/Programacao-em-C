#include <iostream>
#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0, maior, menor, soma = 0;
    printf("Insira o 01 numero: \n");
    scanf("%d", &num1);
    printf("Agora o 02 numero: \n");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        maior = num1;
        menor = num2;
    }
    else
    {
        maior = num2;
        menor = num1;
    }

    system("cls");
    printf("O intervaulo entre os numeros digitados eh:\n");
    for (int i = menor + 1; i < maior; i++)
    {
        printf(" - %d - ", i);
        soma = soma + i;
    }
    printf("\nE a soma deles eh: %d", soma);
}