#include <stdio.h>

int main(void)
{
    int qtd = 0, resposta;
    char *pergunta[] = {"1 - Telefonou para a vitima?", "2 - Esteve no local do crime?", "3 - Mora perto da vitima?", "4 - Devia para a vitima?", "5 - Ja trabalhou com a vitima?"};

    printf("Digite 1 para SIM e 0 para NAO\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\n%s ", pergunta[i]);
        scanf(" %d", &resposta);

        if (resposta == 1)
            qtd++;
    }

    if (qtd == 2)
    {
        printf("\n\nSuspeita");
    }
    else if ((qtd == 3) || (qtd == 4))
    {
        printf("\n\nCumplice\n");
    }
    else if (qtd == 5)
    {
        printf("\n\nAssasino");
    }
    else
    {
        printf("\n\nInocente");
    }
    return 0;
}