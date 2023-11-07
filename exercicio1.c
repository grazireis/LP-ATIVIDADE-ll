#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
//Declarando Variaveis

int tempo;

//Comando
 
 printf("Clima atual: \n");
 scanf("%d",&tempo);

 system("cls || clear");

 printf("O clima atual é %d \n",tempo);

 if (tempo >= 25)
 {
    printf("Ensolarado!");
 }else if (tempo <= 15)
 {
    printf("Chuvoso");
 }else{
    printf("Nublado!");
 }
 return 0;
 
}
