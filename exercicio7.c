#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

//Declarando Variaveis

int opcao;

//Comandos

printf(" | Codigo |             |\n");
printf(" |   1    |  Novo Jogo  |\n");
printf(" |   2    |Carregar Jogo|\n");
printf(" |   3    |Configura��es|\n");
printf(" |----------------------|\n");

printf("\n");
printf("Digite o codigo da sua op��o:");
scanf ("%i", &opcao);

switch (opcao){
    case 1:
printf ("Carregando novo jogo... \n");
break;
    case 2:
printf ("Carregando jogo... \n");
break;
    case 3:
printf("Entrando nas configurações... \n");
    break;
    default:
printf("Op��o Invalida, tente Novamente.\n");
break;
}
return 0;
}
