#include <iostream>
#include <stdio.h>

int main(){
	
	float valorHora, horasTrabalhadas, salarioBruto, ir, inss, sindicato, liquido;
	
	printf("Digite o valor que voce ganha por hora: \n");
	scanf("%f", &valorHora);
	
	printf("Horas trabalhadas no mes: \n");
	scanf("%f", &horasTrabalhadas);
	
	salarioBruto = valorHora * horasTrabalhadas;
	
	ir = salarioBruto * 0.11;
	inss = salarioBruto * 0.08;
	sindicato = salarioBruto * 0.05;
	
	liquido = salarioBruto - ir - inss - sindicato;
	
	printf("\nSeu salario bruto: R$%2.f \n", salarioBruto);
	printf("Desconto do INSS: R$%2.f \n", inss);
	printf("Desconto do sindicato: R$%2.f\n", sindicato);
	printf("Seu salario liquido: R$%2.f \n", liquido);
	
	return 0;
}
