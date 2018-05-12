#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x           = 0;
    int valDigitado = 0;
    int z           = 5000;

    printf("Informe a quantidade de x que vc deseja repetir a instrucao:\n");
    scanf("%i", &valDigitado);

    while (x < valDigitado){
        printf("%i\n", x * 1);
        x = (x + 1);
    }
        if(x >= 1000){
            printf("Chegou ao numero desejado.\n");
        }else{
            printf("Tente novamente.\n");
    }

    return 0;
}
