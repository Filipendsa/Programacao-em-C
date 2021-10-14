#include <iostream>
#include <stdio.h>

int main(){
	
	float salarioFixo, valorVendas, comissao, salarioTotal;
	
	printf("Digite o salario fixo: ");
	scanf("%f", &salarioFixo);
	
	printf("Digite o valor das vendas: ");
	scanf("%f", &valorVendas);
	
	comissao = valorVendas * 0.03;
	
	if(valorVendas > 1500){
		comissao + (valorVendas * 0.05);
	}
	
	salarioTotal = salarioFixo + comissao;
	
	printf("O salario total: R$%2.f", salarioTotal);
	
	return 0;
}
