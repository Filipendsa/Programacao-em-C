#include <stdio.h>

void main()
{
    float n1[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &n1[i]);
    }

    for (int j = 9; j >= 0; j--)
    {
        printf("%.0f\n", n1[j]);
    }
}