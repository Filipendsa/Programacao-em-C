#include <stdlib.h>
#include <iostream>
#include <stdio.h>

//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
// Calcule e mostre o total do seu salário
int main()
{
    float salario = 0, horas = 0;
    printf("Seja bem-vindo ao gerencioamento de carga horaria da empresa xingozinho!\n\n");
    system("pause");
    system("cls");
    printf("Insira o quanto voce ganha por hora:\n");
    scanf("%f", &salario);
    printf("Agora, quantas horas trabalhou nesse mes?\n");
    scanf("%f", &horas);
    salario = (salario * horas);
    system("cls");
    printf("Seu salario eh de R$%.2f!", salario);
}