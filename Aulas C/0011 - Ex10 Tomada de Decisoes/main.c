#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2 ,num3 ,num4 ,soma, sub, multi, div;

   printf("Calculadora 2.0\n");
   printf("Digite o valor de 4 numeros:\n");
   scanf("%i%i%i%i", &num1, &num2, &num3, &num4);

   soma = num1 + num2 + num3 + num4;
   sub = num1 - num2 -num3 - num4;
   multi = num1 * num2 * num3 * num4;
   div = num1 / num2 / num3 / num4;

   printf("O valor da soma e:%i\n", soma);
   printf("O valor da subtracao e:%i\n", sub);
   printf("O valor da multiplicacao e:%i\n", multi);
   printf("O valor da divisao e:%i\n", div);



    return 0;
}
