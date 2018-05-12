#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        1) += -> soma
        2) -= -> subtracao
        3) *= -> multiplicacao
        4) /= -> divisao
        5) %= -> resto da divisao


*/

    int i = 50;
    printf("Soma: %i\n", i+=100);
    printf("subtracao: %i\n", i-=50);
    printf("multiplicacao: %i\n", i*=3);
    printf("divisao: %i\n", i/=3);
    printf("Resto: %i \n\n", i%=3);


    // x = x + 1;
    int x = 0;
    //x += 1;

    while (x < 11){
        printf("Mensagem\n");
        x += 1;
        // x = x + 1;
    }



    return 0;
}
