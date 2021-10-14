#include <iostream>
#include <stdio.h>

int main()
{
    int array[5] = {}, maior = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o 0%d numero inteiro: \n",(i+1));
        scanf("%d", &array[i]);

        if (array[i] > maior)
        {
            maior = array[i];
        }
    }
    system("cls");
    printf("O maior numero digitado eh: %d", maior);
}