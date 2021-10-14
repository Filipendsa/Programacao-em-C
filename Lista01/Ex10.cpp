#include <iostream>
#include <stdio.h>

int main()
{
    int num1 = 0, decisao = 0;
    do
    {
        printf("Insira um numero de 0 a 10:\n");
        scanf("%d", &num1);
        if (num1 < 0 || num1 > 10)
        {
            printf("Por favor, insira um numero valido!\n");
            decisao = 0;
            system("pause");
        }
        else
        {
            printf("Seu numero eh valido! %d\n\n", num1);
            decisao = 1;
            system("pause");
        }
        system("cls");
    } while (decisao == 0);
}