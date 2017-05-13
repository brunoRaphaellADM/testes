/* DTOS: um programa que l� arquivos e mostra-os na tela. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	char nome[100]; //nome do arquivo a ser aberto
	
	printf("Informe o nome do arquivo a ser aberto: ");
	scanf("%s", nome); //nome informado pelo usuario do arquivo a ser aberto
	
	if ((fp = fopen(nome, "r")) == NULL) //se  arquivo apontar em um endere�o nulo � impresso na tela
	{
		printf("O arquivo nao pode ser aberto.\n");
		exit(1); //sai do programa
	}
	
	ch = getc(fp); //L� um caractere

	while(ch != EOF) //repete o ciclo at� chegar ao final do arquivo
	{
		putchar(ch); //imprime na tela
		ch = getc(fp); //pega os carateres do arquivo
	}
	
	fclose(fp); //fecha o arquivo
	return 0;
}
