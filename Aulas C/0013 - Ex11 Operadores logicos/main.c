#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    //printf("\n%i\n", i!=1);
    //printf("\n%i\n", !(i==1));
    printf("Digite um n�mero != de 5: ");
    scanf ("\n%i", &i);

    if (i!=5){
        printf("A express�o e: ");
        printf("True\n");

             }
    else{
        printf("A express�o e: ");
        printf("False\n");
        }
    /*

    1) positivo -> 1
    2) negativo -> 0

    */

    //== Compara��o positiva -> x == y
    //\!= Compara��o negativa - > x != y
    // \! NOT

    return 0;
}
