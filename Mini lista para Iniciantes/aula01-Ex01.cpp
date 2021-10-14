#include <stdlib.h>
#include <iostream>
#include<stdio.h>

//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
int main()
{
    int i;
    float nota, media;
    printf("Ola, Bem vindo(a) ao software de cadastro de notas!\n\n");
    for(i = 0; i<4; i++){
    printf("Insira sua %d nota:\n",(i+1));
    scanf("%f",&nota);
    media = media + nota;
    }
    system("cls");
      printf("Media do aluno = %.1f\n",(media/i));
}
