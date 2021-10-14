#include <stdio.h>;

void getMes(int mes);

int main()
{
    float listaMes[12];
    float somaMes = 0;

    for (int j = 0; j < 12; j++)
    {
        getMes(j);
        scanf("%f%*c", &listaMes[j]);
    }

    for (int i = 0; i < 12; i++)
        somaMes += listaMes[i];

    somaMes = somaMes / 12;

    printf("\nOs meses com temperaturas acima da media de %.2f graus sao:\n", somaMes);
    for (int k = 0; k < 12; k++)
    {
        if (listaMes[k] > somaMes)
        {
            printf("%d - ", k);
            getMes(k);
            printf("%.2f graus\n", listaMes[k]);
        }
    }
}

void getMes(int mes)
{
    switch (mes)
    {
    case 0:
        printf("Janeiro = ");
        break;
    case 1:
        printf("Fevereiro = ");
        break;
    case 2:
        printf("Marco = ");
        break;
    case 3:
        printf("Abril = ");
        break;
    case 4:
        printf("Maio = ");
        break;
    case 5:
        printf("Junho = ");
        break;
    case 6:
        printf("Julho = ");
        break;
    case 7:
        printf("Agosto = ");
        break;
    case 8:
        printf("Setembro = ");
        break;
    case 9:
        printf("Outubro = ");
        break;
    case 10:
        printf("Novembro = ");
        break;
    default:
        printf("Dezembro = ");
    }
}