#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	FILE *fp;
	char ch[100];
	char nome[100];
	int i;
	
	printf("Qual o nome deseja dar para o arquivo? ");
	gets(nome);
	
	if (!(fp = fopen(nome, "w")))
	{
		printf("O arquivo nao pode ser criado.\n");
		return EXIT_FAILURE;
	}
	
	printf("Informe uma string: ");
	
	for (i = 0; ch[i-1] != '\n'; ++i)
	{
		ch[i] = getchar();
		fputc(ch[i], fp);
	}
	return 0;
}