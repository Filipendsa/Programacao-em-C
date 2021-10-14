#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define TAM 10

bool verificarVogal(char letra);

int main(void)
{
    char arrayStr[TAM];
    int contagem = 0;

    printf("Digite uma palavra de no maximo 10 caracteres: ");
    scanf("%s", arrayStr);
    printf("%s \n", arrayStr);
    if (strlen(arrayStr) > 10)
    {
        printf("Eu disse, uma PALAVRA de no maximo 10 caracteres:");
    }
    else
    {
        printf("\nEsta palavra possui %zu caracteres\n", strlen(arrayStr));
        #define TAM2 strlen(arrayStr)
        for (int i = 0; i < TAM2; i++)
        {
            if (!verificarVogal(arrayStr[i]))
            {
                printf("%c ", arrayStr[i]);
                contagem++;
            }
        }
        printf("\nQuantidade de consoantes: %d", contagem);
    }
}

bool verificarVogal(char letra)
{
    char filtro[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};

    for (int j = 0; j < TAM; j++)
    {
        if (filtro[j] == letra)
        {
            return true;
        }
    }
    return false;
}