#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

//Declarando Variaveis

int opcao;

//Comandos

printf(" | Codigo | Idioma |\n");
printf(" |   1    | Ingl�s |\n");
printf(" |   2    |Espanhol|\n");
printf(" |   3    |Franc�s |\n");
printf(" |-----------------|\n");

printf("Digite o codigo do idioma escolhido:");
scanf("%i", &opcao);

switch (opcao)
{
case 1: 
printf("Welcome! \n");
    break;
case 2:
printf("Bienvenido! \n");
    break;
case 3:
printf("Accueillir! \n");
    break;
default:
printf("Op��o Invalida! \n");
    break;
}
return 0;
}