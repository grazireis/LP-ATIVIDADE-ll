#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

//Declarando Variaveis

float nota;

//COMANDOS
printf("Digite sua nota:");
scanf("%f",&nota);

printf("Nota: %.1f \n ",nota);

if (nota >= 9 && nota <= 10)
{
    printf("Excelente! \n");
}else if(nota >= 7 &&nota <= 8.9){
    printf("Bom! \n");
}else if (nota >=5 && nota <= 6.9)
{
    printf("Razoavel! \n");
}else if (nota < 5)
{
    printf("Insuficiente! \n");
}
return 0;
}