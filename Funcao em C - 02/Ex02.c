//Faça um programa que converta da notação de 24 horas para a notação de 12 horas. Por exemplo, o programa deve converter 14:25 em
//2:25 P.M. A entrada é dada em dois inteiros. Deve haver pelo menos duas funções: uma para fazer a conversão e uma para a saída. 
//Registre a informação A.M./P.M. como um valor ‘A’ para A.M. e ‘P’ para P.M. Assim, a função para efetuar as conversões terá um 
//parâmetro formal para registrar se é A.M. ou P.M. 
//Inclua um loop que permita que o usuário repita esse cálculo para novos valores de entrada todas as vezes que desejar.
#include <stdio.h>

int subtraiHora(int hora)
{
    if (hora >12) hora = hora - 12;
    return hora;
}
void main()
{
    int hora, minuto, resultado;
    printf("Por favor, qual eh a hora agora: ");
    scanf("%d", &hora);
    printf("Por favor, qual eh o minuto de agora: ");
    scanf("%d", &minuto);
    resultado = subtraiHora(hora);
    printf("\nAgora sao %d:%d ", resultado, minuto);
}
