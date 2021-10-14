#include <iostream>
#include <stdio.h>

int main(){
	
	float valor;
	
	printf("Digite um valor: ");
	scanf("%f", &valor);
	
	if(valor >= 0){
		printf("O valor eh POSITIVO!!!");
	}
	else{
		printf("O valor eh NEGATIVO!!!");
	}
	
	return 0;
}
