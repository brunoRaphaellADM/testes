#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> //biblioteca p/ as fun��es isalpha isdigit toupper tolower
 
int main(void)
{
   char letra;
   char op;
 
   printf("Digite uma letra do alfabeto: ");
   scanf("%c",&letra);
 
   //isalpha verifica se � uma letra do alfabeto
   if (isalpha(letra))
   {
      printf("\nVoce digitou a letra %c \n\n",letra);
 
      //toupper transforma em maiuscula
      letra = toupper(letra);
      printf("Maiuscula: %c \n\n",letra);
 
      //tolower transforma em minuscula
      letra = tolower(letra);
      printf("Minuscula: %c \n\n",letra);
   }
   else
        printf("Voce nao digitou uma letra!!!\n");
 
     printf("\nInforme um numero de 0 a 9: ");
     fflush(stdin);
     scanf("%c",&op);
 
     //isdigit verifica se o caracater recebido � um d�gito
     if(isdigit(op))
     {
        printf("Digito: %c \n\n",op);
     }
     else
        printf("Voce nao digitou um numero!!!\n\n");
 
   system("pause");
   return 0;
}