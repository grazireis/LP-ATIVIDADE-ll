#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

//Declarando Variaveis

int opcao;

//Comando

printf(" | Codigo |Produto |\n");
printf(" |   1    |Camiseta|\n");
printf(" |   2    |Cal�a   |\n");
printf(" |   3    |Sapato  |\n");
printf(" |------------------|\n");

printf("Ditige o codigo do produto escolhido:");
scanf("%i",&opcao);

system ("cls");

switch (opcao)
{
case 1:
    printf("C�digo: 1\n");
    printf("Produto: Camiseta\n");
    printf("Pre�o: R$ 20,00\n");
    break;
case 2:
printf("C�digo: 2 \n") ;
printf("Produto: Cal�a \n");
printf ("Pre�o: R$ 40,00 \n");
break;
case 3:
printf ("C�digo: 3 \n");
printf ("Produto: Sapato \n");
printf ("Pre�o: R$ 60.00 \n");
break;

default:
printf("Op��o inv�lida! \n");
break;
}
 return 0;
}

