#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    num1 = 17;
    num2 = 60;

    int idade;
    idade = 0;
    printf("Digite a idade de uma pessoa:");
    scanf("%i", &idade);

    if(idade <= num1)
   {
        printf("\nA idade informada e de um Jovem.\n");
   }else{
        if(idade >= num2){
           printf("\nA idade informada e de uma pessoa Idosa.\n");
    }else{
          if(   (idade > num1)&&(idade < num2)  ){
          //Se isso for V ou se isso for V

          //A meia-idade se caracteriza por qualquer pessoa que tenha
          // menos de 60 anos e mais de 17anos.
                printf("\nA idade informada e de uma pessoa de meia-idade.\n");
        }
            }
                }

    return 0;
}
