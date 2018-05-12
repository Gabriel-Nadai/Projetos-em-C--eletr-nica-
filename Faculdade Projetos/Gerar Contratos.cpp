#include <stdio.h>

#include <stdlib.h>

#include <locale.h>





void comodato() {

	setlocale(LC_ALL, "Portuguese");

	setbuf(stdin, NULL);



	char comodante[40];

	char nome[40];

	char cargo[100];

	char setor[100];

	char maquina[40];

	char servicetag[40];

	char modelo[40];



	char url[] = "teste.txt";

	FILE *arq;



	printf("Nome do comodante:");

	gets(comodante);



	printf("Nome do colaborador:");

	gets(nome);



	printf("Cargo do colaborador:");

	gets(cargo);





	printf("setor do colaborador:");

	gets(setor);



	printf("maquina:");

	gets(maquina);



	printf("service-tag:");

	gets(servicetag);



	printf("modelo:");

	gets(modelo);



	arq = fopen(url, "w");



	fprintf(arq, "Gentileza criar comodato para notebook do colaborador\n\n");



	fprintf(arq, "      nome: %s \n", nome);

	fprintf(arq, "      Cargo: %s \n", cargo);

	fprintf(arq, "      Setor: %s \n", setor);

	fprintf(arq, "      Service-Tag: %s \n", servicetag);

	fprintf(arq, "      Modelo: %s \n\n", modelo);



	fprintf(arq, "Acompanha carregador.\n Att,\n%s \n ", comodante);





	fclose(arq);

	system("type C:\\Users\\brsmgnadai\\Documents\\Backup\\C\\teste.txt|clip");

}

void inventario() {

	setlocale(LC_ALL, "Portuguese");

	setbuf(stdin, NULL);

	char comodante[40];

	char planta[40];

	char nome[40];

	char cpf[100];

	char telefone[100];

	char maquina[40];

	char servicetag[40];

	char modelo[40];



	char url[] = "teste.txt";

	FILE *arq;



	printf("Comodante:");

	gets(comodante);



	printf("Planta que será utilizada:");

	gets(planta);



	printf("Nome do colaborador:");

	gets(nome);



	printf("CPF do colaborador:");

	gets(cpf);



	printf("Telefone do colaborador:");

	gets(telefone);



	printf("maquina:");

	gets(maquina);



	printf("service-tag:");

	gets(servicetag);



	printf("modelo:");

	gets(modelo);



	arq = fopen(url, "w");



	fprintf(arq, "Favor atualizar no inventario de acordo com as informações abaixo: \nEquipamento que está sendo entregue ao colaborador\n\n");



	fprintf(arq, "      Planta: %s \n", planta);

	fprintf(arq, "      Nome: %s \n", nome);

	fprintf(arq, "      CPF: %s \n", cpf);

	fprintf(arq, "      Telefone: %s \n", telefone);

	fprintf(arq, "      Maquina: %s \n", maquina);

	fprintf(arq, "      Service-Tag: %s \n", servicetag);

	fprintf(arq, "      Modelo: %s \n\n", modelo);



	fprintf(arq, "\n Att,\n%s \n", comodante);





	fclose(arq);

	system("type C:\\Users\\brsmgnadai\\Documents\\Backup\\C\\teste.txt|clip");



}



int main() {

	setlocale(LC_ALL, "Portuguese");

	int continuar = 1;

	do

	{

		printf("\n\tSolicitações\n\n");

		printf("1. Comodato\n");

		printf("2. Inventário\n");

		printf("0. Sair\n\n");



		scanf("%d", &continuar);

		system("cls || clear");



		switch (continuar)

		{

		case 1:

			comodato();

			break;



		case 2:

			inventario();

			break;



		default:

			printf("Digite uma opção valida\n");

		}

	} while (continuar);



}