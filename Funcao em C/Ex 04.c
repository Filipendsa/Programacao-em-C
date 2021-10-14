#include <stdio.h>
void main()
{
    int num1;
    printf("Por favor, informe um número, sendo ele negativo ou positivo");
    scanf("%d", &num1);
    if (num1 > 0)
    {
        printf("\nNumero Positivo - P");
    }else
    {
        printf("\nNumero Negativo - N");
    }
    
    
}