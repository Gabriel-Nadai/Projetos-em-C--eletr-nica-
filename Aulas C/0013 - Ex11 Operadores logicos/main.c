#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    //printf("\n%i\n", i!=1);
    //printf("\n%i\n", !(i==1));
    printf("Digite um número != de 5: ");
    scanf ("\n%i", &i);

    if (i!=5){
        printf("A expressão e: ");
        printf("True\n");

             }
    else{
        printf("A expressão e: ");
        printf("False\n");
        }
    /*

    1) positivo -> 1
    2) negativo -> 0

    */

    //== Comparação positiva -> x == y
    //\!= Comparação negativa - > x != y
    // \! NOT

    return 0;
}
