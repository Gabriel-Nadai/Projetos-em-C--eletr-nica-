#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4, media;
    num1 = num2 = num3 = num4 = media = 0;

    printf("Digite a nota do 1 Bimestre: ");
    scanf("%f", &num1);

    printf("Digite a nota do 2 Bimestre: ");
    scanf("%f", &num2);

    printf("Digite a nota do 3 Bimestre: ");
    scanf("%f", &num3);

    printf("Digite a nota do 4 Bimestre: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4;
    printf("A sua media escola foi de: %f\n", media);

    if (media >= 7){
        printf("Voce foi aprovado!\n");
    }else{
        printf("Voce foi reprovado!\n");
    }


    return 0;
}
