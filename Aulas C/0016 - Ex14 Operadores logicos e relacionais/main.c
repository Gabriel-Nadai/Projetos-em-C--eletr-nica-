#include <stdio.h>
#include <stdlib.h>

int main()
{
    //%% -> Diz que as expressoes são Verdadeira (True)&&(True)

    int i =40;
    int condicao = ((i>20)&&(i<100));

    printf("%i\n\n", condicao);
    printf("%i\n", !condicao);

    //||
    //(true)||(false)    ->1
    //(false)||(true)    ->1
    //(true)||(true)     ->1
    //(false)||(false))  ->0

    system ("cls");
    int x = 10;
    int cont = 0;

    cont = (x==10)||(x<1);
    printf("%i", cont);

    cont = (x==0)||(x!=1000);
    printf("%i", cont);

    cont = (x==10)||(x!=0);
    printf("%i", cont);

    cont = (x!=10)||(x==0);
    printf("%i", cont);






    return 0;
}
