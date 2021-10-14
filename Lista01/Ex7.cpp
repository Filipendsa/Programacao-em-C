#include <iostream>
#include <stdio.h>

int main()
{
	int num1 = 0;
	printf("Insira um numero inteiro: \n");
	scanf("%d", &num1);
	if ((num1 % 2) == 0)
	{
		printf("O seu numero eh par");
	}
	else
	{
		printf("O seu numero eh impar");
	}
	system("pause");
	return 0;
}
