#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int num[10];
void main()
{
    printf("Ordenando um array!\n");
    preencheArray();
    system("pause");
    system("cls");
    printf("Array digitado!\n");
    exibeArray();
    system("pause");
    system("cls");
    funcArray();
    printf("Array ordenando!\n");
    exibeArray();
}
void preencheArray()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d valor:", (i + 1));
        scanf("%d", &num[i]);
    }
}
void funcArray()
{
    int temporario;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (num[j] > num[j + 1])
            {
                temporario = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temporario;
            }
        }
    }
}
void exibeArray()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",num[i]);
    }
}
