#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ij, id;
    ij = 17;
    id = 60;

    int idade = 0;

    printf("Digite a idade de uma pessoa:\n");
    scanf("%i", &idade);

    if (idade <= ij){
        printf("A idade informada e a de um jovem.\n");

    }else{
        if(idade >= id){
            printf("A idade informada e a de um Idoso.\n");

        }else{
            if((idade > ij)&&(idade < id)){
                printf("A idade informada e de uma pessoa de meia-idade.\n");
            }

        }
    }

    return 0;
}
