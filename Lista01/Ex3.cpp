#include <iostream>
#include <stdio.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("Digite a 01 nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a 02 nota: \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 7){
		printf("\nAprovado!");
	}
	else{
		printf("\nReprovado!");
	}
	
	return 0;
}
