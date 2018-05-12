/* Gabriel de Nadai RA:20171499
   Lucas Bortolozi RA:20170241
   
  turma:57-03-a
   
   Professor: Eduardo sakai
   Projeto/desafio corrida de lesmas proposta na Olimpíada Cearense de Informática 2014 (OCI-2014) e adaptada para
	a disciplina Paradigmas de Linguagens de Programação do curso de Ciência da Computação da
	Faculdade de Americana.
	
	Para utilizar o programa cole na vertical os número para teste dentro de um arquivo txt 
	por exemplo:
	10
	10
	10
	10
	10
	15
	18
	20
	15
	11
	10

o resultado será salvo na mesma pasta que o programa está (resultado.txt)

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");
   FILE *lesma_arquivo;   //Função de arquivo com o nome de *lesma_arquivo com ponteiro
   FILE *resultado_arquivo; //Função de arquivo com o noe de *resultado_arquivo com ponteiro
   char procura[90];
   
   		printf("\nDigite o nome do arquivo das lesmas em (.txt) digite a extensão em conjunto com o nome do arquivo:\n");
   		gets(procura);
   		if (!(lesma_arquivo = fopen(procura,"r")))  		                     /* Caso ocorra algum erro na abertura do arquivo..*/ 
     {                           		            			 /* o programa aborta automaticamente */
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
     }
   		lesma_arquivo = fopen(procura,"r"); //abre o arquivo digitado                                
	
	int vl_lesma, class_lesma , q_lesma, aux_cont, q_raia; //vl_lesma = velocidade da lesma, class_lemas = classificação da lesma, q_lemas quantidade de lesma, aux_cont = para comando for para saber qual raia está
    int vl_lesma_temp = 0; // q_raia = valor da maior velocidade entre as lesmas, vl_lesma_temp = valor temporario para raia.

    
	while(fscanf(lesma_arquivo,"%d", &q_lesma) != EOF){  //Faz a leitura do primeira linha do arquivo ou seja a quantidade de lesmas, EOF para retorno negativo
	
	if(q_lesma <= 0 || q_lesma >= 100){
			
			
				resultado_arquivo = fopen("resultado.txt", "w"); //Abre arquivo para salvar
				fprintf(resultado_arquivo, "Valores invalidos Na linha 0"); //escreve dentro do arquivo no caso .txt
				fclose(resultado_arquivo); // fecha arquivo
				fclose(lesma_arquivo);
				printf("Valores invalidos Na linha 0"); //valores negativos e maiores ou igual a 100 são inválidos
				return 0;
				}

    class_lesma = 0; //igualando valores a 0
    aux_cont = 1;  //Para pular a primeira linha do arquivo (porque primeiro vem a quantidade de lesmas)
  	vl_lesma = 0; //igualando valores a 0

        for(q_lesma = q_lesma ; aux_cont < q_lesma ;aux_cont++){ // Comando for para ler valor por valor de cada lesma para classificalas e verificar qual a maior
            fscanf(lesma_arquivo,"%d", &vl_lesma); // Lê as demais linhas do arquivo	
	
            if(vl_lesma < 10 && class_lesma == 0){ //compara-se para classificalas
                class_lesma = 1;
            }
            if(vl_lesma >= 10 && vl_lesma < 20 && class_lesma < 1){
                class_lesma = 2;
            }
            if(vl_lesma >= 20 && class_lesma < 3){
                class_lesma = 3;
			}
			
			if (vl_lesma  >  vl_lesma_temp){ // valor para comparar o maior entre todos dentro do for
    			vl_lesma_temp = vl_lesma;
    			q_raia = aux_cont;   // iguala o valor da raia para saber qual raia esta o maior valor
			}  
			if(vl_lesma <= 0 || vl_lesma >= 50){
			
			
				resultado_arquivo = fopen("resultado.txt", "w"); //Abre arquivo para salvar
				fprintf(resultado_arquivo, "Valores invalidos Na raia:%d\n ",aux_cont); //escreve dentro do arquivo no caso .txt
				fclose(resultado_arquivo); // fecha arquivo
				fclose(lesma_arquivo);
				printf("Valores invalidos Na raia:%d\n ",aux_cont); //valores negativos e maiores ou igual a 100 são inválidos
				return 0;
				}

}	
if(vl_lesma <= 0){
			
			
				resultado_arquivo = fopen("resultado.txt", "w"); //Abre arquivo para salvar
				fprintf(resultado_arquivo, "Valores invalidos Na raia:%d\n ",aux_cont); //escreve dentro do arquivo no caso .txt
				fclose(resultado_arquivo); // fecha arquivo
				fclose(lesma_arquivo);
				printf("Valores invalidos Na raia:%d\n ",aux_cont); //valores negativos e maiores ou igual a 100 são inválidos
				return 0;
				}

if(vl_lesma >= 1 || vl_lesma <= 50){

	printf("\nRaia:%d\n", q_raia);
	printf("Classificacao:%d\n", class_lesma); 
	
fclose(lesma_arquivo); //fecha Arquivo digitado
	
	resultado_arquivo = fopen("resultado.txt", "w"); //Abre arquivo para salvar
	
		fprintf(resultado_arquivo, "Raia:%d\n", q_raia);          //escreve dentro do arquivo no caso .txt
		fprintf(resultado_arquivo, "Classificacao:%d\n", class_lesma); //escreve dentro do arquivo no caso .txt
		
	fclose(resultado_arquivo); // fecha arquivo
}
	printf("Dados gravados com sucesso! foi criado um arquivo chamado Resultado.txt");
	return 0;
	system("pause");


	}
}
