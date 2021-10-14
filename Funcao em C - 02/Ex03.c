//Faça um programa que use a função valorPagamento para determinar o valor a ser pago por uma prestação de uma conta.
//O programa deverá solicitar ao usuário o valor da prestação e o número de dias em atraso e passar estes valores para a função
//valorPagamento, que calculará o valor a ser pago e devolverá este valor ao programa que a chamou.
//O programa deverá então exibir o valor a ser pago na tela. Após a execução o programa deverá voltar a pedir outro valor de prestação e
//assim continuar até que seja informado um valor igual a zero para a prestação. Neste momento o programa deverá ser encerrado,
//exibindo o relatório do dia, que conterá a quantidade e o valor total de prestações pagas no dia. O cálculo do valor a ser pago é
//feito da seguinte forma. Para pagamentos sem atraso, cobrar o valor da prestação. Quando houver atraso, cobrar 3% de multa, mais 0,1% de
//juros por dia de atraso.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float valorPagamento(float valor, int diasAtrasos)
{
    if (diasAtrasos == 0)
    {
        return valor;
    }
    else
    {
        float resultado = 0;
        resultado = valor + (valor * 0.03) + valor * (diasAtrasos * 0.001);
        return resultado;
    }
}
void main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor = 1, resultado = 1, arrayLista[100];
    int diasAtrasos = 1, i = 0;
    printf("Programa de Calculo de Prestações\n");
    while (valor > 0)
    {
        printf("Por favor, qual eh o valor da %d- prestacao a ser paga: ", (i + 1));
        scanf("%f", &valor);
        printf("Por favor, quantos dias de atraso sao? ");
        scanf("%d", &diasAtrasos);
        resultado = valorPagamento(valor, diasAtrasos);
        arrayLista[i] = resultado;
        i += 1;
    }
    system("cls");
    printf("Programa Finalizado!\nRelatorio de Prestacoes:\n");
    for (int j = 0; j < i; j++)
    {
        printf("%d- prestacao: R$%.3f\n", (j + 1), arrayLista[j]);
    }
}
