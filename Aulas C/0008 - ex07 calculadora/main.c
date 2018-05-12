#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2, soma, sub, multi, div;

   printf("Calculadora 1.0\n");
   printf("Entre os dois numeros a serem processados:\n");
   scanf("%i%i", &num1, &num2);

   soma = num1 + num2;
   sub = num1 - num2;
   multi = num1 * num2;
   div = num1 / num2;

   printf("A soma e: %i\n", soma);
   printf("A subtracao e: %i\n", sub);
   printf("A multi e: %i\n", multi);
   printf("A divisao e: %i\n", div);



    return 0;
}
