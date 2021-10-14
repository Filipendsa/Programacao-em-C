#include <iostream>
#include <stdio.h>

int main(){
	
	float numero1, numero2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	if(numero1 > numero2){
		printf("\nO maior numero eh: %1.f", numero1);
	}
	else{
		printf("\nO maior numero eh: %1.f", numero2);
	}
	
	return 0;
}
