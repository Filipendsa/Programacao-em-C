#include <stdio.h>
void main()
{
    int num1[3];
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Por favor insira o %d numero: ",(i+1));
        scanf("%d", &num1[i]);
        soma += num1[i];
    }
    printf("a soma desses 3 numeros eh: %d", soma);
}