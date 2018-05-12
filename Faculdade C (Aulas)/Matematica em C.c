#include<stdio.h>
#include<stdlib.h>

int main (){
	float num1, num2, num3, num4, num5, result;

	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	result = num1 + num2;
	printf("A)%.2f\n", result);
	
	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	result = num1 - num2;
	printf("B)%.2f\n", result);
	
	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	result = num1 + num2;
	printf("C)%.2f\n", result);
	
	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	printf("Digite o terceiro valor:");
	scanf("%f", &num3);
	result = num1 * num2 + num3;
	printf("D)%.2f\n", result);
	
	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	result = num1 / num2;
	printf("E)%.2f\n", result);
	
	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	printf("Digite o terceiro valor:");
	scanf("%f", &num3);
	result = num1 / num2 + num3;
	printf("f)%.2f\n", result);
	
	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	result = num1 / num2;
	printf("G)%.2f\n", result);
	
	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	printf("Digite o terceiro valor:");
	scanf("%f", &num3);
	printf("Digite o quarto valor:");
	scanf("%f", &num4);
	result = num1 / num2 * num3 + num4;
	printf("H)%.2f\n", result);
	
	printf("Digite o Primeiro valor:");
	scanf("%f", &num1);
	printf("Digite o segundo valor:");
	scanf("%f", &num2);
	printf("Digite o terceiro valor:");
	scanf("%f", &num3);
	printf("Digite o quarto valor:");
	scanf("%f", &num4);
	printf("Digite o quinto valor:");
	scanf("%f", &num5);
	result = num1 * num2 * num3 + num4 / num5;
	printf("I)%.2f\n", result);

	system("pause");
	
	
	
}
