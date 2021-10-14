#include <stdlib.h>
#include <iostream>
#include <stdio.h>
//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
//Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos)
//deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes)
// e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João
//deverá pagar. Imprima os dados do programa com as mensagens adequadas.
int main()
{
    float peso = 0, excesso = 0, multa = 0;
    int decisao = 1;
    printf("Seja bem vindo Joao ao gerenciamento de pesca 2mil!\n\n");
    system("pause");
    while (decisao == 1)
    {
        printf("Quantos quilos de peixes pegou hoje?");
        scanf("%f", &peso);
        if (peso > 50)
        {
            excesso = peso - 50;
            multa = excesso * 4;
            printf("João, hoje você recebeu R$%.2f de multa, pois excedeu %.2f kg do regulamento.\n\n", multa, excesso);
        }
        else
        {
            printf("Joao, parabens, hoje não recebeu multa!");
        }
        printf("Deseja fazer uma nova consulta? (0 - Nao, 1 - Sim)");
        scanf("%d",&decisao);
    }
}