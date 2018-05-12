#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4, media;
    num1 = num2 = num3 = num4 = media = 0;
    printf("=========Media Escola 1.0==========\n\n");

    printf("Digite sua primeira nota bimestra:");
    scanf("%f", &num1);
    printf("Digite sua segunda nota bimestra:");
    scanf("%f", &num2);
    printf("Digite sua terceira nota bimestra:");
    scanf("%f", &num3);
    printf("Digite sua quarta nota bimestra:");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A sua media escolar foi de: %f\n\n", media);

        if(media >= 7){
            printf("voce foi aprovado.\n");
                      }
        else{
            printf("Voce foi reprovado!\n");
            }


    return 0;
}
