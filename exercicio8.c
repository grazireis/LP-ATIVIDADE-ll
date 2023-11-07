#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

//Declarando Variaveis

int i;
int numero;

//Comandos

printf("Digite um valor:");
scanf("%i", &numero);
printf("\n");

for ( i = numero; i >= 0; i--)
{
    printf("- %i \n", i);
}
return 0;
}
