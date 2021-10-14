#include <stdio.h>
void main()
{
    int num1;
    printf("Por favor insira um numero: ");
    scanf("%d", &num1);
    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        printf("\n");
    }
}