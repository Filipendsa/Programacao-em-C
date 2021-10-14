#include <stdio.h>

void main()
{

    float nota, media[10];
    int contador = 0;
    for (int i = 0; i < 10; i++)
    {
        float soma = 0;
        printf("\nAluno %d:\n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            printf("Digite a %d nota: ", j + 1);
            scanf("%f", &nota);
            soma += nota;
        }
        media[i] = soma / 4;
        if (media[i] >= 7.0)
        {
            contador++;
        }
    }

    printf("\nMedia dos alunos:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%.1f\n", media[j]);
    }
    printf("\nQuantidade de alunos que atingiram nota 7 ou superior: %d", contador);
}